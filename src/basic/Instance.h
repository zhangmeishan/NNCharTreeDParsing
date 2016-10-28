#ifndef _JST_INSTANCE_
#define _JST_INSTANCE_


#include "N3L.h"
#include "Metric.h"
#include "Result.h"

using namespace std;

class Instance {
public:
  Instance() {
  }
  Instance(const Instance&other){
	  copyValuesFrom(other);
  }
  ~Instance() {
  }
public:

  int charsize() const {
    return chars.size();
  }


  void clear() {
    chars.clear();
    result.clear();
  }

  void allocate(const int& csize) {
  	if(chars.size() != csize){
    	chars.resize(csize);
    }
	result.allocate( csize);
  }

  void copyValuesFrom(const Instance& anInstance) {
    allocate(anInstance.charsize());
    for (int i = 0; i < anInstance.charsize(); i++) {
      chars[i] = anInstance.chars[i];
    }
	result.copyValuesFrom(anInstance.result, &chars);
  }

  void evaluate(CResult& other, Metric& segEval, Metric& tagEval, Metric& arcEval, Metric& depEval) const {
      static unordered_set<string> seggolds, taggolds, arcgolds, depgolds;
      result.extractSEG(seggolds);
      result.extractPOS(taggolds);
      result.extractWS(arcgolds);
	  result.extractDEP(depgolds);

      static unordered_set<string> segpreds, tagpreds, arcpreds, deppreds;
      other.extractSEG(segpreds);
      other.extractPOS(tagpreds);
      other.extractWS(arcpreds);
	  other.extractDEP(deppreds);

      static unordered_set<string>::iterator iter;
      segEval.overall_label_count += seggolds.size();
      segEval.predicated_label_count += segpreds.size();
      for (iter = segpreds.begin(); iter != segpreds.end(); iter++) {
        if (seggolds.find(*iter) != seggolds.end()) {
          segEval.correct_label_count++;
        }
      }

      tagEval.overall_label_count += taggolds.size();
      tagEval.predicated_label_count += tagpreds.size();
      for (iter = tagpreds.begin(); iter != tagpreds.end(); iter++) {
        if (taggolds.find(*iter) != taggolds.end()) {
          tagEval.correct_label_count++;
        }
      }

      arcEval.overall_label_count += arcgolds.size();
      arcEval.predicated_label_count += arcpreds.size();
      for (iter = arcpreds.begin(); iter != arcpreds.end(); iter++) {
        if (arcgolds.find(*iter) != arcgolds.end()) {
          arcEval.correct_label_count++;
        }
      }

	  depEval.overall_label_count += depgolds.size();
	  depEval.predicated_label_count += deppreds.size();
	  for (iter = deppreds.begin(); iter != deppreds.end(); iter++) {
		  if (depgolds.find(*iter) != depgolds.end()) {
			  depEval.correct_label_count++;
		  }
	  }

    }


public:
  vector<string> chars;
  CResult result;
};

#endif
