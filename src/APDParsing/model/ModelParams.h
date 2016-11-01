#ifndef SRC_ModelParams_H_
#define SRC_ModelParams_H_
#include "HyperParams.h"

// Each model consists of two parts, building neural graph and defining output losses.
class ModelParams{

public:
	//should be initialized outside
	Alphabet words; // words (including subwords)
	Alphabet chars; // chars
	Alphabet charTypes; // char type
	Alphabet charCats; // char type

	//feature templates
	//append feature parameters
	APC2Params  SHI__p1_C__n0_C;
	APC2Params  SHI__p1_Wfc__n0_C;
	APC3Params  SHI__p2_Ct__p1_Ct__p2_Ct;

	//separate feature parameters
	APC2Params  PW__p1_C__n0_C;
	APC2Params  PW__p1_Wfc__n0_C;
	APC3Params  PW__p2_Ct__p1_Ct__p2_Ct;
	APC1Params  PW__p1_W;
	APC2Params  PW__p1_Wd__p1_Wl;
	APC1Params  PW__p1_WSingle;
	APC2Params  PW__p1_W__n0_C;
	APC2Params  PW__p2_W__p1_W;
	APC2Params  PW__p2_Wfc__p1_W;
	APC2Params  PW__p2_Wec__p1_W;
	APC2Params  PW__p2_Wfc__p1_Wfc;
	APC2Params  PW__p2_Wec__p1_C;
	APC2Params  PW__p2_W__p1_Wl;
	APC2Params  PW__p2_Wl__p1_W;
	APC2Params  PW__p2_W__p1_C;
	APC2Params  PW__p1_Wfc__p1_Wl;
	APC2Params  PW__p1_C__p1_Wl;
	APC3Params  PW__p1_Wmc__p1_C__p1_T;

	//character structure features
	//syntax features
	APC1Params SYN__s0_W__ac;
	APC1Params SYN__s0_T__ac;
	APC2Params SYN__s0_W__s0_T__ac;

	APC1Params SYN__s1_W__ac;
	APC1Params SYN__s1_T__ac;
	APC2Params SYN__s1_W__s1_T__ac;

	APC1Params SYN__n0_C__ac;
	APC1Params SYN__n1_C__ac;
	APC2Params SYN__n0_C__n1_C__ac; 

	APC2Params SYN__s0_W__s1_W__ac;
	APC2Params SYN__s0_T__s1_W__ac;
	APC2Params SYN__s0_W__s1_T__ac;
	APC2Params SYN__s0_T__s1_T__ac;

	APC3Params SYN__s0_W__s1_W__s0_T__ac;
	APC3Params SYN__s0_W__s1_W__s1_T__ac;
	APC3Params SYN__s0_T__s1_T__s0_W__ac;
	APC3Params SYN__s0_T__s1_T__s1_W__ac;
	APC4Params SYN__s0_W__s1_W__s0_T__s1_T__ac;

	APC1Params SYN__s0rd1_W__ac;
	APC1Params SYN__s0rd1_T__ac;
	APC1Params SYN__s0rd1_P__ac;
	APC2Params SYN__s0rd1_W__s0rd1_T__ac;

	APC1Params SYN__s0ld1_W__ac;
	APC1Params SYN__s0ld1_T__ac;
	APC1Params SYN__s0ld1_P__ac;
	APC2Params SYN__s0ld1_W__s0ld1_T__ac;

	APC1Params SYN__s0rd2_W__ac;
	APC1Params SYN__s0rd2_T__ac;
	APC1Params SYN__s0rd2_P__ac;
	APC2Params SYN__s0rd2_W__s0rd2_T__ac;

	APC1Params SYN__s0ld2_W__ac;
	APC1Params SYN__s0ld2_T__ac;
	APC1Params SYN__s0ld2_P__ac;
	APC2Params SYN__s0ld2_W__s0ld2_T__ac;

	APC3Params SYN__s0_T__s0ld1_T__s0ld2_T__ac;
	APC3Params SYN__s0_T__s0rd1_T__s0rd2_T__ac;
	APC3Params SYN__s1_T__s1ld1_T__s1ld2_T__ac;
	APC3Params SYN__s1_T__s1rd1_T__s1rd2_T__ac;

	APC3Params SYN__s0_T__s1_T__s0ld1_T__ac;
	APC3Params SYN__s0_T__s1_T__s0rd1_T__ac;
	APC3Params SYN__s0_T__s1_T__s0ld2_T__ac;
	APC3Params SYN__s0_T__s1_T__s0rd2_T__ac;
	APC3Params SYN__s0_T__s1_T__s1ld1_T__ac;
	APC3Params SYN__s0_T__s1_T__s1rd1_T__ac;
	APC3Params SYN__s0_T__s1_T__s1ld2_T__ac;
	APC3Params SYN__s0_T__s1_T__s1rd2_T__ac;

	APC2Params SYN__s0_T__s0s1_dist__ac;
	APC2Params SYN__s0_W__s0s1_dist__ac;
	APC2Params SYN__s1_T__s0s1_dist__ac;
	APC2Params SYN__s1_W__s0s1_dist__ac;
	APC3Params SYN__s0_T__s1_T__s0s1_dist__ac;
	APC3Params SYN__s0_W__s1_W__s0s1_dist__ac;

	APC2Params SYN__s0_T__s0_larity__ac;
	APC2Params SYN__s0_W__s0_larity__ac;
	APC2Params SYN__s0_T__s0_rarity__ac;
	APC2Params SYN__s0_W__s0_rarity__ac;

	APC2Params SYN__s1_T__s1_larity__ac;
	APC2Params SYN__s1_W__s1_larity__ac;
	APC2Params SYN__s1_T__s1_rarity__ac;
	APC2Params SYN__s1_W__s1_rarity__ac;

	APC2Params SYN__s0_W__n0_C__ac;
	APC2Params SYN__s0_T__n0_C__ac;
	APC3Params SYN__s0_W__s0_T__n0_C__ac;

	APC2Params SYN__s1_W__n0_C__ac;
	APC2Params SYN__s1_T__n0_C__ac;
	APC3Params SYN__s1_W__s1_T__n0_C__ac;

	APC3Params SYN__n0_C__s0_W__s1_W__ac;
	APC3Params SYN__n0_C__s0_T__s1_T__ac;
	APC3Params SYN__n0_C__s0_W__s1_T__ac;
	APC3Params SYN__n0_C__s0_T__s1_W__ac;

	APC3Params SYN__s0_T__s1_T__s2_T__ac;

	//character features
	APC1Params SYN__s0_C__ac;
	APC2Params SYN__s0_C__s0_T__ac;

	APC1Params SYN__s1_C__ac;
	APC2Params SYN__s1_C__s1_T__ac;

	APC2Params SYN__s0_C__s1_C__ac;
	APC2Params SYN__s0_T__s1_C__ac;
	APC2Params SYN__s0_C__s1_T__ac;

	APC3Params SYN__s0_C__s1_C__s0_T__ac;
	APC3Params SYN__s0_C__s1_C__s1_T__ac;
	APC3Params SYN__s0_T__s1_T__s0_C__ac;
	APC3Params SYN__s0_T__s1_T__s1_C__ac;
	APC4Params SYN__s0_C__s1_C__s0_T__s1_T__ac;

	APC1Params SYN__s0rd1_C__ac;
	APC2Params SYN__s0rd1_C__s0rd1_T__ac;

	APC1Params SYN__s0ld1_C__ac;
	APC2Params SYN__s0ld1_C__s0ld1_T__ac;

	APC1Params SYN__s0rd2_C__ac;
	APC2Params SYN__s0rd2_C__s0rd2_T__ac;

	APC1Params SYN__s0ld2_C__ac;
	APC2Params SYN__s0ld2_C__s0ld2_T__ac;

	APC2Params SYN__s0_C__s0s1_dist__ac;
	APC2Params SYN__s1_C__s0s1_dist__ac;
	APC3Params SYN__s0_C__s1_C__s0s1_dist__ac;

	APC2Params SYN__s0_C__s0_larity__ac;
	APC2Params SYN__s0_C__s0_rarity__ac;

	APC2Params SYN__s1_C__s1_larity__ac;
	APC2Params SYN__s1_C__s1_rarity__ac;

	APC2Params SYN__s0_C__n0_C__ac;
	APC3Params SYN__s0_C__s0_T__n0_C__ac;

	APC2Params SYN__s1_C__n0_C__ac;
	APC3Params SYN__s1_C__s1_T__n0_C__ac;

	APC3Params SYN__n0_C__s0_C__s1_C__ac;
	APC3Params SYN__n0_C__s0_C__s1_T__ac;
	APC3Params SYN__n0_C__s0_T__s1_C__ac;

	//tagging features
	//sep
	APC2Params SHO__p1_W__p1_T;
	APC2Params SHO__p1_W__p2_T;
	APC3Params SHO__p2_Wec__p1_W__p1_T;
	APC4Params SHO__p2_Wec__p1_W__n0_C__p1_T;
	APC2Params SHO__p1_C__p1_T;
	APC2Params SHO__p1_Cc__p1_T;

	APC1Params SHO__p1_T__ac;
	APC2Params SHO__p1_Wl__p1_T__ac;
	APC3Params SHO__p1_Wl__p1_T__p2_T;
	APC3Params SHO__p1_Wl__p1_T__p2_T__ac;

	APC1Params SHO__p1_W__ac;
	APC2Params SHO__p1_T__p2_T__ac;
	APC3Params SHO__p1_W__n0_C__p1_T;

	APC1Params SHO__n0_C__ac;
	APC1Params SHO__n0_Cc__ac;

	APC2Params SHO__n0_C__p1_T__ac;
	APC3Params SHO__n0_C__p1_T__p2_T__ac;

	APC2Params SHO__n0_C__p1_T;

	APC3Params SHO__n0_C__p1_C__p1_T__ac;

	APC2Params SHO__p1_W__p2_T__ac;
	APC2Params SHO__p2_W__p1_T__ac;

	//append
	APC3Params  SHI__p1_C__n0_C__p1_T;
	APC3Params  SHI__p1_Wfc__n0_C__p1_T;
	APC4Params  SHI__p2_Ct__p1_Ct__n0_Ct__p1_T;


	//character structure features
	//segmentation
	APC2Params  PW__p1_Whc__n0_C;
	APC2Params  PW__p2_Whc__p1_Whc;
	APC2Params  PW__p2_Wfc__p1_Whc;
	APC2Params  PW__p2_Wec__p1_Whc;
	APC2Params  PW__p2_W__p1_Whc;
	APC2Params  PW__p2_Whc__p1_W;
	APC2Params  PW__p2_Whc__p1_Wl;
	APC2Params  PW__p2_Wl__p1_Whc;
	APC2Params  PW__p2_Whc__p1_C;
	APC2Params  PW__p1_Whc__p1_Wl;

	//tagging
	APC2Params SHO__p1_Whc__p1_T;
	APC2Params SHO__p1_Whc__p2_T;
	APC3Params SHO__p2_Wec__p1_Whc__p1_T;
	APC4Params SHO__p2_Wec__p1_Whc__n0_C__p1_T;

	APC1Params SHO__p1_Whc__ac;
	APC3Params SHO__p1_Whc__n0_C__p1_T;

	APC2Params SHO__p1_Whc__p2_T__ac;
	APC2Params SHO__p2_Whc__p1_T__ac;


	//some dictionary-based arc features
	APC2Params SYN__s0s1_ALd__s0s1_CWl__ac;
	APC2Params SYN__s0s1_ARd__s0s1_CWl__ac;
	APC2Params SYN__s0s1_CWd__s0s1_CWl__ac;

	APC3Params PW__p1_Wd__p1_T__p1_Wl;

public:
	bool initial(HyperParams& opts){
		// some model parameters should be initialized outside
		if (words.size() <= 0 || chars.size() <= 0 || charTypes.size() <= 0){
			return false;
		}
		SHI__p1_C__n0_C.initial(opts.action_num);
		SHI__p1_Wfc__n0_C.initial(opts.action_num);
		SHI__p2_Ct__p1_Ct__p2_Ct.initial(opts.action_num);
		PW__p1_C__n0_C.initial(opts.action_num);
		PW__p1_Wfc__n0_C.initial(opts.action_num);
		PW__p2_Ct__p1_Ct__p2_Ct.initial(opts.action_num);
		PW__p1_W.initial(opts.action_num);
		PW__p1_Wd__p1_Wl.initial(opts.action_num);
		PW__p1_WSingle.initial(opts.action_num);
		PW__p1_W__n0_C.initial(opts.action_num);
		PW__p2_W__p1_W.initial(opts.action_num);
		PW__p2_Wfc__p1_W.initial(opts.action_num);
		PW__p2_Wec__p1_W.initial(opts.action_num);
		PW__p2_Wfc__p1_Wfc.initial(opts.action_num);
		PW__p2_Wec__p1_C.initial(opts.action_num);
		PW__p2_W__p1_Wl.initial(opts.action_num);
		PW__p2_Wl__p1_W.initial(opts.action_num);
		PW__p2_W__p1_C.initial(opts.action_num);
		PW__p1_Wfc__p1_Wl.initial(opts.action_num);
		PW__p1_C__p1_Wl.initial(opts.action_num);
		PW__p1_Wmc__p1_C__p1_T.initial(opts.action_num);
		SYN__s0_W__ac.initial(opts.action_num);
		SYN__s0_T__ac.initial(opts.action_num);
		SYN__s0_W__s0_T__ac.initial(opts.action_num);
		SYN__s1_W__ac.initial(opts.action_num);
		SYN__s1_T__ac.initial(opts.action_num);
		SYN__s1_W__s1_T__ac.initial(opts.action_num);
		SYN__n0_C__ac.initial(opts.action_num);
		SYN__n1_C__ac.initial(opts.action_num);
		SYN__n0_C__n1_C__ac.initial(opts.action_num);
		SYN__s0_W__s1_W__ac.initial(opts.action_num);
		SYN__s0_T__s1_W__ac.initial(opts.action_num);
		SYN__s0_W__s1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__ac.initial(opts.action_num);
		SYN__s0_W__s1_W__s0_T__ac.initial(opts.action_num);
		SYN__s0_W__s1_W__s1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0_W__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1_W__ac.initial(opts.action_num);
		SYN__s0_W__s1_W__s0_T__s1_T__ac.initial(opts.action_num);
		SYN__s0rd1_W__ac.initial(opts.action_num);
		SYN__s0rd1_T__ac.initial(opts.action_num);
		SYN__s0rd1_P__ac.initial(opts.action_num);
		SYN__s0rd1_W__s0rd1_T__ac.initial(opts.action_num);
		SYN__s0ld1_W__ac.initial(opts.action_num);
		SYN__s0ld1_T__ac.initial(opts.action_num);
		SYN__s0ld1_P__ac.initial(opts.action_num);
		SYN__s0ld1_W__s0ld1_T__ac.initial(opts.action_num);
		SYN__s0rd2_W__ac.initial(opts.action_num);
		SYN__s0rd2_T__ac.initial(opts.action_num);
		SYN__s0rd2_P__ac.initial(opts.action_num);
		SYN__s0rd2_W__s0rd2_T__ac.initial(opts.action_num);
		SYN__s0ld2_W__ac.initial(opts.action_num);
		SYN__s0ld2_T__ac.initial(opts.action_num);
		SYN__s0ld2_P__ac.initial(opts.action_num);
		SYN__s0ld2_W__s0ld2_T__ac.initial(opts.action_num);
		SYN__s0_T__s0ld1_T__s0ld2_T__ac.initial(opts.action_num);
		SYN__s0_T__s0rd1_T__s0rd2_T__ac.initial(opts.action_num);
		SYN__s1_T__s1ld1_T__s1ld2_T__ac.initial(opts.action_num);
		SYN__s1_T__s1rd1_T__s1rd2_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0ld1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0rd1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0ld2_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0rd2_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1ld1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1rd1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1ld2_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1rd2_T__ac.initial(opts.action_num);
		SYN__s0_T__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_W__s0s1_dist__ac.initial(opts.action_num);
		SYN__s1_T__s0s1_dist__ac.initial(opts.action_num);
		SYN__s1_W__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_W__s1_W__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_T__s0_larity__ac.initial(opts.action_num);
		SYN__s0_W__s0_larity__ac.initial(opts.action_num);
		SYN__s0_T__s0_rarity__ac.initial(opts.action_num);
		SYN__s0_W__s0_rarity__ac.initial(opts.action_num);
		SYN__s1_T__s1_larity__ac.initial(opts.action_num);
		SYN__s1_W__s1_larity__ac.initial(opts.action_num);
		SYN__s1_T__s1_rarity__ac.initial(opts.action_num);
		SYN__s1_W__s1_rarity__ac.initial(opts.action_num);
		SYN__s0_W__n0_C__ac.initial(opts.action_num);
		SYN__s0_T__n0_C__ac.initial(opts.action_num);
		SYN__s0_W__s0_T__n0_C__ac.initial(opts.action_num);
		SYN__s1_W__n0_C__ac.initial(opts.action_num);
		SYN__s1_T__n0_C__ac.initial(opts.action_num);
		SYN__s1_W__s1_T__n0_C__ac.initial(opts.action_num);
		SYN__n0_C__s0_W__s1_W__ac.initial(opts.action_num);
		SYN__n0_C__s0_T__s1_T__ac.initial(opts.action_num);
		SYN__n0_C__s0_W__s1_T__ac.initial(opts.action_num);
		SYN__n0_C__s0_T__s1_W__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s2_T__ac.initial(opts.action_num);
		SYN__s0_C__ac.initial(opts.action_num);
		SYN__s0_C__s0_T__ac.initial(opts.action_num);
		SYN__s1_C__ac.initial(opts.action_num);
		SYN__s1_C__s1_T__ac.initial(opts.action_num);
		SYN__s0_C__s1_C__ac.initial(opts.action_num);
		SYN__s0_T__s1_C__ac.initial(opts.action_num);
		SYN__s0_C__s1_T__ac.initial(opts.action_num);
		SYN__s0_C__s1_C__s0_T__ac.initial(opts.action_num);
		SYN__s0_C__s1_C__s1_T__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s0_C__ac.initial(opts.action_num);
		SYN__s0_T__s1_T__s1_C__ac.initial(opts.action_num);
		SYN__s0_C__s1_C__s0_T__s1_T__ac.initial(opts.action_num);
		SYN__s0rd1_C__ac.initial(opts.action_num);
		SYN__s0rd1_C__s0rd1_T__ac.initial(opts.action_num);
		SYN__s0ld1_C__ac.initial(opts.action_num);
		SYN__s0ld1_C__s0ld1_T__ac.initial(opts.action_num);
		SYN__s0rd2_C__ac.initial(opts.action_num);
		SYN__s0rd2_C__s0rd2_T__ac.initial(opts.action_num);
		SYN__s0ld2_C__ac.initial(opts.action_num);
		SYN__s0ld2_C__s0ld2_T__ac.initial(opts.action_num);
		SYN__s0_C__s0s1_dist__ac.initial(opts.action_num);
		SYN__s1_C__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_C__s1_C__s0s1_dist__ac.initial(opts.action_num);
		SYN__s0_C__s0_larity__ac.initial(opts.action_num);
		SYN__s0_C__s0_rarity__ac.initial(opts.action_num);
		SYN__s1_C__s1_larity__ac.initial(opts.action_num);
		SYN__s1_C__s1_rarity__ac.initial(opts.action_num);
		SYN__s0_C__n0_C__ac.initial(opts.action_num);
		SYN__s0_C__s0_T__n0_C__ac.initial(opts.action_num);
		SYN__s1_C__n0_C__ac.initial(opts.action_num);
		SYN__s1_C__s1_T__n0_C__ac.initial(opts.action_num);
		SYN__n0_C__s0_C__s1_C__ac.initial(opts.action_num);
		SYN__n0_C__s0_C__s1_T__ac.initial(opts.action_num);
		SYN__n0_C__s0_T__s1_C__ac.initial(opts.action_num);
		SHO__p1_W__p1_T.initial(opts.action_num);
		SHO__p1_W__p2_T.initial(opts.action_num);
		SHO__p2_Wec__p1_W__p1_T.initial(opts.action_num);
		SHO__p2_Wec__p1_W__n0_C__p1_T.initial(opts.action_num);
		SHO__p1_C__p1_T.initial(opts.action_num);
		SHO__p1_Cc__p1_T.initial(opts.action_num);
		SHO__p1_T__ac.initial(opts.action_num);
		SHO__p1_Wl__p1_T__ac.initial(opts.action_num);
		SHO__p1_Wl__p1_T__p2_T.initial(opts.action_num);
		SHO__p1_Wl__p1_T__p2_T__ac.initial(opts.action_num);
		SHO__p1_W__ac.initial(opts.action_num);
		SHO__p1_T__p2_T__ac.initial(opts.action_num);
		SHO__p1_W__n0_C__p1_T.initial(opts.action_num);
		SHO__n0_C__ac.initial(opts.action_num);
		SHO__n0_Cc__ac.initial(opts.action_num);
		SHO__n0_C__p1_T__ac.initial(opts.action_num);
		SHO__n0_C__p1_T__p2_T__ac.initial(opts.action_num);
		SHO__n0_C__p1_T.initial(opts.action_num);
		SHO__n0_C__p1_C__p1_T__ac.initial(opts.action_num);
		SHO__p1_W__p2_T__ac.initial(opts.action_num);
		SHO__p2_W__p1_T__ac.initial(opts.action_num);
		SHI__p1_C__n0_C__p1_T.initial(opts.action_num);
		SHI__p1_Wfc__n0_C__p1_T.initial(opts.action_num);
		SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.initial(opts.action_num);
		PW__p1_Whc__n0_C.initial(opts.action_num);
		PW__p2_Whc__p1_Whc.initial(opts.action_num);
		PW__p2_Wfc__p1_Whc.initial(opts.action_num);
		PW__p2_Wec__p1_Whc.initial(opts.action_num);
		PW__p2_W__p1_Whc.initial(opts.action_num);
		PW__p2_Whc__p1_W.initial(opts.action_num);
		PW__p2_Whc__p1_Wl.initial(opts.action_num);
		PW__p2_Wl__p1_Whc.initial(opts.action_num);
		PW__p2_Whc__p1_C.initial(opts.action_num);
		PW__p1_Whc__p1_Wl.initial(opts.action_num);
		SHO__p1_Whc__p1_T.initial(opts.action_num);
		SHO__p1_Whc__p2_T.initial(opts.action_num);
		SHO__p2_Wec__p1_Whc__p1_T.initial(opts.action_num);
		SHO__p2_Wec__p1_Whc__n0_C__p1_T.initial(opts.action_num);
		SHO__p1_Whc__ac.initial(opts.action_num);
		SHO__p1_Whc__n0_C__p1_T.initial(opts.action_num);
		SHO__p1_Whc__p2_T__ac.initial(opts.action_num);
		SHO__p2_Whc__p1_T__ac.initial(opts.action_num);
		SYN__s0s1_ALd__s0s1_CWl__ac.initial(opts.action_num);
		SYN__s0s1_ARd__s0s1_CWl__ac.initial(opts.action_num);
		SYN__s0s1_CWd__s0s1_CWl__ac.initial(opts.action_num);
		PW__p1_Wd__p1_T__p1_Wl.initial(opts.action_num);

		return true;
	}


	void exportModelParams(ModelUpdate& ada){
		SHI__p1_C__n0_C.exportAdaParams(ada);
		SHI__p1_Wfc__n0_C.exportAdaParams(ada);
		SHI__p2_Ct__p1_Ct__p2_Ct.exportAdaParams(ada);
		PW__p1_C__n0_C.exportAdaParams(ada);
		PW__p1_Wfc__n0_C.exportAdaParams(ada);
		PW__p2_Ct__p1_Ct__p2_Ct.exportAdaParams(ada);
		PW__p1_W.exportAdaParams(ada);
		PW__p1_Wd__p1_Wl.exportAdaParams(ada);
		PW__p1_WSingle.exportAdaParams(ada);
		PW__p1_W__n0_C.exportAdaParams(ada);
		PW__p2_W__p1_W.exportAdaParams(ada);
		PW__p2_Wfc__p1_W.exportAdaParams(ada);
		PW__p2_Wec__p1_W.exportAdaParams(ada);
		PW__p2_Wfc__p1_Wfc.exportAdaParams(ada);
		PW__p2_Wec__p1_C.exportAdaParams(ada);
		PW__p2_W__p1_Wl.exportAdaParams(ada);
		PW__p2_Wl__p1_W.exportAdaParams(ada);
		PW__p2_W__p1_C.exportAdaParams(ada);
		PW__p1_Wfc__p1_Wl.exportAdaParams(ada);
		PW__p1_C__p1_Wl.exportAdaParams(ada);
		PW__p1_Wmc__p1_C__p1_T.exportAdaParams(ada);
		SYN__s0_W__ac.exportAdaParams(ada);
		SYN__s0_T__ac.exportAdaParams(ada);
		SYN__s0_W__s0_T__ac.exportAdaParams(ada);
		SYN__s1_W__ac.exportAdaParams(ada);
		SYN__s1_T__ac.exportAdaParams(ada);
		SYN__s1_W__s1_T__ac.exportAdaParams(ada);
		SYN__n0_C__ac.exportAdaParams(ada);
		SYN__n1_C__ac.exportAdaParams(ada);
		SYN__n0_C__n1_C__ac.exportAdaParams(ada);
		SYN__s0_W__s1_W__ac.exportAdaParams(ada);
		SYN__s0_T__s1_W__ac.exportAdaParams(ada);
		SYN__s0_W__s1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__ac.exportAdaParams(ada);
		SYN__s0_W__s1_W__s0_T__ac.exportAdaParams(ada);
		SYN__s0_W__s1_W__s1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0_W__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1_W__ac.exportAdaParams(ada);
		SYN__s0_W__s1_W__s0_T__s1_T__ac.exportAdaParams(ada);
		SYN__s0rd1_W__ac.exportAdaParams(ada);
		SYN__s0rd1_T__ac.exportAdaParams(ada);
		SYN__s0rd1_P__ac.exportAdaParams(ada);
		SYN__s0rd1_W__s0rd1_T__ac.exportAdaParams(ada);
		SYN__s0ld1_W__ac.exportAdaParams(ada);
		SYN__s0ld1_T__ac.exportAdaParams(ada);
		SYN__s0ld1_P__ac.exportAdaParams(ada);
		SYN__s0ld1_W__s0ld1_T__ac.exportAdaParams(ada);
		SYN__s0rd2_W__ac.exportAdaParams(ada);
		SYN__s0rd2_T__ac.exportAdaParams(ada);
		SYN__s0rd2_P__ac.exportAdaParams(ada);
		SYN__s0rd2_W__s0rd2_T__ac.exportAdaParams(ada);
		SYN__s0ld2_W__ac.exportAdaParams(ada);
		SYN__s0ld2_T__ac.exportAdaParams(ada);
		SYN__s0ld2_P__ac.exportAdaParams(ada);
		SYN__s0ld2_W__s0ld2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s0ld1_T__s0ld2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s0rd1_T__s0rd2_T__ac.exportAdaParams(ada);
		SYN__s1_T__s1ld1_T__s1ld2_T__ac.exportAdaParams(ada);
		SYN__s1_T__s1rd1_T__s1rd2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0ld1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0rd1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0ld2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0rd2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1ld1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1rd1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1ld2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1rd2_T__ac.exportAdaParams(ada);
		SYN__s0_T__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_W__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s1_T__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s1_W__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_W__s1_W__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_T__s0_larity__ac.exportAdaParams(ada);
		SYN__s0_W__s0_larity__ac.exportAdaParams(ada);
		SYN__s0_T__s0_rarity__ac.exportAdaParams(ada);
		SYN__s0_W__s0_rarity__ac.exportAdaParams(ada);
		SYN__s1_T__s1_larity__ac.exportAdaParams(ada);
		SYN__s1_W__s1_larity__ac.exportAdaParams(ada);
		SYN__s1_T__s1_rarity__ac.exportAdaParams(ada);
		SYN__s1_W__s1_rarity__ac.exportAdaParams(ada);
		SYN__s0_W__n0_C__ac.exportAdaParams(ada);
		SYN__s0_T__n0_C__ac.exportAdaParams(ada);
		SYN__s0_W__s0_T__n0_C__ac.exportAdaParams(ada);
		SYN__s1_W__n0_C__ac.exportAdaParams(ada);
		SYN__s1_T__n0_C__ac.exportAdaParams(ada);
		SYN__s1_W__s1_T__n0_C__ac.exportAdaParams(ada);
		SYN__n0_C__s0_W__s1_W__ac.exportAdaParams(ada);
		SYN__n0_C__s0_T__s1_T__ac.exportAdaParams(ada);
		SYN__n0_C__s0_W__s1_T__ac.exportAdaParams(ada);
		SYN__n0_C__s0_T__s1_W__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s2_T__ac.exportAdaParams(ada);
		SYN__s0_C__ac.exportAdaParams(ada);
		SYN__s0_C__s0_T__ac.exportAdaParams(ada);
		SYN__s1_C__ac.exportAdaParams(ada);
		SYN__s1_C__s1_T__ac.exportAdaParams(ada);
		SYN__s0_C__s1_C__ac.exportAdaParams(ada);
		SYN__s0_T__s1_C__ac.exportAdaParams(ada);
		SYN__s0_C__s1_T__ac.exportAdaParams(ada);
		SYN__s0_C__s1_C__s0_T__ac.exportAdaParams(ada);
		SYN__s0_C__s1_C__s1_T__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s0_C__ac.exportAdaParams(ada);
		SYN__s0_T__s1_T__s1_C__ac.exportAdaParams(ada);
		SYN__s0_C__s1_C__s0_T__s1_T__ac.exportAdaParams(ada);
		SYN__s0rd1_C__ac.exportAdaParams(ada);
		SYN__s0rd1_C__s0rd1_T__ac.exportAdaParams(ada);
		SYN__s0ld1_C__ac.exportAdaParams(ada);
		SYN__s0ld1_C__s0ld1_T__ac.exportAdaParams(ada);
		SYN__s0rd2_C__ac.exportAdaParams(ada);
		SYN__s0rd2_C__s0rd2_T__ac.exportAdaParams(ada);
		SYN__s0ld2_C__ac.exportAdaParams(ada);
		SYN__s0ld2_C__s0ld2_T__ac.exportAdaParams(ada);
		SYN__s0_C__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s1_C__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_C__s1_C__s0s1_dist__ac.exportAdaParams(ada);
		SYN__s0_C__s0_larity__ac.exportAdaParams(ada);
		SYN__s0_C__s0_rarity__ac.exportAdaParams(ada);
		SYN__s1_C__s1_larity__ac.exportAdaParams(ada);
		SYN__s1_C__s1_rarity__ac.exportAdaParams(ada);
		SYN__s0_C__n0_C__ac.exportAdaParams(ada);
		SYN__s0_C__s0_T__n0_C__ac.exportAdaParams(ada);
		SYN__s1_C__n0_C__ac.exportAdaParams(ada);
		SYN__s1_C__s1_T__n0_C__ac.exportAdaParams(ada);
		SYN__n0_C__s0_C__s1_C__ac.exportAdaParams(ada);
		SYN__n0_C__s0_C__s1_T__ac.exportAdaParams(ada);
		SYN__n0_C__s0_T__s1_C__ac.exportAdaParams(ada);
		SHO__p1_W__p1_T.exportAdaParams(ada);
		SHO__p1_W__p2_T.exportAdaParams(ada);
		SHO__p2_Wec__p1_W__p1_T.exportAdaParams(ada);
		SHO__p2_Wec__p1_W__n0_C__p1_T.exportAdaParams(ada);
		SHO__p1_C__p1_T.exportAdaParams(ada);
		SHO__p1_Cc__p1_T.exportAdaParams(ada);
		SHO__p1_T__ac.exportAdaParams(ada);
		SHO__p1_Wl__p1_T__ac.exportAdaParams(ada);
		SHO__p1_Wl__p1_T__p2_T.exportAdaParams(ada);
		SHO__p1_Wl__p1_T__p2_T__ac.exportAdaParams(ada);
		SHO__p1_W__ac.exportAdaParams(ada);
		SHO__p1_T__p2_T__ac.exportAdaParams(ada);
		SHO__p1_W__n0_C__p1_T.exportAdaParams(ada);
		SHO__n0_C__ac.exportAdaParams(ada);
		SHO__n0_Cc__ac.exportAdaParams(ada);
		SHO__n0_C__p1_T__ac.exportAdaParams(ada);
		SHO__n0_C__p1_T__p2_T__ac.exportAdaParams(ada);
		SHO__n0_C__p1_T.exportAdaParams(ada);
		SHO__n0_C__p1_C__p1_T__ac.exportAdaParams(ada);
		SHO__p1_W__p2_T__ac.exportAdaParams(ada);
		SHO__p2_W__p1_T__ac.exportAdaParams(ada);
		SHI__p1_C__n0_C__p1_T.exportAdaParams(ada);
		SHI__p1_Wfc__n0_C__p1_T.exportAdaParams(ada);
		SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.exportAdaParams(ada);
		PW__p1_Whc__n0_C.exportAdaParams(ada);
		PW__p2_Whc__p1_Whc.exportAdaParams(ada);
		PW__p2_Wfc__p1_Whc.exportAdaParams(ada);
		PW__p2_Wec__p1_Whc.exportAdaParams(ada);
		PW__p2_W__p1_Whc.exportAdaParams(ada);
		PW__p2_Whc__p1_W.exportAdaParams(ada);
		PW__p2_Whc__p1_Wl.exportAdaParams(ada);
		PW__p2_Wl__p1_Whc.exportAdaParams(ada);
		PW__p2_Whc__p1_C.exportAdaParams(ada);
		PW__p1_Whc__p1_Wl.exportAdaParams(ada);
		SHO__p1_Whc__p1_T.exportAdaParams(ada);
		SHO__p1_Whc__p2_T.exportAdaParams(ada);
		SHO__p2_Wec__p1_Whc__p1_T.exportAdaParams(ada);
		SHO__p2_Wec__p1_Whc__n0_C__p1_T.exportAdaParams(ada);
		SHO__p1_Whc__ac.exportAdaParams(ada);
		SHO__p1_Whc__n0_C__p1_T.exportAdaParams(ada);
		SHO__p1_Whc__p2_T__ac.exportAdaParams(ada);
		SHO__p2_Whc__p1_T__ac.exportAdaParams(ada);
		SYN__s0s1_ALd__s0s1_CWl__ac.exportAdaParams(ada);
		SYN__s0s1_ARd__s0s1_CWl__ac.exportAdaParams(ada);
		SYN__s0s1_CWd__s0s1_CWl__ac.exportAdaParams(ada);
		PW__p1_Wd__p1_T__p1_Wl.exportAdaParams(ada);
	}


	inline void setFixed(const int& base = 1){
		SHI__p1_C__n0_C.setFixed(base);
		SHI__p1_Wfc__n0_C.setFixed(base);
		SHI__p2_Ct__p1_Ct__p2_Ct.setFixed(base);
		PW__p1_C__n0_C.setFixed(base);
		PW__p1_Wfc__n0_C.setFixed(base);
		PW__p2_Ct__p1_Ct__p2_Ct.setFixed(base);
		PW__p1_W.setFixed(base);
		PW__p1_Wd__p1_Wl.setFixed(base);
		PW__p1_WSingle.setFixed(base);
		PW__p1_W__n0_C.setFixed(base);
		PW__p2_W__p1_W.setFixed(base);
		PW__p2_Wfc__p1_W.setFixed(base);
		PW__p2_Wec__p1_W.setFixed(base);
		PW__p2_Wfc__p1_Wfc.setFixed(base);
		PW__p2_Wec__p1_C.setFixed(base);
		PW__p2_W__p1_Wl.setFixed(base);
		PW__p2_Wl__p1_W.setFixed(base);
		PW__p2_W__p1_C.setFixed(base);
		PW__p1_Wfc__p1_Wl.setFixed(base);
		PW__p1_C__p1_Wl.setFixed(base);
		PW__p1_Wmc__p1_C__p1_T.setFixed(base);
		SYN__s0_W__ac.setFixed(base);
		SYN__s0_T__ac.setFixed(base);
		SYN__s0_W__s0_T__ac.setFixed(base);
		SYN__s1_W__ac.setFixed(base);
		SYN__s1_T__ac.setFixed(base);
		SYN__s1_W__s1_T__ac.setFixed(base);
		SYN__n0_C__ac.setFixed(base);
		SYN__n1_C__ac.setFixed(base);
		SYN__n0_C__n1_C__ac.setFixed(base);
		SYN__s0_W__s1_W__ac.setFixed(base);
		SYN__s0_T__s1_W__ac.setFixed(base);
		SYN__s0_W__s1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__ac.setFixed(base);
		SYN__s0_W__s1_W__s0_T__ac.setFixed(base);
		SYN__s0_W__s1_W__s1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0_W__ac.setFixed(base);
		SYN__s0_T__s1_T__s1_W__ac.setFixed(base);
		SYN__s0_W__s1_W__s0_T__s1_T__ac.setFixed(base);
		SYN__s0rd1_W__ac.setFixed(base);
		SYN__s0rd1_T__ac.setFixed(base);
		SYN__s0rd1_P__ac.setFixed(base);
		SYN__s0rd1_W__s0rd1_T__ac.setFixed(base);
		SYN__s0ld1_W__ac.setFixed(base);
		SYN__s0ld1_T__ac.setFixed(base);
		SYN__s0ld1_P__ac.setFixed(base);
		SYN__s0ld1_W__s0ld1_T__ac.setFixed(base);
		SYN__s0rd2_W__ac.setFixed(base);
		SYN__s0rd2_T__ac.setFixed(base);
		SYN__s0rd2_P__ac.setFixed(base);
		SYN__s0rd2_W__s0rd2_T__ac.setFixed(base);
		SYN__s0ld2_W__ac.setFixed(base);
		SYN__s0ld2_T__ac.setFixed(base);
		SYN__s0ld2_P__ac.setFixed(base);
		SYN__s0ld2_W__s0ld2_T__ac.setFixed(base);
		SYN__s0_T__s0ld1_T__s0ld2_T__ac.setFixed(base);
		SYN__s0_T__s0rd1_T__s0rd2_T__ac.setFixed(base);
		SYN__s1_T__s1ld1_T__s1ld2_T__ac.setFixed(base);
		SYN__s1_T__s1rd1_T__s1rd2_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0ld1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0rd1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0ld2_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0rd2_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s1ld1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s1rd1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s1ld2_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s1rd2_T__ac.setFixed(base);
		SYN__s0_T__s0s1_dist__ac.setFixed(base);
		SYN__s0_W__s0s1_dist__ac.setFixed(base);
		SYN__s1_T__s0s1_dist__ac.setFixed(base);
		SYN__s1_W__s0s1_dist__ac.setFixed(base);
		SYN__s0_T__s1_T__s0s1_dist__ac.setFixed(base);
		SYN__s0_W__s1_W__s0s1_dist__ac.setFixed(base);
		SYN__s0_T__s0_larity__ac.setFixed(base);
		SYN__s0_W__s0_larity__ac.setFixed(base);
		SYN__s0_T__s0_rarity__ac.setFixed(base);
		SYN__s0_W__s0_rarity__ac.setFixed(base);
		SYN__s1_T__s1_larity__ac.setFixed(base);
		SYN__s1_W__s1_larity__ac.setFixed(base);
		SYN__s1_T__s1_rarity__ac.setFixed(base);
		SYN__s1_W__s1_rarity__ac.setFixed(base);
		SYN__s0_W__n0_C__ac.setFixed(base);
		SYN__s0_T__n0_C__ac.setFixed(base);
		SYN__s0_W__s0_T__n0_C__ac.setFixed(base);
		SYN__s1_W__n0_C__ac.setFixed(base);
		SYN__s1_T__n0_C__ac.setFixed(base);
		SYN__s1_W__s1_T__n0_C__ac.setFixed(base);
		SYN__n0_C__s0_W__s1_W__ac.setFixed(base);
		SYN__n0_C__s0_T__s1_T__ac.setFixed(base);
		SYN__n0_C__s0_W__s1_T__ac.setFixed(base);
		SYN__n0_C__s0_T__s1_W__ac.setFixed(base);
		SYN__s0_T__s1_T__s2_T__ac.setFixed(base);
		SYN__s0_C__ac.setFixed(base);
		SYN__s0_C__s0_T__ac.setFixed(base);
		SYN__s1_C__ac.setFixed(base);
		SYN__s1_C__s1_T__ac.setFixed(base);
		SYN__s0_C__s1_C__ac.setFixed(base);
		SYN__s0_T__s1_C__ac.setFixed(base);
		SYN__s0_C__s1_T__ac.setFixed(base);
		SYN__s0_C__s1_C__s0_T__ac.setFixed(base);
		SYN__s0_C__s1_C__s1_T__ac.setFixed(base);
		SYN__s0_T__s1_T__s0_C__ac.setFixed(base);
		SYN__s0_T__s1_T__s1_C__ac.setFixed(base);
		SYN__s0_C__s1_C__s0_T__s1_T__ac.setFixed(base);
		SYN__s0rd1_C__ac.setFixed(base);
		SYN__s0rd1_C__s0rd1_T__ac.setFixed(base);
		SYN__s0ld1_C__ac.setFixed(base);
		SYN__s0ld1_C__s0ld1_T__ac.setFixed(base);
		SYN__s0rd2_C__ac.setFixed(base);
		SYN__s0rd2_C__s0rd2_T__ac.setFixed(base);
		SYN__s0ld2_C__ac.setFixed(base);
		SYN__s0ld2_C__s0ld2_T__ac.setFixed(base);
		SYN__s0_C__s0s1_dist__ac.setFixed(base);
		SYN__s1_C__s0s1_dist__ac.setFixed(base);
		SYN__s0_C__s1_C__s0s1_dist__ac.setFixed(base);
		SYN__s0_C__s0_larity__ac.setFixed(base);
		SYN__s0_C__s0_rarity__ac.setFixed(base);
		SYN__s1_C__s1_larity__ac.setFixed(base);
		SYN__s1_C__s1_rarity__ac.setFixed(base);
		SYN__s0_C__n0_C__ac.setFixed(base);
		SYN__s0_C__s0_T__n0_C__ac.setFixed(base);
		SYN__s1_C__n0_C__ac.setFixed(base);
		SYN__s1_C__s1_T__n0_C__ac.setFixed(base);
		SYN__n0_C__s0_C__s1_C__ac.setFixed(base);
		SYN__n0_C__s0_C__s1_T__ac.setFixed(base);
		SYN__n0_C__s0_T__s1_C__ac.setFixed(base);
		SHO__p1_W__p1_T.setFixed(base);
		SHO__p1_W__p2_T.setFixed(base);
		SHO__p2_Wec__p1_W__p1_T.setFixed(base);
		SHO__p2_Wec__p1_W__n0_C__p1_T.setFixed(base);
		SHO__p1_C__p1_T.setFixed(base);
		SHO__p1_Cc__p1_T.setFixed(base);
		SHO__p1_T__ac.setFixed(base);
		SHO__p1_Wl__p1_T__ac.setFixed(base);
		SHO__p1_Wl__p1_T__p2_T.setFixed(base);
		SHO__p1_Wl__p1_T__p2_T__ac.setFixed(base);
		SHO__p1_W__ac.setFixed(base);
		SHO__p1_T__p2_T__ac.setFixed(base);
		SHO__p1_W__n0_C__p1_T.setFixed(base);
		SHO__n0_C__ac.setFixed(base);
		SHO__n0_Cc__ac.setFixed(base);
		SHO__n0_C__p1_T__ac.setFixed(base);
		SHO__n0_C__p1_T__p2_T__ac.setFixed(base);
		SHO__n0_C__p1_T.setFixed(base);
		SHO__n0_C__p1_C__p1_T__ac.setFixed(base);
		SHO__p1_W__p2_T__ac.setFixed(base);
		SHO__p2_W__p1_T__ac.setFixed(base);
		SHI__p1_C__n0_C__p1_T.setFixed(base);
		SHI__p1_Wfc__n0_C__p1_T.setFixed(base);
		SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.setFixed(base);
		PW__p1_Whc__n0_C.setFixed(base);
		PW__p2_Whc__p1_Whc.setFixed(base);
		PW__p2_Wfc__p1_Whc.setFixed(base);
		PW__p2_Wec__p1_Whc.setFixed(base);
		PW__p2_W__p1_Whc.setFixed(base);
		PW__p2_Whc__p1_W.setFixed(base);
		PW__p2_Whc__p1_Wl.setFixed(base);
		PW__p2_Wl__p1_Whc.setFixed(base);
		PW__p2_Whc__p1_C.setFixed(base);
		PW__p1_Whc__p1_Wl.setFixed(base);
		SHO__p1_Whc__p1_T.setFixed(base);
		SHO__p1_Whc__p2_T.setFixed(base);
		SHO__p2_Wec__p1_Whc__p1_T.setFixed(base);
		SHO__p2_Wec__p1_Whc__n0_C__p1_T.setFixed(base);
		SHO__p1_Whc__ac.setFixed(base);
		SHO__p1_Whc__n0_C__p1_T.setFixed(base);
		SHO__p1_Whc__p2_T__ac.setFixed(base);
		SHO__p2_Whc__p1_T__ac.setFixed(base);
		SYN__s0s1_ALd__s0s1_CWl__ac.setFixed(base);
		SYN__s0s1_ARd__s0s1_CWl__ac.setFixed(base);
		SYN__s0s1_CWd__s0s1_CWl__ac.setFixed(base);
		PW__p1_Wd__p1_T__p1_Wl.setFixed(base);
	}

	// will add it later
	void saveModel(){

	}

	void loadModel(const string& inFile){

	}

};

#endif /* SRC__ModelParams__H__ */