/*
 * CResult.h
 *
 *  Created on: June 5, 2016
 *      Author: PanDa
 */

#ifndef BASIC_CRESULT_H_
#define BASIC_CRESULT_H_

#include <string>
#include <vector>
#include <fstream>
#include "N3L.h"
#include "Alphabet.h"
#include "Utf.h"

using namespace std;

class CResult {
public:
	vector<string> postags;
	vector<string> deplabels;
	vector<bool> segmarks;  //position label
	vector<bool> depmarks;  //inter or inner dependency
	vector<int> charheads;
	
	const vector<string>* chars;
public:

	inline void clear() {
		chars = NULL;
		deplabels.clear();
		postags.clear();
		charheads.clear();
		segmarks.clear();
		depmarks.clear();
	}

	inline void allocate(const int& csize) {
		//chars = NULL;
		if (deplabels.size() != csize){
			deplabels.resize(csize);
			postags.resize(csize);
			charheads.resize(csize);
			segmarks.resize(csize);
			depmarks.resize(csize);
		}
	}

	inline int charsize() const {
		return charheads.size();
	}


	inline void copyValuesFrom(const CResult& result) {
		static int csize;
		csize = result.charsize();
		allocate(csize);

		for (int i = 0; i < csize; i++) {
			charheads[i] = result.charheads[i];
			segmarks[i] = result.segmarks[i];
			deplabels[i] = result.deplabels[i];
			postags[i] = result.postags[i];
			depmarks[i] = result.depmarks[i];
		}
		chars = result.chars;
	}

	inline void copyValuesFrom(const CResult& result, const vector<string>* pchars) {
		static int csize;
		csize = result.charsize();
		allocate(csize);

		for (int i = 0; i < csize; i++) {
			charheads[i] = result.charheads[i];
			segmarks[i] = result.segmarks[i];
			deplabels[i] = result.deplabels[i];
			postags[i] = result.postags[i];
			depmarks[i] = result.depmarks[i];
		}
		chars = pchars;
	}

	inline void extractWS(unordered_set<string>& arcIndexes) const {
		arcIndexes.clear();
		int idx = 0;
		int beginId = 0;
		int csize = charsize();
		while (idx < csize) {			
			if (idx == csize - 1 ||  segmarks[idx+1]) {
				stringstream ss;
				ss << "[" << beginId << "," << idx << "]";
				for (int idz = beginId; idz <= idx; idz++){
					if (charheads[idz] < beginId || charheads[idz] > idx){
						ss << "(" << idz << "," << -1 << ")"; //root
					}
					else{
						ss << "(" << idz << "," << charheads[idz] << ")";
					}
				}
				arcIndexes.insert(ss.str());
				beginId = idx + 1;
			}
			idx++;
		}
	}

	inline void extractSEG(unordered_set<string>& segIndexes) const {
		segIndexes.clear();
		int idx = 0;
		int beginId = 0;
		int csize = charsize();
		while (idx < csize) {
			if (idx == csize - 1 || segmarks[idx + 1]) {
				stringstream ss;
				ss << "[" << beginId << "," << idx << "]";
				segIndexes.insert(ss.str());
				beginId = idx + 1;
			}
			idx++;
		}
	}

	inline void extractPOS(unordered_set<string>& posIndexes) const {
		posIndexes.clear();
		int idx = 0;
		int beginId = 0;
		int csize = charsize();
		while (idx < csize) {
			if (idx == csize - 1 || segmarks[idx + 1]) {
				stringstream ss;
				ss << "[" << beginId << "," << idx << "]" + postags[beginId];
				posIndexes.insert(ss.str());
				beginId = idx + 1;
			}
			idx++;
		}
	}


	inline void extractDEP(unordered_set<string>& depIndexes) const {
		depIndexes.clear();
		int idx = 0;
		int beginId = 0;
		int csize = charsize();
		vector<int> begins, ends, heads;
		begins.resize(csize);
		ends.resize(csize);
		heads.resize(csize);
		while (idx < csize) {
			if (idx == csize - 1 || segmarks[idx + 1]) {
				int headId = -1;
				for (int idz = beginId; idz <= idx; idz++){
					if (charheads[idz] < beginId || charheads[idz] > idx){
						if (headId == -1) headId = idz;
						else std::cout << "multiple heads for one segmentation!" << std::endl;

						if (!depmarks[idz]) {
							std::cout << "head dep not match! should be true for depmarks." << std::endl;
						}
					}
					else{
						if (depmarks[idz]) {
							std::cout << "head dep not match! should be false for depmarks." << std::endl;
						}
					}
				}
				for (int idz = beginId; idz <= idx; idz++){
					begins[idz] = beginId;
					ends[idz] = idx;
					heads[idz] = headId;
				}
				beginId = idx + 1;
			}
			idx++;
		}

		idx = 0;
		beginId = 0;
		while (idx < csize) {
			if (idx == csize - 1 || segmarks[idx + 1]) {
				int headId = heads[idx];
				stringstream ss;
				ss << "[" << beginId << "," << idx << "] " + deplabels[headId];
				if (charheads[headId] == -1){
					ss << " [-1, -1]";
				}
				else{
					int depHeadId = charheads[headId];
					ss << " [" << begins[depHeadId] << "," << ends[depHeadId] << "]";
				}
				depIndexes.insert(ss.str());
				beginId = idx + 1;
			}
			idx++;
		}
	}

};

inline std::ostream & operator << (std::ostream &os, const CResult &result) {
	for (int i = 0; i < result.charsize(); ++i) {
		os << (*result.chars)[i] << " " << result.postags[i] << " " << (result.segmarks[i] ? "b" : "i") << " " << result.charheads[i]
			<< " " << result.deplabels[i] << " " << (result.segmarks[i] ? "out" : "in") << std::endl;
	}
	os << endl;
	return os;
}

#endif
