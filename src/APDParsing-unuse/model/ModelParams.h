#ifndef SRC_ModelParams_H_
#define SRC_ModelParams_H_
#include "HyperParams.h"

// Each model consists of two parts, building neural graph and defining output losses.
class ModelParams{
public:
	const static int max_seg_length = 5;
public:
	//should be initialized outside
	Alphabet words; // words (including subwords)
	Alphabet chars; // chars
	Alphabet charTypes; // char type
	Alphabet charCats; // char type

	//feature templates
	APCParams  SHIs;
	APCParams  PWs;
	APCParams  SYNs1, SYNs2;
	APCParams  SYNChars;
	APCParams  SHOs, SHOAcs;
	APCParams  ARCIns;

public:
	bool initial(HyperParams& opts){
		// some model parameters should be initialized outside
		if (words.size() <= 0 || chars.size() <= 0 || charTypes.size() <= 0){
			return false;
		}
		SHIs.initial(opts.action_num);
		PWs.initial(opts.action_num);
		SYNs1.initial(opts.action_num);
		SYNs2.initial(opts.action_num);
		SYNChars.initial(opts.action_num);
		SHOs.initial(opts.action_num);
		SHOAcs.initial(opts.action_num);
		ARCIns.initial(opts.action_num);

		return true;
	}


	void exportModelParams(ModelUpdate& ada){
		SHIs.exportAdaParams(ada);
		PWs.exportAdaParams(ada);
		SYNs1.exportAdaParams(ada);
		SYNs2.exportAdaParams(ada);
		SYNChars.exportAdaParams(ada);
		SHOs.exportAdaParams(ada);
		SHOAcs.exportAdaParams(ada);
		ARCIns.exportAdaParams(ada);
	}


	inline void setFixed(const int& base = 1){
		SHIs.setFixed(base);
		PWs.setFixed(base);
		SYNs1.setFixed(base);
		SYNs2.setFixed(base);
		SYNChars.setFixed(base);
		SHOs.setFixed(base);
		SHOAcs.setFixed(base);
		ARCIns.setFixed(base);
	}

	// will add it later
	void saveModel(){

	}

	void loadModel(const string& inFile){

	}

};

#endif /* SRC__ModelParams__H__ */