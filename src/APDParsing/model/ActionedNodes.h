/*
 * Feature.h
 *
 *  Created on: Aug 25, 2016
 *      Author: mszhang
 */

#ifndef SRC_ActionedNodes_H_
#define SRC_ActionedNodes_H_

#include "ModelParams.h"
#include "AtomFeatures.h"

struct ActionedNodes {
	const static int max_seg_length = 5;
	APC2Node  SHI__p1_C__n0_C;
	APC2Node  SHI__p1_Wfc__n0_C;
	APC3Node  SHI__p2_Ct__p1_Ct__p2_Ct;
	APC2Node  PW__p1_C__n0_C;
	APC2Node  PW__p1_Wfc__n0_C;
	APC3Node  PW__p2_Ct__p1_Ct__p2_Ct;
	APC1Node  PW__p1_W;
	APC2Node  PW__p1_Wd__p1_Wl;
	APC1Node  PW__p1_WSingle;
	APC2Node  PW__p1_W__n0_C;
	APC2Node  PW__p2_W__p1_W;
	APC2Node  PW__p2_Wfc__p1_W;
	APC2Node  PW__p2_Wec__p1_W;
	APC2Node  PW__p2_Wfc__p1_Wfc;
	APC2Node  PW__p2_Wec__p1_C;
	APC2Node  PW__p2_W__p1_Wl;
	APC2Node  PW__p2_Wl__p1_W;
	APC2Node  PW__p2_W__p1_C;
	APC2Node  PW__p1_Wfc__p1_Wl;
	APC2Node  PW__p1_C__p1_Wl;
	vector<APC3Node>  PW__p1_Wmc__p1_C__p1_T;
	APC1Node SYN__s0_W__ac;
	APC1Node SYN__s0_T__ac;
	APC2Node SYN__s0_W__s0_T__ac;
	APC1Node SYN__s1_W__ac;
	APC1Node SYN__s1_T__ac;
	APC2Node SYN__s1_W__s1_T__ac;
	APC1Node SYN__n0_C__ac;
	APC1Node SYN__n1_C__ac;
	APC2Node SYN__n0_C__n1_C__ac;
	APC2Node SYN__s0_W__s1_W__ac;
	APC2Node SYN__s0_T__s1_W__ac;
	APC2Node SYN__s0_W__s1_T__ac;
	APC2Node SYN__s0_T__s1_T__ac;
	APC3Node SYN__s0_W__s1_W__s0_T__ac;
	APC3Node SYN__s0_W__s1_W__s1_T__ac;
	APC3Node SYN__s0_T__s1_T__s0_W__ac;
	APC3Node SYN__s0_T__s1_T__s1_W__ac;
	APC4Node SYN__s0_W__s1_W__s0_T__s1_T__ac;
	APC1Node SYN__s0rd1_W__ac;
	APC1Node SYN__s0rd1_T__ac;
	APC1Node SYN__s0rd1_P__ac;
	APC2Node SYN__s0rd1_W__s0rd1_T__ac;
	APC1Node SYN__s0ld1_W__ac;
	APC1Node SYN__s0ld1_T__ac;
	APC1Node SYN__s0ld1_P__ac;
	APC2Node SYN__s0ld1_W__s0ld1_T__ac;
	APC1Node SYN__s0rd2_W__ac;
	APC1Node SYN__s0rd2_T__ac;
	APC1Node SYN__s0rd2_P__ac;
	APC2Node SYN__s0rd2_W__s0rd2_T__ac;
	APC1Node SYN__s0ld2_W__ac;
	APC1Node SYN__s0ld2_T__ac;
	APC1Node SYN__s0ld2_P__ac;
	APC2Node SYN__s0ld2_W__s0ld2_T__ac;
	APC3Node SYN__s0_T__s0ld1_T__s0ld2_T__ac;
	APC3Node SYN__s0_T__s0rd1_T__s0rd2_T__ac;
	APC3Node SYN__s1_T__s1ld1_T__s1ld2_T__ac;
	APC3Node SYN__s1_T__s1rd1_T__s1rd2_T__ac;
	APC3Node SYN__s0_T__s1_T__s0ld1_T__ac;
	APC3Node SYN__s0_T__s1_T__s0rd1_T__ac;
	APC3Node SYN__s0_T__s1_T__s0ld2_T__ac;
	APC3Node SYN__s0_T__s1_T__s0rd2_T__ac;
	APC3Node SYN__s0_T__s1_T__s1ld1_T__ac;
	APC3Node SYN__s0_T__s1_T__s1rd1_T__ac;
	APC3Node SYN__s0_T__s1_T__s1ld2_T__ac;
	APC3Node SYN__s0_T__s1_T__s1rd2_T__ac;
	APC2Node SYN__s0_T__s0s1_dist__ac;
	APC2Node SYN__s0_W__s0s1_dist__ac;
	APC2Node SYN__s1_T__s0s1_dist__ac;
	APC2Node SYN__s1_W__s0s1_dist__ac;
	APC3Node SYN__s0_T__s1_T__s0s1_dist__ac;
	APC3Node SYN__s0_W__s1_W__s0s1_dist__ac;
	APC2Node SYN__s0_T__s0_larity__ac;
	APC2Node SYN__s0_W__s0_larity__ac;
	APC2Node SYN__s0_T__s0_rarity__ac;
	APC2Node SYN__s0_W__s0_rarity__ac;
	APC2Node SYN__s1_T__s1_larity__ac;
	APC2Node SYN__s1_W__s1_larity__ac;
	APC2Node SYN__s1_T__s1_rarity__ac;
	APC2Node SYN__s1_W__s1_rarity__ac;
	APC2Node SYN__s0_W__n0_C__ac;
	APC2Node SYN__s0_T__n0_C__ac;
	APC3Node SYN__s0_W__s0_T__n0_C__ac;
	APC2Node SYN__s1_W__n0_C__ac;
	APC2Node SYN__s1_T__n0_C__ac;
	APC3Node SYN__s1_W__s1_T__n0_C__ac;
	APC3Node SYN__n0_C__s0_W__s1_W__ac;
	APC3Node SYN__n0_C__s0_T__s1_T__ac;
	APC3Node SYN__n0_C__s0_W__s1_T__ac;
	APC3Node SYN__n0_C__s0_T__s1_W__ac;
	APC3Node SYN__s0_T__s1_T__s2_T__ac;
	APC1Node SYN__s0_C__ac;
	APC2Node SYN__s0_C__s0_T__ac;
	APC1Node SYN__s1_C__ac;
	APC2Node SYN__s1_C__s1_T__ac;
	APC2Node SYN__s0_C__s1_C__ac;
	APC2Node SYN__s0_T__s1_C__ac;
	APC2Node SYN__s0_C__s1_T__ac;
	APC3Node SYN__s0_C__s1_C__s0_T__ac;
	APC3Node SYN__s0_C__s1_C__s1_T__ac;
	APC3Node SYN__s0_T__s1_T__s0_C__ac;
	APC3Node SYN__s0_T__s1_T__s1_C__ac;
	APC4Node SYN__s0_C__s1_C__s0_T__s1_T__ac;
	APC1Node SYN__s0rd1_C__ac;
	APC2Node SYN__s0rd1_C__s0rd1_T__ac;
	APC1Node SYN__s0ld1_C__ac;
	APC2Node SYN__s0ld1_C__s0ld1_T__ac;
	APC1Node SYN__s0rd2_C__ac;
	APC2Node SYN__s0rd2_C__s0rd2_T__ac;
	APC1Node SYN__s0ld2_C__ac;
	APC2Node SYN__s0ld2_C__s0ld2_T__ac;
	APC2Node SYN__s0_C__s0s1_dist__ac;
	APC2Node SYN__s1_C__s0s1_dist__ac;
	APC3Node SYN__s0_C__s1_C__s0s1_dist__ac;
	APC2Node SYN__s0_C__s0_larity__ac;
	APC2Node SYN__s0_C__s0_rarity__ac;
	APC2Node SYN__s1_C__s1_larity__ac;
	APC2Node SYN__s1_C__s1_rarity__ac;
	APC2Node SYN__s0_C__n0_C__ac;
	APC3Node SYN__s0_C__s0_T__n0_C__ac;
	APC2Node SYN__s1_C__n0_C__ac;
	APC3Node SYN__s1_C__s1_T__n0_C__ac;
	APC3Node SYN__n0_C__s0_C__s1_C__ac;
	APC3Node SYN__n0_C__s0_C__s1_T__ac;
	APC3Node SYN__n0_C__s0_T__s1_C__ac;
	APC2Node SHO__p1_W__p1_T;
	APC2Node SHO__p1_W__p2_T;
	APC3Node SHO__p2_Wec__p1_W__p1_T;
	APC4Node SHO__p2_Wec__p1_W__n0_C__p1_T;
	APC2Node SHO__p1_C__p1_T;
	APC2Node SHO__p1_Cc__p1_T;
	APC1Node SHO__p1_T__ac;
	APC2Node SHO__p1_Wl__p1_T__ac;
	APC3Node SHO__p1_Wl__p1_T__p2_T;
	APC3Node SHO__p1_Wl__p1_T__p2_T__ac;
	APC1Node SHO__p1_W__ac;
	APC2Node SHO__p1_T__p2_T__ac;
	APC3Node SHO__p1_W__n0_C__p1_T;
	APC1Node SHO__n0_C__ac;
	APC1Node SHO__n0_Cc__ac;
	APC2Node SHO__n0_C__p1_T__ac;
	APC3Node SHO__n0_C__p1_T__p2_T__ac;
	APC2Node SHO__n0_C__p1_T;
	APC3Node SHO__n0_C__p1_C__p1_T__ac;
	APC2Node SHO__p1_W__p2_T__ac;
	APC2Node SHO__p2_W__p1_T__ac;
	APC3Node  SHI__p1_C__n0_C__p1_T;
	APC3Node  SHI__p1_Wfc__n0_C__p1_T;
	APC4Node  SHI__p2_Ct__p1_Ct__n0_Ct__p1_T;
	APC2Node  PW__p1_Whc__n0_C;
	APC2Node  PW__p2_Whc__p1_Whc;
	APC2Node  PW__p2_Wfc__p1_Whc;
	APC2Node  PW__p2_Wec__p1_Whc;
	APC2Node  PW__p2_W__p1_Whc;
	APC2Node  PW__p2_Whc__p1_W;
	APC2Node  PW__p2_Whc__p1_Wl;
	APC2Node  PW__p2_Wl__p1_Whc;
	APC2Node  PW__p2_Whc__p1_C;
	APC2Node  PW__p1_Whc__p1_Wl;
	APC2Node SHO__p1_Whc__p1_T;
	APC2Node SHO__p1_Whc__p2_T;
	APC3Node SHO__p2_Wec__p1_Whc__p1_T;
	APC4Node SHO__p2_Wec__p1_Whc__n0_C__p1_T;
	APC1Node SHO__p1_Whc__ac;
	APC3Node SHO__p1_Whc__n0_C__p1_T;
	APC2Node SHO__p1_Whc__p2_T__ac;
	APC2Node SHO__p2_Whc__p1_T__ac;
	APC2Node SYN__s0s1_ALd__s0s1_CWl__ac;
	APC2Node SYN__s0s1_ARd__s0s1_CWl__ac;
	APC2Node SYN__s0s1_CWd__s0s1_CWl__ac;
	APC3Node PW__p1_Wd__p1_T__p1_Wl;

	vector<SPAddNode> outputs;

public:
	inline void initial(ModelParams& params, HyperParams& hyparams){
		SHI__p1_C__n0_C.setParam(&params.SHI__p1_C__n0_C);
		SHI__p1_Wfc__n0_C.setParam(&params.SHI__p1_Wfc__n0_C);
		SHI__p2_Ct__p1_Ct__p2_Ct.setParam(&params.SHI__p2_Ct__p1_Ct__p2_Ct);
		PW__p1_C__n0_C.setParam(&params.PW__p1_C__n0_C);
		PW__p1_Wfc__n0_C.setParam(&params.PW__p1_Wfc__n0_C);
		PW__p2_Ct__p1_Ct__p2_Ct.setParam(&params.PW__p2_Ct__p1_Ct__p2_Ct);
		PW__p1_W.setParam(&params.PW__p1_W);
		PW__p1_Wd__p1_Wl.setParam(&params.PW__p1_Wd__p1_Wl);
		PW__p1_WSingle.setParam(&params.PW__p1_WSingle);
		PW__p1_W__n0_C.setParam(&params.PW__p1_W__n0_C);
		PW__p2_W__p1_W.setParam(&params.PW__p2_W__p1_W);
		PW__p2_Wfc__p1_W.setParam(&params.PW__p2_Wfc__p1_W);
		PW__p2_Wec__p1_W.setParam(&params.PW__p2_Wec__p1_W);
		PW__p2_Wfc__p1_Wfc.setParam(&params.PW__p2_Wfc__p1_Wfc);
		PW__p2_Wec__p1_C.setParam(&params.PW__p2_Wec__p1_C);
		PW__p2_W__p1_Wl.setParam(&params.PW__p2_W__p1_Wl);
		PW__p2_Wl__p1_W.setParam(&params.PW__p2_Wl__p1_W);
		PW__p2_W__p1_C.setParam(&params.PW__p2_W__p1_C);
		PW__p1_Wfc__p1_Wl.setParam(&params.PW__p1_Wfc__p1_Wl);
		PW__p1_C__p1_Wl.setParam(&params.PW__p1_C__p1_Wl);
		PW__p1_Wmc__p1_C__p1_T.resize(max_seg_length);
		for (int idx = 0; idx < max_seg_length; idx++){
			PW__p1_Wmc__p1_C__p1_T[idx].setParam(&params.PW__p1_Wmc__p1_C__p1_T);
		}
		SYN__s0_W__ac.setParam(&params.SYN__s0_W__ac);
		SYN__s0_T__ac.setParam(&params.SYN__s0_T__ac);
		SYN__s0_W__s0_T__ac.setParam(&params.SYN__s0_W__s0_T__ac);
		SYN__s1_W__ac.setParam(&params.SYN__s1_W__ac);
		SYN__s1_T__ac.setParam(&params.SYN__s1_T__ac);
		SYN__s1_W__s1_T__ac.setParam(&params.SYN__s1_W__s1_T__ac);
		SYN__n0_C__ac.setParam(&params.SYN__n0_C__ac);
		SYN__n1_C__ac.setParam(&params.SYN__n1_C__ac);
		SYN__n0_C__n1_C__ac.setParam(&params.SYN__n0_C__n1_C__ac);
		SYN__s0_W__s1_W__ac.setParam(&params.SYN__s0_W__s1_W__ac);
		SYN__s0_T__s1_W__ac.setParam(&params.SYN__s0_T__s1_W__ac);
		SYN__s0_W__s1_T__ac.setParam(&params.SYN__s0_W__s1_T__ac);
		SYN__s0_T__s1_T__ac.setParam(&params.SYN__s0_T__s1_T__ac);
		SYN__s0_W__s1_W__s0_T__ac.setParam(&params.SYN__s0_W__s1_W__s0_T__ac);
		SYN__s0_W__s1_W__s1_T__ac.setParam(&params.SYN__s0_W__s1_W__s1_T__ac);
		SYN__s0_T__s1_T__s0_W__ac.setParam(&params.SYN__s0_T__s1_T__s0_W__ac);
		SYN__s0_T__s1_T__s1_W__ac.setParam(&params.SYN__s0_T__s1_T__s1_W__ac);
		SYN__s0_W__s1_W__s0_T__s1_T__ac.setParam(&params.SYN__s0_W__s1_W__s0_T__s1_T__ac);
		SYN__s0rd1_W__ac.setParam(&params.SYN__s0rd1_W__ac);
		SYN__s0rd1_T__ac.setParam(&params.SYN__s0rd1_T__ac);
		SYN__s0rd1_P__ac.setParam(&params.SYN__s0rd1_P__ac);
		SYN__s0rd1_W__s0rd1_T__ac.setParam(&params.SYN__s0rd1_W__s0rd1_T__ac);
		SYN__s0ld1_W__ac.setParam(&params.SYN__s0ld1_W__ac);
		SYN__s0ld1_T__ac.setParam(&params.SYN__s0ld1_T__ac);
		SYN__s0ld1_P__ac.setParam(&params.SYN__s0ld1_P__ac);
		SYN__s0ld1_W__s0ld1_T__ac.setParam(&params.SYN__s0ld1_W__s0ld1_T__ac);
		SYN__s0rd2_W__ac.setParam(&params.SYN__s0rd2_W__ac);
		SYN__s0rd2_T__ac.setParam(&params.SYN__s0rd2_T__ac);
		SYN__s0rd2_P__ac.setParam(&params.SYN__s0rd2_P__ac);
		SYN__s0rd2_W__s0rd2_T__ac.setParam(&params.SYN__s0rd2_W__s0rd2_T__ac);
		SYN__s0ld2_W__ac.setParam(&params.SYN__s0ld2_W__ac);
		SYN__s0ld2_T__ac.setParam(&params.SYN__s0ld2_T__ac);
		SYN__s0ld2_P__ac.setParam(&params.SYN__s0ld2_P__ac);
		SYN__s0ld2_W__s0ld2_T__ac.setParam(&params.SYN__s0ld2_W__s0ld2_T__ac);
		SYN__s0_T__s0ld1_T__s0ld2_T__ac.setParam(&params.SYN__s0_T__s0ld1_T__s0ld2_T__ac);
		SYN__s0_T__s0rd1_T__s0rd2_T__ac.setParam(&params.SYN__s0_T__s0rd1_T__s0rd2_T__ac);
		SYN__s1_T__s1ld1_T__s1ld2_T__ac.setParam(&params.SYN__s1_T__s1ld1_T__s1ld2_T__ac);
		SYN__s1_T__s1rd1_T__s1rd2_T__ac.setParam(&params.SYN__s1_T__s1rd1_T__s1rd2_T__ac);
		SYN__s0_T__s1_T__s0ld1_T__ac.setParam(&params.SYN__s0_T__s1_T__s0ld1_T__ac);
		SYN__s0_T__s1_T__s0rd1_T__ac.setParam(&params.SYN__s0_T__s1_T__s0rd1_T__ac);
		SYN__s0_T__s1_T__s0ld2_T__ac.setParam(&params.SYN__s0_T__s1_T__s0ld2_T__ac);
		SYN__s0_T__s1_T__s0rd2_T__ac.setParam(&params.SYN__s0_T__s1_T__s0rd2_T__ac);
		SYN__s0_T__s1_T__s1ld1_T__ac.setParam(&params.SYN__s0_T__s1_T__s1ld1_T__ac);
		SYN__s0_T__s1_T__s1rd1_T__ac.setParam(&params.SYN__s0_T__s1_T__s1rd1_T__ac);
		SYN__s0_T__s1_T__s1ld2_T__ac.setParam(&params.SYN__s0_T__s1_T__s1ld2_T__ac);
		SYN__s0_T__s1_T__s1rd2_T__ac.setParam(&params.SYN__s0_T__s1_T__s1rd2_T__ac);
		SYN__s0_T__s0s1_dist__ac.setParam(&params.SYN__s0_T__s0s1_dist__ac);
		SYN__s0_W__s0s1_dist__ac.setParam(&params.SYN__s0_W__s0s1_dist__ac);
		SYN__s1_T__s0s1_dist__ac.setParam(&params.SYN__s1_T__s0s1_dist__ac);
		SYN__s1_W__s0s1_dist__ac.setParam(&params.SYN__s1_W__s0s1_dist__ac);
		SYN__s0_T__s1_T__s0s1_dist__ac.setParam(&params.SYN__s0_T__s1_T__s0s1_dist__ac);
		SYN__s0_W__s1_W__s0s1_dist__ac.setParam(&params.SYN__s0_W__s1_W__s0s1_dist__ac);
		SYN__s0_T__s0_larity__ac.setParam(&params.SYN__s0_T__s0_larity__ac);
		SYN__s0_W__s0_larity__ac.setParam(&params.SYN__s0_W__s0_larity__ac);
		SYN__s0_T__s0_rarity__ac.setParam(&params.SYN__s0_T__s0_rarity__ac);
		SYN__s0_W__s0_rarity__ac.setParam(&params.SYN__s0_W__s0_rarity__ac);
		SYN__s1_T__s1_larity__ac.setParam(&params.SYN__s1_T__s1_larity__ac);
		SYN__s1_W__s1_larity__ac.setParam(&params.SYN__s1_W__s1_larity__ac);
		SYN__s1_T__s1_rarity__ac.setParam(&params.SYN__s1_T__s1_rarity__ac);
		SYN__s1_W__s1_rarity__ac.setParam(&params.SYN__s1_W__s1_rarity__ac);
		SYN__s0_W__n0_C__ac.setParam(&params.SYN__s0_W__n0_C__ac);
		SYN__s0_T__n0_C__ac.setParam(&params.SYN__s0_T__n0_C__ac);
		SYN__s0_W__s0_T__n0_C__ac.setParam(&params.SYN__s0_W__s0_T__n0_C__ac);
		SYN__s1_W__n0_C__ac.setParam(&params.SYN__s1_W__n0_C__ac);
		SYN__s1_T__n0_C__ac.setParam(&params.SYN__s1_T__n0_C__ac);
		SYN__s1_W__s1_T__n0_C__ac.setParam(&params.SYN__s1_W__s1_T__n0_C__ac);
		SYN__n0_C__s0_W__s1_W__ac.setParam(&params.SYN__n0_C__s0_W__s1_W__ac);
		SYN__n0_C__s0_T__s1_T__ac.setParam(&params.SYN__n0_C__s0_T__s1_T__ac);
		SYN__n0_C__s0_W__s1_T__ac.setParam(&params.SYN__n0_C__s0_W__s1_T__ac);
		SYN__n0_C__s0_T__s1_W__ac.setParam(&params.SYN__n0_C__s0_T__s1_W__ac);
		SYN__s0_T__s1_T__s2_T__ac.setParam(&params.SYN__s0_T__s1_T__s2_T__ac);
		SYN__s0_C__ac.setParam(&params.SYN__s0_C__ac);
		SYN__s0_C__s0_T__ac.setParam(&params.SYN__s0_C__s0_T__ac);
		SYN__s1_C__ac.setParam(&params.SYN__s1_C__ac);
		SYN__s1_C__s1_T__ac.setParam(&params.SYN__s1_C__s1_T__ac);
		SYN__s0_C__s1_C__ac.setParam(&params.SYN__s0_C__s1_C__ac);
		SYN__s0_T__s1_C__ac.setParam(&params.SYN__s0_T__s1_C__ac);
		SYN__s0_C__s1_T__ac.setParam(&params.SYN__s0_C__s1_T__ac);
		SYN__s0_C__s1_C__s0_T__ac.setParam(&params.SYN__s0_C__s1_C__s0_T__ac);
		SYN__s0_C__s1_C__s1_T__ac.setParam(&params.SYN__s0_C__s1_C__s1_T__ac);
		SYN__s0_T__s1_T__s0_C__ac.setParam(&params.SYN__s0_T__s1_T__s0_C__ac);
		SYN__s0_T__s1_T__s1_C__ac.setParam(&params.SYN__s0_T__s1_T__s1_C__ac);
		SYN__s0_C__s1_C__s0_T__s1_T__ac.setParam(&params.SYN__s0_C__s1_C__s0_T__s1_T__ac);
		SYN__s0rd1_C__ac.setParam(&params.SYN__s0rd1_C__ac);
		SYN__s0rd1_C__s0rd1_T__ac.setParam(&params.SYN__s0rd1_C__s0rd1_T__ac);
		SYN__s0ld1_C__ac.setParam(&params.SYN__s0ld1_C__ac);
		SYN__s0ld1_C__s0ld1_T__ac.setParam(&params.SYN__s0ld1_C__s0ld1_T__ac);
		SYN__s0rd2_C__ac.setParam(&params.SYN__s0rd2_C__ac);
		SYN__s0rd2_C__s0rd2_T__ac.setParam(&params.SYN__s0rd2_C__s0rd2_T__ac);
		SYN__s0ld2_C__ac.setParam(&params.SYN__s0ld2_C__ac);
		SYN__s0ld2_C__s0ld2_T__ac.setParam(&params.SYN__s0ld2_C__s0ld2_T__ac);
		SYN__s0_C__s0s1_dist__ac.setParam(&params.SYN__s0_C__s0s1_dist__ac);
		SYN__s1_C__s0s1_dist__ac.setParam(&params.SYN__s1_C__s0s1_dist__ac);
		SYN__s0_C__s1_C__s0s1_dist__ac.setParam(&params.SYN__s0_C__s1_C__s0s1_dist__ac);
		SYN__s0_C__s0_larity__ac.setParam(&params.SYN__s0_C__s0_larity__ac);
		SYN__s0_C__s0_rarity__ac.setParam(&params.SYN__s0_C__s0_rarity__ac);
		SYN__s1_C__s1_larity__ac.setParam(&params.SYN__s1_C__s1_larity__ac);
		SYN__s1_C__s1_rarity__ac.setParam(&params.SYN__s1_C__s1_rarity__ac);
		SYN__s0_C__n0_C__ac.setParam(&params.SYN__s0_C__n0_C__ac);
		SYN__s0_C__s0_T__n0_C__ac.setParam(&params.SYN__s0_C__s0_T__n0_C__ac);
		SYN__s1_C__n0_C__ac.setParam(&params.SYN__s1_C__n0_C__ac);
		SYN__s1_C__s1_T__n0_C__ac.setParam(&params.SYN__s1_C__s1_T__n0_C__ac);
		SYN__n0_C__s0_C__s1_C__ac.setParam(&params.SYN__n0_C__s0_C__s1_C__ac);
		SYN__n0_C__s0_C__s1_T__ac.setParam(&params.SYN__n0_C__s0_C__s1_T__ac);
		SYN__n0_C__s0_T__s1_C__ac.setParam(&params.SYN__n0_C__s0_T__s1_C__ac);
		SHO__p1_W__p1_T.setParam(&params.SHO__p1_W__p1_T);
		SHO__p1_W__p2_T.setParam(&params.SHO__p1_W__p2_T);
		SHO__p2_Wec__p1_W__p1_T.setParam(&params.SHO__p2_Wec__p1_W__p1_T);
		SHO__p2_Wec__p1_W__n0_C__p1_T.setParam(&params.SHO__p2_Wec__p1_W__n0_C__p1_T);
		SHO__p1_C__p1_T.setParam(&params.SHO__p1_C__p1_T);
		SHO__p1_Cc__p1_T.setParam(&params.SHO__p1_Cc__p1_T);
		SHO__p1_T__ac.setParam(&params.SHO__p1_T__ac);
		SHO__p1_Wl__p1_T__ac.setParam(&params.SHO__p1_Wl__p1_T__ac);
		SHO__p1_Wl__p1_T__p2_T.setParam(&params.SHO__p1_Wl__p1_T__p2_T);
		SHO__p1_Wl__p1_T__p2_T__ac.setParam(&params.SHO__p1_Wl__p1_T__p2_T__ac);
		SHO__p1_W__ac.setParam(&params.SHO__p1_W__ac);
		SHO__p1_T__p2_T__ac.setParam(&params.SHO__p1_T__p2_T__ac);
		SHO__p1_W__n0_C__p1_T.setParam(&params.SHO__p1_W__n0_C__p1_T);
		SHO__n0_C__ac.setParam(&params.SHO__n0_C__ac);
		SHO__n0_Cc__ac.setParam(&params.SHO__n0_Cc__ac);
		SHO__n0_C__p1_T__ac.setParam(&params.SHO__n0_C__p1_T__ac);
		SHO__n0_C__p1_T__p2_T__ac.setParam(&params.SHO__n0_C__p1_T__p2_T__ac);
		SHO__n0_C__p1_T.setParam(&params.SHO__n0_C__p1_T);
		SHO__n0_C__p1_C__p1_T__ac.setParam(&params.SHO__n0_C__p1_C__p1_T__ac);
		SHO__p1_W__p2_T__ac.setParam(&params.SHO__p1_W__p2_T__ac);
		SHO__p2_W__p1_T__ac.setParam(&params.SHO__p2_W__p1_T__ac);
		SHI__p1_C__n0_C__p1_T.setParam(&params.SHI__p1_C__n0_C__p1_T);
		SHI__p1_Wfc__n0_C__p1_T.setParam(&params.SHI__p1_Wfc__n0_C__p1_T);
		SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.setParam(&params.SHI__p2_Ct__p1_Ct__n0_Ct__p1_T);
		PW__p1_Whc__n0_C.setParam(&params.PW__p1_Whc__n0_C);
		PW__p2_Whc__p1_Whc.setParam(&params.PW__p2_Whc__p1_Whc);
		PW__p2_Wfc__p1_Whc.setParam(&params.PW__p2_Wfc__p1_Whc);
		PW__p2_Wec__p1_Whc.setParam(&params.PW__p2_Wec__p1_Whc);
		PW__p2_W__p1_Whc.setParam(&params.PW__p2_W__p1_Whc);
		PW__p2_Whc__p1_W.setParam(&params.PW__p2_Whc__p1_W);
		PW__p2_Whc__p1_Wl.setParam(&params.PW__p2_Whc__p1_Wl);
		PW__p2_Wl__p1_Whc.setParam(&params.PW__p2_Wl__p1_Whc);
		PW__p2_Whc__p1_C.setParam(&params.PW__p2_Whc__p1_C);
		PW__p1_Whc__p1_Wl.setParam(&params.PW__p1_Whc__p1_Wl);
		SHO__p1_Whc__p1_T.setParam(&params.SHO__p1_Whc__p1_T);
		SHO__p1_Whc__p2_T.setParam(&params.SHO__p1_Whc__p2_T);
		SHO__p2_Wec__p1_Whc__p1_T.setParam(&params.SHO__p2_Wec__p1_Whc__p1_T);
		SHO__p2_Wec__p1_Whc__n0_C__p1_T.setParam(&params.SHO__p2_Wec__p1_Whc__n0_C__p1_T);
		SHO__p1_Whc__ac.setParam(&params.SHO__p1_Whc__ac);
		SHO__p1_Whc__n0_C__p1_T.setParam(&params.SHO__p1_Whc__n0_C__p1_T);
		SHO__p1_Whc__p2_T__ac.setParam(&params.SHO__p1_Whc__p2_T__ac);
		SHO__p2_Whc__p1_T__ac.setParam(&params.SHO__p2_Whc__p1_T__ac);
		SYN__s0s1_ALd__s0s1_CWl__ac.setParam(&params.SYN__s0s1_ALd__s0s1_CWl__ac);
		SYN__s0s1_ARd__s0s1_CWl__ac.setParam(&params.SYN__s0s1_ARd__s0s1_CWl__ac);
		SYN__s0s1_CWd__s0s1_CWl__ac.setParam(&params.SYN__s0s1_CWd__s0s1_CWl__ac);
		PW__p1_Wd__p1_T__p1_Wl.setParam(&params.PW__p1_Wd__p1_T__p1_Wl);

		outputs.resize(hyparams.action_num);
	}


public:
	inline void forward(Graph* cg, const vector<CAction>& actions, const AtomFeatures& atomFeat, PNode prevStateNode){
		if (atomFeat.allow_shift_in){
			SHI__p1_C__n0_C.forward(cg, atomFeat.sid_p1_C, atomFeat.sid_n0_C);
			SHI__p1_Wfc__n0_C.forward(cg, atomFeat.sid_p1_Wfc, atomFeat.sid_n0_C);
			SHI__p2_Ct__p1_Ct__p2_Ct.forward(cg, atomFeat.sid_p2_Ct, atomFeat.sid_p1_Ct, atomFeat.sid_p2_Ct);

			SHI__p1_C__n0_C__p1_T.forward(cg, atomFeat.sid_p1_C, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHI__p1_Wfc__n0_C__p1_T.forward(cg, atomFeat.sid_p1_Wfc, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.forward(cg, atomFeat.sid_p2_Ct, atomFeat.sid_p1_Ct, atomFeat.sid_n0_Ct, atomFeat.sid_p1_T);
		}

		if (atomFeat.allow_pop_word){
			PW__p1_C__n0_C.forward(cg, atomFeat.sid_p1_C, atomFeat.sid_n0_C);
			PW__p1_Wfc__n0_C.forward(cg, atomFeat.sid_p1_Wfc, atomFeat.sid_n0_C);
			PW__p2_Ct__p1_Ct__p2_Ct.forward(cg, atomFeat.sid_p2_Ct, atomFeat.sid_p1_Ct, atomFeat.sid_p2_Ct);
			PW__p1_W.forward(cg, atomFeat.sid_p1_W);
			PW__p1_Wd__p1_Wl.forward(cg, atomFeat.sid_p1_Wd, atomFeat.sid_p1_Wl);
			PW__p1_WSingle.forward(cg, atomFeat.sid_p1_W);
			PW__p1_W__n0_C.forward(cg, atomFeat.sid_p1_W, atomFeat.sid_n0_C);
			PW__p2_W__p1_W.forward(cg, atomFeat.sid_p2_W, atomFeat.sid_p1_W);
			PW__p2_Wfc__p1_W.forward(cg, atomFeat.sid_p2_Wfc, atomFeat.sid_p1_W);
			PW__p2_Wec__p1_W.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_W);
			PW__p2_Wfc__p1_Wfc.forward(cg, atomFeat.sid_p2_Wfc, atomFeat.sid_p1_Wfc);
			PW__p2_Wec__p1_C.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_C);
			PW__p2_W__p1_Wl.forward(cg, atomFeat.sid_p2_W, atomFeat.sid_p1_Wl);
			PW__p2_Wl__p1_W.forward(cg, atomFeat.sid_p2_Wl, atomFeat.sid_p1_W);
			PW__p2_W__p1_C.forward(cg, atomFeat.sid_p2_W, atomFeat.sid_p1_C);
			PW__p1_Wfc__p1_Wl.forward(cg, atomFeat.sid_p1_Wfc, atomFeat.sid_p1_Wl);
			PW__p1_C__p1_Wl.forward(cg, atomFeat.sid_p1_C, atomFeat.sid_p1_Wl);
			for (int idy = 0; idy < atomFeat.sid_p1_Wmc.size() && idy < max_seg_length; idy++){
				PW__p1_Wmc__p1_C__p1_T[idy].forward(cg, atomFeat.sid_p1_Wmc[idy], atomFeat.sid_p1_C, atomFeat.sid_p1_T);
			}
		}

		if (atomFeat.allow_pop_root || atomFeat.is_terminated || atomFeat.allow_arc_left_out || atomFeat.allow_arc_right_out
			|| atomFeat.allow_shift || atomFeat.allow_shift_in || atomFeat.allow_arc_left_in || atomFeat.allow_arc_right_in){
			SYN__s0_W__ac.forward(cg, atomFeat.sid_s0_W);
			SYN__s0_T__ac.forward(cg, atomFeat.sid_s0_T);
			SYN__s0_W__s0_T__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s0_T);
			SYN__s1_W__ac.forward(cg, atomFeat.sid_s1_W);
			SYN__s1_T__ac.forward(cg, atomFeat.sid_s1_T);
			SYN__s1_W__s1_T__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_s1_T);
			SYN__n0_C__ac.forward(cg, atomFeat.sid_n0_C);
			SYN__n1_C__ac.forward(cg, atomFeat.sid_n1_C);
			SYN__n0_C__n1_C__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_n1_C);
			SYN__s0_W__s1_W__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_W);
			SYN__s0_T__s1_W__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_W);
			SYN__s0_W__s1_T__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_T);
			SYN__s0_T__s1_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T);
			SYN__s0_W__s1_W__s0_T__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_W, atomFeat.sid_s0_T);
			SYN__s0_W__s1_W__s1_T__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_W, atomFeat.sid_s1_T);
			SYN__s0_T__s1_T__s0_W__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0_W);
			SYN__s0_T__s1_T__s1_W__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1_W);
			SYN__s0_W__s1_W__s0_T__s1_T__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_W, atomFeat.sid_s0_T, atomFeat.sid_s1_T);
			SYN__s0rd1_W__ac.forward(cg, atomFeat.sid_s0rd1_W);
			SYN__s0rd1_T__ac.forward(cg, atomFeat.sid_s0rd1_T);
			SYN__s0rd1_P__ac.forward(cg, atomFeat.sid_s0rd1_P);
			SYN__s0rd1_W__s0rd1_T__ac.forward(cg, atomFeat.sid_s0rd1_W, atomFeat.sid_s0rd1_T);
			SYN__s0ld1_W__ac.forward(cg, atomFeat.sid_s0ld1_W);
			SYN__s0ld1_T__ac.forward(cg, atomFeat.sid_s0ld1_T);
			SYN__s0ld1_P__ac.forward(cg, atomFeat.sid_s0ld1_P);
			SYN__s0ld1_W__s0ld1_T__ac.forward(cg, atomFeat.sid_s0ld1_W, atomFeat.sid_s0ld1_T);
			SYN__s0rd2_W__ac.forward(cg, atomFeat.sid_s0rd2_W);
			SYN__s0rd2_T__ac.forward(cg, atomFeat.sid_s0rd2_T);
			SYN__s0rd2_P__ac.forward(cg, atomFeat.sid_s0rd2_P);
			SYN__s0rd2_W__s0rd2_T__ac.forward(cg, atomFeat.sid_s0rd2_W, atomFeat.sid_s0rd2_T);
			SYN__s0ld2_W__ac.forward(cg, atomFeat.sid_s0ld2_W);
			SYN__s0ld2_T__ac.forward(cg, atomFeat.sid_s0ld2_T);
			SYN__s0ld2_P__ac.forward(cg, atomFeat.sid_s0ld2_P);
			SYN__s0ld2_W__s0ld2_T__ac.forward(cg, atomFeat.sid_s0ld2_W, atomFeat.sid_s0ld2_T);
			SYN__s0_T__s0ld1_T__s0ld2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s0ld1_T, atomFeat.sid_s0ld2_T);
			SYN__s0_T__s0rd1_T__s0rd2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s0rd1_T, atomFeat.sid_s0rd2_T);
			SYN__s1_T__s1ld1_T__s1ld2_T__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_s1ld1_T, atomFeat.sid_s1ld2_T);
			SYN__s1_T__s1rd1_T__s1rd2_T__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_s1rd1_T, atomFeat.sid_s1rd2_T);
			SYN__s0_T__s1_T__s0ld1_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0ld1_T);
			SYN__s0_T__s1_T__s0rd1_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0rd1_T);
			SYN__s0_T__s1_T__s0ld2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0ld2_T);
			SYN__s0_T__s1_T__s0rd2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0rd2_T);
			SYN__s0_T__s1_T__s1ld1_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1ld1_T);
			SYN__s0_T__s1_T__s1rd1_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1rd1_T);
			SYN__s0_T__s1_T__s1ld2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1ld2_T);
			SYN__s0_T__s1_T__s1rd2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1rd2_T);
			SYN__s0_T__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s0s1_dist);
			SYN__s0_W__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s0s1_dist);
			SYN__s1_T__s0s1_dist__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_s0s1_dist);
			SYN__s1_W__s0s1_dist__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_s0s1_dist);
			SYN__s0_T__s1_T__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0s1_dist);
			SYN__s0_W__s1_W__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s1_W, atomFeat.sid_s0s1_dist);
			SYN__s0_T__s0_larity__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s0_larity);
			SYN__s0_W__s0_larity__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s0_larity);
			SYN__s0_T__s0_rarity__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s0_rarity);
			SYN__s0_W__s0_rarity__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s0_rarity);
			SYN__s1_T__s1_larity__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_s1_larity);
			SYN__s1_W__s1_larity__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_s1_larity);
			SYN__s1_T__s1_rarity__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_s1_rarity);
			SYN__s1_W__s1_rarity__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_s1_rarity);
			SYN__s0_W__n0_C__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_n0_C);
			SYN__s0_T__n0_C__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_n0_C);
			SYN__s0_W__s0_T__n0_C__ac.forward(cg, atomFeat.sid_s0_W, atomFeat.sid_s0_T, atomFeat.sid_n0_C);
			SYN__s1_W__n0_C__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_n0_C);
			SYN__s1_T__n0_C__ac.forward(cg, atomFeat.sid_s1_T, atomFeat.sid_n0_C);
			SYN__s1_W__s1_T__n0_C__ac.forward(cg, atomFeat.sid_s1_W, atomFeat.sid_s1_T, atomFeat.sid_n0_C);
			SYN__n0_C__s0_W__s1_W__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_W, atomFeat.sid_s1_W);
			SYN__n0_C__s0_T__s1_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_T, atomFeat.sid_s1_T);
			SYN__n0_C__s0_W__s1_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_W, atomFeat.sid_s1_T);
			SYN__n0_C__s0_T__s1_W__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_T, atomFeat.sid_s1_W);
			SYN__s0_T__s1_T__s2_T__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s2_T);
			SYN__s0_C__ac.forward(cg, atomFeat.sid_s0_C);
			SYN__s0_C__s0_T__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s0_T);
			SYN__s1_C__ac.forward(cg, atomFeat.sid_s1_C);
			SYN__s1_C__s1_T__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_s1_T);
			SYN__s0_C__s1_C__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_C);
			SYN__s0_T__s1_C__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_C);
			SYN__s0_C__s1_T__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_T);
			SYN__s0_C__s1_C__s0_T__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_C, atomFeat.sid_s0_T);
			SYN__s0_C__s1_C__s1_T__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_C, atomFeat.sid_s1_T);
			SYN__s0_T__s1_T__s0_C__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s0_C);
			SYN__s0_T__s1_T__s1_C__ac.forward(cg, atomFeat.sid_s0_T, atomFeat.sid_s1_T, atomFeat.sid_s1_C);
			SYN__s0_C__s1_C__s0_T__s1_T__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_C, atomFeat.sid_s0_T, atomFeat.sid_s1_T);
			SYN__s0rd1_C__ac.forward(cg, atomFeat.sid_s0rd1_C);
			SYN__s0rd1_C__s0rd1_T__ac.forward(cg, atomFeat.sid_s0rd1_C, atomFeat.sid_s0rd1_T);
			SYN__s0ld1_C__ac.forward(cg, atomFeat.sid_s0ld1_C);
			SYN__s0ld1_C__s0ld1_T__ac.forward(cg, atomFeat.sid_s0ld1_C, atomFeat.sid_s0ld1_T);
			SYN__s0rd2_C__ac.forward(cg, atomFeat.sid_s0rd2_C);
			SYN__s0rd2_C__s0rd2_T__ac.forward(cg, atomFeat.sid_s0rd2_C, atomFeat.sid_s0rd2_T);
			SYN__s0ld2_C__ac.forward(cg, atomFeat.sid_s0ld2_C);
			SYN__s0ld2_C__s0ld2_T__ac.forward(cg, atomFeat.sid_s0ld2_C, atomFeat.sid_s0ld2_T);
			SYN__s0_C__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s0s1_dist);
			SYN__s1_C__s0s1_dist__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_s0s1_dist);
			SYN__s0_C__s1_C__s0s1_dist__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s1_C, atomFeat.sid_s0s1_dist);
			SYN__s0_C__s0_larity__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s0_larity);
			SYN__s0_C__s0_rarity__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s0_rarity);
			SYN__s1_C__s1_larity__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_s1_larity);
			SYN__s1_C__s1_rarity__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_s1_rarity);
			SYN__s0_C__n0_C__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_n0_C);
			SYN__s0_C__s0_T__n0_C__ac.forward(cg, atomFeat.sid_s0_C, atomFeat.sid_s0_T, atomFeat.sid_n0_C);
			SYN__s1_C__n0_C__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_n0_C);
			SYN__s1_C__s1_T__n0_C__ac.forward(cg, atomFeat.sid_s1_C, atomFeat.sid_s1_T, atomFeat.sid_n0_C);
			SYN__n0_C__s0_C__s1_C__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_C, atomFeat.sid_s1_C);
			SYN__n0_C__s0_C__s1_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_C, atomFeat.sid_s1_T);
			SYN__n0_C__s0_T__s1_C__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_s0_T, atomFeat.sid_s1_C);
		}

		if (atomFeat.allow_shift){
			SHO__p1_W__p1_T.forward(cg, atomFeat.sid_p1_W, atomFeat.sid_p1_T);
			SHO__p1_W__p2_T.forward(cg, atomFeat.sid_p1_W, atomFeat.sid_p2_T);
			SHO__p2_Wec__p1_W__p1_T.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_W, atomFeat.sid_p1_T);
			SHO__p2_Wec__p1_W__n0_C__p1_T.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_W, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__p1_C__p1_T.forward(cg, atomFeat.sid_p1_C, atomFeat.sid_p1_T);
			SHO__p1_Cc__p1_T.forward(cg, atomFeat.sid_p1_Cc, atomFeat.sid_p1_T);
			SHO__p1_T__ac.forward(cg, atomFeat.sid_p1_T);
			SHO__p1_Wl__p1_T__ac.forward(cg, atomFeat.sid_p1_Wl, atomFeat.sid_p1_T);
			SHO__p1_Wl__p1_T__p2_T.forward(cg, atomFeat.sid_p1_Wl, atomFeat.sid_p1_T, atomFeat.sid_p2_T);
			SHO__p1_Wl__p1_T__p2_T__ac.forward(cg, atomFeat.sid_p1_Wl, atomFeat.sid_p1_T, atomFeat.sid_p2_T);
			SHO__p1_W__ac.forward(cg, atomFeat.sid_p1_W);
			SHO__p1_T__p2_T__ac.forward(cg, atomFeat.sid_p1_T, atomFeat.sid_p2_T);
			SHO__p1_W__n0_C__p1_T.forward(cg, atomFeat.sid_p1_W, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__n0_C__ac.forward(cg, atomFeat.sid_n0_C);
			SHO__n0_Cc__ac.forward(cg, atomFeat.sid_n0_Cc);
			SHO__n0_C__p1_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__n0_C__p1_T__p2_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_p1_T, atomFeat.sid_p2_T);
			SHO__n0_C__p1_T.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__n0_C__p1_C__p1_T__ac.forward(cg, atomFeat.sid_n0_C, atomFeat.sid_p1_C, atomFeat.sid_p1_T);
			SHO__p1_W__p2_T__ac.forward(cg, atomFeat.sid_p1_W, atomFeat.sid_p2_T);
			SHO__p2_W__p1_T__ac.forward(cg, atomFeat.sid_p2_W, atomFeat.sid_p1_T);

			SHO__p1_Whc__p1_T.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_p1_T);
			SHO__p1_Whc__p2_T.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_p2_T);
			SHO__p2_Wec__p1_Whc__p1_T.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_Whc, atomFeat.sid_p1_T);
			SHO__p2_Wec__p1_Whc__n0_C__p1_T.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_Whc, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__p1_Whc__ac.forward(cg, atomFeat.sid_p1_Whc);
			SHO__p1_Whc__n0_C__p1_T.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_n0_C, atomFeat.sid_p1_T);
			SHO__p1_Whc__p2_T__ac.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_p2_T);
			SHO__p2_Whc__p1_T__ac.forward(cg, atomFeat.sid_p2_Whc, atomFeat.sid_p1_T);
		}

		if (atomFeat.allow_pop_word) {
			PW__p1_Whc__n0_C.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_n0_C);
			PW__p2_Whc__p1_Whc.forward(cg, atomFeat.sid_p2_Whc, atomFeat.sid_p1_Whc);
			PW__p2_Wfc__p1_Whc.forward(cg, atomFeat.sid_p2_Wfc, atomFeat.sid_p1_Whc);
			PW__p2_Wec__p1_Whc.forward(cg, atomFeat.sid_p2_Wec, atomFeat.sid_p1_Whc);
			PW__p2_W__p1_Whc.forward(cg, atomFeat.sid_p2_W, atomFeat.sid_p1_Whc);
			PW__p2_Whc__p1_W.forward(cg, atomFeat.sid_p2_Whc, atomFeat.sid_p1_W);
			PW__p2_Whc__p1_Wl.forward(cg, atomFeat.sid_p2_Whc, atomFeat.sid_p1_Wl);
			PW__p2_Wl__p1_Whc.forward(cg, atomFeat.sid_p2_Wl, atomFeat.sid_p1_Whc);
			PW__p2_Whc__p1_C.forward(cg, atomFeat.sid_p2_Whc, atomFeat.sid_p1_C);
			PW__p1_Whc__p1_Wl.forward(cg, atomFeat.sid_p1_Whc, atomFeat.sid_p1_Wl);

			PW__p1_Wd__p1_T__p1_Wl.forward(cg, atomFeat.sid_p1_Wd, atomFeat.sid_p1_T, atomFeat.sid_p1_Wl);
		}

		if (atomFeat.allow_arc_left_in || atomFeat.allow_arc_right_in){
			SYN__s0s1_ALd__s0s1_CWl__ac.forward(cg, atomFeat.sid_s0s1_ALd, atomFeat.sid_s0s1_CWl);
			SYN__s0s1_ARd__s0s1_CWl__ac.forward(cg, atomFeat.sid_s0s1_ARd, atomFeat.sid_s0s1_CWl);
			SYN__s0s1_CWd__s0s1_CWl__ac.forward(cg, atomFeat.sid_s0s1_CWd, atomFeat.sid_s0s1_CWl);
		}		

		static vector<PNode> sumNodes;
		static CAction ac;
		static int ac_num;
		ac_num = actions.size();
		
		for (int idx = 0; idx < ac_num; idx++){
			ac.set(actions[idx]._code);
			sumNodes.clear();
			if (ac.isShiftIn()){
				if (SHI__p1_C__n0_C.executed)sumNodes.push_back(&SHI__p1_C__n0_C);
				if (SHI__p1_Wfc__n0_C.executed)sumNodes.push_back(&SHI__p1_Wfc__n0_C);
				if (SHI__p2_Ct__p1_Ct__p2_Ct.executed)sumNodes.push_back(&SHI__p2_Ct__p1_Ct__p2_Ct);

				if (SHI__p1_C__n0_C__p1_T.executed)sumNodes.push_back(&SHI__p1_C__n0_C__p1_T);
				if (SHI__p1_Wfc__n0_C__p1_T.executed)sumNodes.push_back(&SHI__p1_Wfc__n0_C__p1_T);
				if (SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.executed)sumNodes.push_back(&SHI__p2_Ct__p1_Ct__n0_Ct__p1_T);
			}

			if (ac.isPopWord()){
				if (PW__p1_C__n0_C.executed)sumNodes.push_back(&PW__p1_C__n0_C);
				if (PW__p1_Wfc__n0_C.executed)sumNodes.push_back(&PW__p1_Wfc__n0_C);
				if (PW__p2_Ct__p1_Ct__p2_Ct.executed)sumNodes.push_back(&PW__p2_Ct__p1_Ct__p2_Ct);
				if (PW__p1_W.executed)sumNodes.push_back(&PW__p1_W);
				if (PW__p1_Wd__p1_Wl.executed)sumNodes.push_back(&PW__p1_Wd__p1_Wl);
				if (PW__p1_WSingle.executed && atomFeat.sid_p1_Wl == 1)sumNodes.push_back(&PW__p1_WSingle);
				if (PW__p1_W__n0_C.executed)sumNodes.push_back(&PW__p1_W__n0_C);
				if (PW__p2_W__p1_W.executed)sumNodes.push_back(&PW__p2_W__p1_W);
				if (PW__p2_Wfc__p1_W.executed)sumNodes.push_back(&PW__p2_Wfc__p1_W);
				if (PW__p2_Wec__p1_W.executed)sumNodes.push_back(&PW__p2_Wec__p1_W);
				if (PW__p2_Wfc__p1_Wfc.executed)sumNodes.push_back(&PW__p2_Wfc__p1_Wfc);
				if (PW__p2_Wec__p1_C.executed)sumNodes.push_back(&PW__p2_Wec__p1_C);
				if (PW__p2_W__p1_Wl.executed)sumNodes.push_back(&PW__p2_W__p1_Wl);
				if (PW__p2_Wl__p1_W.executed)sumNodes.push_back(&PW__p2_Wl__p1_W);
				if (PW__p2_W__p1_C.executed)sumNodes.push_back(&PW__p2_W__p1_C);
				if (PW__p1_Wfc__p1_Wl.executed)sumNodes.push_back(&PW__p1_Wfc__p1_Wl);
				if (PW__p1_C__p1_Wl.executed)sumNodes.push_back(&PW__p1_C__p1_Wl);
				for (int idy = 0; idy < atomFeat.sid_p1_Wmc.size() && idy < max_seg_length; idy++){
					if (PW__p1_Wmc__p1_C__p1_T[idy].executed)sumNodes.push_back(&(PW__p1_Wmc__p1_C__p1_T[idy]));
				}
			}

			if (!ac.isPopWord()){
				if (SYN__s0_W__ac.executed)sumNodes.push_back(&SYN__s0_W__ac);
				if (SYN__s0_T__ac.executed)sumNodes.push_back(&SYN__s0_T__ac);
				if (SYN__s0_W__s0_T__ac.executed)sumNodes.push_back(&SYN__s0_W__s0_T__ac);
				if (SYN__s1_W__ac.executed)sumNodes.push_back(&SYN__s1_W__ac);
				if (SYN__s1_T__ac.executed)sumNodes.push_back(&SYN__s1_T__ac);
				if (SYN__s1_W__s1_T__ac.executed)sumNodes.push_back(&SYN__s1_W__s1_T__ac);
				if (SYN__n0_C__ac.executed)sumNodes.push_back(&SYN__n0_C__ac);
				if (SYN__n1_C__ac.executed)sumNodes.push_back(&SYN__n1_C__ac);
				if (SYN__n0_C__n1_C__ac.executed)sumNodes.push_back(&SYN__n0_C__n1_C__ac);
				if (SYN__s0_W__s1_W__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_W__ac);
				if (SYN__s0_T__s1_W__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_W__ac);
				if (SYN__s0_W__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_T__ac);
				if (SYN__s0_T__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__ac);
				if (SYN__s0_W__s1_W__s0_T__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_W__s0_T__ac);
				if (SYN__s0_W__s1_W__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_W__s1_T__ac);
				if (SYN__s0_T__s1_T__s0_W__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0_W__ac);
				if (SYN__s0_T__s1_T__s1_W__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1_W__ac);
				if (SYN__s0_W__s1_W__s0_T__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_W__s0_T__s1_T__ac);
				if (SYN__s0rd1_W__ac.executed)sumNodes.push_back(&SYN__s0rd1_W__ac);
				if (SYN__s0rd1_T__ac.executed)sumNodes.push_back(&SYN__s0rd1_T__ac);
				if (SYN__s0rd1_P__ac.executed)sumNodes.push_back(&SYN__s0rd1_P__ac);
				if (SYN__s0rd1_W__s0rd1_T__ac.executed)sumNodes.push_back(&SYN__s0rd1_W__s0rd1_T__ac);
				if (SYN__s0ld1_W__ac.executed)sumNodes.push_back(&SYN__s0ld1_W__ac);
				if (SYN__s0ld1_T__ac.executed)sumNodes.push_back(&SYN__s0ld1_T__ac);
				if (SYN__s0ld1_P__ac.executed)sumNodes.push_back(&SYN__s0ld1_P__ac);
				if (SYN__s0ld1_W__s0ld1_T__ac.executed)sumNodes.push_back(&SYN__s0ld1_W__s0ld1_T__ac);
				if (SYN__s0rd2_W__ac.executed)sumNodes.push_back(&SYN__s0rd2_W__ac);
				if (SYN__s0rd2_T__ac.executed)sumNodes.push_back(&SYN__s0rd2_T__ac);
				if (SYN__s0rd2_P__ac.executed)sumNodes.push_back(&SYN__s0rd2_P__ac);
				if (SYN__s0rd2_W__s0rd2_T__ac.executed)sumNodes.push_back(&SYN__s0rd2_W__s0rd2_T__ac);
				if (SYN__s0ld2_W__ac.executed)sumNodes.push_back(&SYN__s0ld2_W__ac);
				if (SYN__s0ld2_T__ac.executed)sumNodes.push_back(&SYN__s0ld2_T__ac);
				if (SYN__s0ld2_P__ac.executed)sumNodes.push_back(&SYN__s0ld2_P__ac);
				if (SYN__s0ld2_W__s0ld2_T__ac.executed)sumNodes.push_back(&SYN__s0ld2_W__s0ld2_T__ac);
				if (SYN__s0_T__s0ld1_T__s0ld2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s0ld1_T__s0ld2_T__ac);
				if (SYN__s0_T__s0rd1_T__s0rd2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s0rd1_T__s0rd2_T__ac);
				if (SYN__s1_T__s1ld1_T__s1ld2_T__ac.executed)sumNodes.push_back(&SYN__s1_T__s1ld1_T__s1ld2_T__ac);
				if (SYN__s1_T__s1rd1_T__s1rd2_T__ac.executed)sumNodes.push_back(&SYN__s1_T__s1rd1_T__s1rd2_T__ac);
				if (SYN__s0_T__s1_T__s0ld1_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0ld1_T__ac);
				if (SYN__s0_T__s1_T__s0rd1_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0rd1_T__ac);
				if (SYN__s0_T__s1_T__s0ld2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0ld2_T__ac);
				if (SYN__s0_T__s1_T__s0rd2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0rd2_T__ac);
				if (SYN__s0_T__s1_T__s1ld1_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1ld1_T__ac);
				if (SYN__s0_T__s1_T__s1rd1_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1rd1_T__ac);
				if (SYN__s0_T__s1_T__s1ld2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1ld2_T__ac);
				if (SYN__s0_T__s1_T__s1rd2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1rd2_T__ac);
				if (SYN__s0_T__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_T__s0s1_dist__ac);
				if (SYN__s0_W__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_W__s0s1_dist__ac);
				if (SYN__s1_T__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s1_T__s0s1_dist__ac);
				if (SYN__s1_W__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s1_W__s0s1_dist__ac);
				if (SYN__s0_T__s1_T__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0s1_dist__ac);
				if (SYN__s0_W__s1_W__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_W__s1_W__s0s1_dist__ac);
				if (SYN__s0_T__s0_larity__ac.executed)sumNodes.push_back(&SYN__s0_T__s0_larity__ac);
				if (SYN__s0_W__s0_larity__ac.executed)sumNodes.push_back(&SYN__s0_W__s0_larity__ac);
				if (SYN__s0_T__s0_rarity__ac.executed)sumNodes.push_back(&SYN__s0_T__s0_rarity__ac);
				if (SYN__s0_W__s0_rarity__ac.executed)sumNodes.push_back(&SYN__s0_W__s0_rarity__ac);
				if (SYN__s1_T__s1_larity__ac.executed)sumNodes.push_back(&SYN__s1_T__s1_larity__ac);
				if (SYN__s1_W__s1_larity__ac.executed)sumNodes.push_back(&SYN__s1_W__s1_larity__ac);
				if (SYN__s1_T__s1_rarity__ac.executed)sumNodes.push_back(&SYN__s1_T__s1_rarity__ac);
				if (SYN__s1_W__s1_rarity__ac.executed)sumNodes.push_back(&SYN__s1_W__s1_rarity__ac);
				if (SYN__s0_W__n0_C__ac.executed)sumNodes.push_back(&SYN__s0_W__n0_C__ac);
				if (SYN__s0_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s0_T__n0_C__ac);
				if (SYN__s0_W__s0_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s0_W__s0_T__n0_C__ac);
				if (SYN__s1_W__n0_C__ac.executed)sumNodes.push_back(&SYN__s1_W__n0_C__ac);
				if (SYN__s1_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s1_T__n0_C__ac);
				if (SYN__s1_W__s1_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s1_W__s1_T__n0_C__ac);
				if (SYN__n0_C__s0_W__s1_W__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_W__s1_W__ac);
				if (SYN__n0_C__s0_T__s1_T__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_T__s1_T__ac);
				if (SYN__n0_C__s0_W__s1_T__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_W__s1_T__ac);
				if (SYN__n0_C__s0_T__s1_W__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_T__s1_W__ac);
				if (SYN__s0_T__s1_T__s2_T__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s2_T__ac);
				if (SYN__s0_C__ac.executed)sumNodes.push_back(&SYN__s0_C__ac);
				if (SYN__s0_C__s0_T__ac.executed)sumNodes.push_back(&SYN__s0_C__s0_T__ac);
				if (SYN__s1_C__ac.executed)sumNodes.push_back(&SYN__s1_C__ac);
				if (SYN__s1_C__s1_T__ac.executed)sumNodes.push_back(&SYN__s1_C__s1_T__ac);
				if (SYN__s0_C__s1_C__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_C__ac);
				if (SYN__s0_T__s1_C__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_C__ac);
				if (SYN__s0_C__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_T__ac);
				if (SYN__s0_C__s1_C__s0_T__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_C__s0_T__ac);
				if (SYN__s0_C__s1_C__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_C__s1_T__ac);
				if (SYN__s0_T__s1_T__s0_C__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s0_C__ac);
				if (SYN__s0_T__s1_T__s1_C__ac.executed)sumNodes.push_back(&SYN__s0_T__s1_T__s1_C__ac);
				if (SYN__s0_C__s1_C__s0_T__s1_T__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_C__s0_T__s1_T__ac);
				if (SYN__s0rd1_C__ac.executed)sumNodes.push_back(&SYN__s0rd1_C__ac);
				if (SYN__s0rd1_C__s0rd1_T__ac.executed)sumNodes.push_back(&SYN__s0rd1_C__s0rd1_T__ac);
				if (SYN__s0ld1_C__ac.executed)sumNodes.push_back(&SYN__s0ld1_C__ac);
				if (SYN__s0ld1_C__s0ld1_T__ac.executed)sumNodes.push_back(&SYN__s0ld1_C__s0ld1_T__ac);
				if (SYN__s0rd2_C__ac.executed)sumNodes.push_back(&SYN__s0rd2_C__ac);
				if (SYN__s0rd2_C__s0rd2_T__ac.executed)sumNodes.push_back(&SYN__s0rd2_C__s0rd2_T__ac);
				if (SYN__s0ld2_C__ac.executed)sumNodes.push_back(&SYN__s0ld2_C__ac);
				if (SYN__s0ld2_C__s0ld2_T__ac.executed)sumNodes.push_back(&SYN__s0ld2_C__s0ld2_T__ac);
				if (SYN__s0_C__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_C__s0s1_dist__ac);
				if (SYN__s1_C__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s1_C__s0s1_dist__ac);
				if (SYN__s0_C__s1_C__s0s1_dist__ac.executed)sumNodes.push_back(&SYN__s0_C__s1_C__s0s1_dist__ac);
				if (SYN__s0_C__s0_larity__ac.executed)sumNodes.push_back(&SYN__s0_C__s0_larity__ac);
				if (SYN__s0_C__s0_rarity__ac.executed)sumNodes.push_back(&SYN__s0_C__s0_rarity__ac);
				if (SYN__s1_C__s1_larity__ac.executed)sumNodes.push_back(&SYN__s1_C__s1_larity__ac);
				if (SYN__s1_C__s1_rarity__ac.executed)sumNodes.push_back(&SYN__s1_C__s1_rarity__ac);
				if (SYN__s0_C__n0_C__ac.executed)sumNodes.push_back(&SYN__s0_C__n0_C__ac);
				if (SYN__s0_C__s0_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s0_C__s0_T__n0_C__ac);
				if (SYN__s1_C__n0_C__ac.executed)sumNodes.push_back(&SYN__s1_C__n0_C__ac);
				if (SYN__s1_C__s1_T__n0_C__ac.executed)sumNodes.push_back(&SYN__s1_C__s1_T__n0_C__ac);
				if (SYN__n0_C__s0_C__s1_C__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_C__s1_C__ac);
				if (SYN__n0_C__s0_C__s1_T__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_C__s1_T__ac);
				if (SYN__n0_C__s0_T__s1_C__ac.executed)sumNodes.push_back(&SYN__n0_C__s0_T__s1_C__ac);
			}

			if (ac.isShift()){
				if (SHO__p1_W__p1_T.executed)sumNodes.push_back(&SHO__p1_W__p1_T);
				if (SHO__p1_W__p2_T.executed)sumNodes.push_back(&SHO__p1_W__p2_T);
				if (SHO__p2_Wec__p1_W__p1_T.executed)sumNodes.push_back(&SHO__p2_Wec__p1_W__p1_T);
				if (SHO__p2_Wec__p1_W__n0_C__p1_T.executed)sumNodes.push_back(&SHO__p2_Wec__p1_W__n0_C__p1_T);
				if (SHO__p1_C__p1_T.executed)sumNodes.push_back(&SHO__p1_C__p1_T);
				if (SHO__p1_Cc__p1_T.executed)sumNodes.push_back(&SHO__p1_Cc__p1_T);
				if (SHO__p1_T__ac.executed)sumNodes.push_back(&SHO__p1_T__ac);
				if (SHO__p1_Wl__p1_T__ac.executed)sumNodes.push_back(&SHO__p1_Wl__p1_T__ac);
				if (SHO__p1_Wl__p1_T__p2_T.executed)sumNodes.push_back(&SHO__p1_Wl__p1_T__p2_T);
				if (SHO__p1_Wl__p1_T__p2_T__ac.executed)sumNodes.push_back(&SHO__p1_Wl__p1_T__p2_T__ac);
				if (SHO__p1_W__ac.executed)sumNodes.push_back(&SHO__p1_W__ac);
				if (SHO__p1_T__p2_T__ac.executed)sumNodes.push_back(&SHO__p1_T__p2_T__ac);
				if (SHO__p1_W__n0_C__p1_T.executed)sumNodes.push_back(&SHO__p1_W__n0_C__p1_T);
				if (SHO__n0_C__ac.executed)sumNodes.push_back(&SHO__n0_C__ac);
				if (SHO__n0_Cc__ac.executed)sumNodes.push_back(&SHO__n0_Cc__ac);
				if (SHO__n0_C__p1_T__ac.executed)sumNodes.push_back(&SHO__n0_C__p1_T__ac);
				if (SHO__n0_C__p1_T__p2_T__ac.executed)sumNodes.push_back(&SHO__n0_C__p1_T__p2_T__ac);
				if (SHO__n0_C__p1_T.executed)sumNodes.push_back(&SHO__n0_C__p1_T);
				if (SHO__n0_C__p1_C__p1_T__ac.executed)sumNodes.push_back(&SHO__n0_C__p1_C__p1_T__ac);
				if (SHO__p1_W__p2_T__ac.executed)sumNodes.push_back(&SHO__p1_W__p2_T__ac);
				if (SHO__p2_W__p1_T__ac.executed)sumNodes.push_back(&SHO__p2_W__p1_T__ac);

				if (SHO__p1_Whc__p1_T.executed)sumNodes.push_back(&SHO__p1_Whc__p1_T);
				if (SHO__p1_Whc__p2_T.executed)sumNodes.push_back(&SHO__p1_Whc__p2_T);
				if (SHO__p2_Wec__p1_Whc__p1_T.executed)sumNodes.push_back(&SHO__p2_Wec__p1_Whc__p1_T);
				if (SHO__p2_Wec__p1_Whc__n0_C__p1_T.executed)sumNodes.push_back(&SHO__p2_Wec__p1_Whc__n0_C__p1_T);
				if (SHO__p1_Whc__ac.executed)sumNodes.push_back(&SHO__p1_Whc__ac);
				if (SHO__p1_Whc__n0_C__p1_T.executed)sumNodes.push_back(&SHO__p1_Whc__n0_C__p1_T);
				if (SHO__p1_Whc__p2_T__ac.executed)sumNodes.push_back(&SHO__p1_Whc__p2_T__ac);
				if (SHO__p2_Whc__p1_T__ac.executed)sumNodes.push_back(&SHO__p2_Whc__p1_T__ac);
			}

			if (ac.isPopWord()){
				if (PW__p1_Whc__n0_C.executed)sumNodes.push_back(&PW__p1_Whc__n0_C);
				if (PW__p2_Whc__p1_Whc.executed)sumNodes.push_back(&PW__p2_Whc__p1_Whc);
				if (PW__p2_Wfc__p1_Whc.executed)sumNodes.push_back(&PW__p2_Wfc__p1_Whc);
				if (PW__p2_Wec__p1_Whc.executed)sumNodes.push_back(&PW__p2_Wec__p1_Whc);
				if (PW__p2_W__p1_Whc.executed)sumNodes.push_back(&PW__p2_W__p1_Whc);
				if (PW__p2_Whc__p1_W.executed)sumNodes.push_back(&PW__p2_Whc__p1_W);
				if (PW__p2_Whc__p1_Wl.executed)sumNodes.push_back(&PW__p2_Whc__p1_Wl);
				if (PW__p2_Wl__p1_Whc.executed)sumNodes.push_back(&PW__p2_Wl__p1_Whc);
				if (PW__p2_Whc__p1_C.executed)sumNodes.push_back(&PW__p2_Whc__p1_C);
				if (PW__p1_Whc__p1_Wl.executed)sumNodes.push_back(&PW__p1_Whc__p1_Wl);

				if (PW__p1_Wd__p1_T__p1_Wl.executed)sumNodes.push_back(&PW__p1_Wd__p1_T__p1_Wl);
			}

			if (ac.isArcLeftIn() || ac.isArcRightIn()){
				if (SYN__s0s1_ALd__s0s1_CWl__ac.executed)sumNodes.push_back(&SYN__s0s1_ALd__s0s1_CWl__ac);
				if (SYN__s0s1_ARd__s0s1_CWl__ac.executed)sumNodes.push_back(&SYN__s0s1_ARd__s0s1_CWl__ac);
				if (SYN__s0s1_CWd__s0s1_CWl__ac.executed)sumNodes.push_back(&SYN__s0s1_CWd__s0s1_CWl__ac);
			}
			

			if (prevStateNode != NULL){
				sumNodes.push_back(prevStateNode);
			}

			outputs[ac._code].forward(cg, sumNodes, ac._code);
		}
	}

};

#endif /* SRC_ActionedNodes_H_ */
