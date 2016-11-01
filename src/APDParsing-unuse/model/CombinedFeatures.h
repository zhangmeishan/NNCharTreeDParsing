/*
 * CombinedFeatures.h
 *
 *  Created on: Aug 25, 2016
 *      Author: mszhang
 */

#ifndef SRC_CombinedFeatures_H_
#define SRC_CombinedFeatures_H_
#include "ModelParams.h"
struct CombinedFeatures {
public:
	CFeat	SHI__p1_C__n0_C;
	CFeat	SHI__p1_Wfc__n0_C;
	CFeat	SHI__p2_Ct__p1_Ct__p2_Ct;
	CFeat	PW__p1_C__n0_C;
	CFeat	PW__p1_Wfc__n0_C;
	CFeat	PW__p2_Ct__p1_Ct__p2_Ct;
	CFeat	PW__p1_W;
	CFeat	PW__p1_Wd__p1_Wl;
	CFeat	PW__p1_WSingle;
	CFeat	PW__p1_W__n0_C;
	CFeat	PW__p2_W__p1_W;
	CFeat	PW__p2_Wfc__p1_W;
	CFeat	PW__p2_Wec__p1_W;
	CFeat	PW__p2_Wfc__p1_Wfc;
	CFeat	PW__p2_Wec__p1_C;
	CFeat	PW__p2_W__p1_Wl;
	CFeat	PW__p2_Wl__p1_W;
	CFeat	PW__p2_W__p1_C;
	CFeat	PW__p1_Wfc__p1_Wl;
	CFeat	PW__p1_C__p1_Wl;
	vector<CFeat>  PW__p1_Wmc__p1_C__p1_T;
	CFeat SYN__s0_W__ac;
	CFeat SYN__s0_T__ac;
	CFeat SYN__s0_W__s0_T__ac;
	CFeat SYN__s1_W__ac;
	CFeat SYN__s1_T__ac;
	CFeat SYN__s1_W__s1_T__ac;
	CFeat SYN__n0_C__ac;
	CFeat SYN__n1_C__ac;
	CFeat SYN__n0_C__n1_C__ac;
	CFeat SYN__s0_W__s1_W__ac;
	CFeat SYN__s0_T__s1_W__ac;
	CFeat SYN__s0_W__s1_T__ac;
	CFeat SYN__s0_T__s1_T__ac;
	CFeat SYN__s0_W__s1_W__s0_T__ac;
	CFeat SYN__s0_W__s1_W__s1_T__ac;
	CFeat SYN__s0_T__s1_T__s0_W__ac;
	CFeat SYN__s0_T__s1_T__s1_W__ac;
	CFeat SYN__s0_W__s1_W__s0_T__s1_T__ac;
	CFeat SYN__s0rd1_W__ac;
	CFeat SYN__s0rd1_T__ac;
	CFeat SYN__s0rd1_P__ac;
	CFeat SYN__s0rd1_W__s0rd1_T__ac;
	CFeat SYN__s0ld1_W__ac;
	CFeat SYN__s0ld1_T__ac;
	CFeat SYN__s0ld1_P__ac;
	CFeat SYN__s0ld1_W__s0ld1_T__ac;
	CFeat SYN__s0rd2_W__ac;
	CFeat SYN__s0rd2_T__ac;
	CFeat SYN__s0rd2_P__ac;
	CFeat SYN__s0rd2_W__s0rd2_T__ac;
	CFeat SYN__s0ld2_W__ac;
	CFeat SYN__s0ld2_T__ac;
	CFeat SYN__s0ld2_P__ac;
	CFeat SYN__s0ld2_W__s0ld2_T__ac;
	CFeat SYN__s0_T__s0ld1_T__s0ld2_T__ac;
	CFeat SYN__s0_T__s0rd1_T__s0rd2_T__ac;
	CFeat SYN__s1_T__s1ld1_T__s1ld2_T__ac;
	CFeat SYN__s1_T__s1rd1_T__s1rd2_T__ac;
	CFeat SYN__s0_T__s1_T__s0ld1_T__ac;
	CFeat SYN__s0_T__s1_T__s0rd1_T__ac;
	CFeat SYN__s0_T__s1_T__s0ld2_T__ac;
	CFeat SYN__s0_T__s1_T__s0rd2_T__ac;
	CFeat SYN__s0_T__s1_T__s1ld1_T__ac;
	CFeat SYN__s0_T__s1_T__s1rd1_T__ac;
	CFeat SYN__s0_T__s1_T__s1ld2_T__ac;
	CFeat SYN__s0_T__s1_T__s1rd2_T__ac;
	CFeat SYN__s0_T__s0s1_dist__ac;
	CFeat SYN__s0_W__s0s1_dist__ac;
	CFeat SYN__s1_T__s0s1_dist__ac;
	CFeat SYN__s1_W__s0s1_dist__ac;
	CFeat SYN__s0_T__s1_T__s0s1_dist__ac;
	CFeat SYN__s0_W__s1_W__s0s1_dist__ac;
	CFeat SYN__s0_T__s0_larity__ac;
	CFeat SYN__s0_W__s0_larity__ac;
	CFeat SYN__s0_T__s0_rarity__ac;
	CFeat SYN__s0_W__s0_rarity__ac;
	CFeat SYN__s1_T__s1_larity__ac;
	CFeat SYN__s1_W__s1_larity__ac;
	CFeat SYN__s1_T__s1_rarity__ac;
	CFeat SYN__s1_W__s1_rarity__ac;
	CFeat SYN__s0_W__n0_C__ac;
	CFeat SYN__s0_T__n0_C__ac;
	CFeat SYN__s0_W__s0_T__n0_C__ac;
	CFeat SYN__s1_W__n0_C__ac;
	CFeat SYN__s1_T__n0_C__ac;
	CFeat SYN__s1_W__s1_T__n0_C__ac;
	CFeat SYN__n0_C__s0_W__s1_W__ac;
	CFeat SYN__n0_C__s0_T__s1_T__ac;
	CFeat SYN__n0_C__s0_W__s1_T__ac;
	CFeat SYN__n0_C__s0_T__s1_W__ac;
	CFeat SYN__s0_T__s1_T__s2_T__ac;
	CFeat SYN__s0_C__ac;
	CFeat SYN__s0_C__s0_T__ac;
	CFeat SYN__s1_C__ac;
	CFeat SYN__s1_C__s1_T__ac;
	CFeat SYN__s0_C__s1_C__ac;
	CFeat SYN__s0_T__s1_C__ac;
	CFeat SYN__s0_C__s1_T__ac;
	CFeat SYN__s0_C__s1_C__s0_T__ac;
	CFeat SYN__s0_C__s1_C__s1_T__ac;
	CFeat SYN__s0_T__s1_T__s0_C__ac;
	CFeat SYN__s0_T__s1_T__s1_C__ac;
	CFeat SYN__s0_C__s1_C__s0_T__s1_T__ac;
	CFeat SYN__s0rd1_C__ac;
	CFeat SYN__s0rd1_C__s0rd1_T__ac;
	CFeat SYN__s0ld1_C__ac;
	CFeat SYN__s0ld1_C__s0ld1_T__ac;
	CFeat SYN__s0rd2_C__ac;
	CFeat SYN__s0rd2_C__s0rd2_T__ac;
	CFeat SYN__s0ld2_C__ac;
	CFeat SYN__s0ld2_C__s0ld2_T__ac;
	CFeat SYN__s0_C__s0s1_dist__ac;
	CFeat SYN__s1_C__s0s1_dist__ac;
	CFeat SYN__s0_C__s1_C__s0s1_dist__ac;
	CFeat SYN__s0_C__s0_larity__ac;
	CFeat SYN__s0_C__s0_rarity__ac;
	CFeat SYN__s1_C__s1_larity__ac;
	CFeat SYN__s1_C__s1_rarity__ac;
	CFeat SYN__s0_C__n0_C__ac;
	CFeat SYN__s0_C__s0_T__n0_C__ac;
	CFeat SYN__s1_C__n0_C__ac;
	CFeat SYN__s1_C__s1_T__n0_C__ac;
	CFeat SYN__n0_C__s0_C__s1_C__ac;
	CFeat SYN__n0_C__s0_C__s1_T__ac;
	CFeat SYN__n0_C__s0_T__s1_C__ac;
	CFeat SHO__p1_W__p1_T;
	CFeat SHO__p1_W__p2_T;
	CFeat SHO__p2_Wec__p1_W__p1_T;
	CFeat SHO__p2_Wec__p1_W__n0_C__p1_T;
	CFeat SHO__p1_C__p1_T;
	CFeat SHO__p1_Cc__p1_T;
	CFeat SHO__p1_T__ac;
	CFeat SHO__p1_Wl__p1_T__ac;
	CFeat SHO__p1_Wl__p1_T__p2_T;
	CFeat SHO__p1_Wl__p1_T__p2_T__ac;
	CFeat SHO__p1_W__ac;
	CFeat SHO__p1_T__p2_T__ac;
	CFeat SHO__p1_W__n0_C__p1_T;
	CFeat SHO__n0_C__ac;
	CFeat SHO__n0_Cc__ac;
	CFeat SHO__n0_C__p1_T__ac;
	CFeat SHO__n0_C__p1_T__p2_T__ac;
	CFeat SHO__n0_C__p1_T;
	CFeat SHO__n0_C__p1_C__p1_T__ac;
	CFeat SHO__p1_W__p2_T__ac;
	CFeat	SHO__p2_W__p1_T__ac;
	CFeat	SHI__p1_C__n0_C__p1_T;
	CFeat	SHI__p1_Wfc__n0_C__p1_T;
	CFeat	SHI__p2_Ct__p1_Ct__n0_Ct__p1_T;
	CFeat	PW__p1_Whc__n0_C;
	CFeat	PW__p2_Whc__p1_Whc;
	CFeat	PW__p2_Wfc__p1_Whc;
	CFeat	PW__p2_Wec__p1_Whc;
	CFeat	PW__p2_W__p1_Whc;
	CFeat	PW__p2_Whc__p1_W;
	CFeat	PW__p2_Whc__p1_Wl;
	CFeat	PW__p2_Wl__p1_Whc;
	CFeat	PW__p2_Whc__p1_C;
	CFeat	PW__p1_Whc__p1_Wl;
	CFeat SHO__p1_Whc__p1_T;
	CFeat SHO__p1_Whc__p2_T;
	CFeat SHO__p2_Wec__p1_Whc__p1_T;
	CFeat SHO__p2_Wec__p1_Whc__n0_C__p1_T;
	CFeat SHO__p1_Whc__ac;
	CFeat SHO__p1_Whc__n0_C__p1_T;
	CFeat SHO__p1_Whc__p2_T__ac;
	CFeat SHO__p2_Whc__p1_T__ac;
	CFeat SYN__s0s1_ALd__s0s1_CWl__ac;
	CFeat SYN__s0s1_ARd__s0s1_CWl__ac;
	CFeat SYN__s0s1_CWd__s0s1_CWl__ac;
	CFeat PW__p1_Wd__p1_T__p1_Wl;

public:
	bool allow_shift;
	bool allow_arc_left_out;
	bool allow_arc_right_out;
	bool allow_pop_root;
	bool is_terminated;
	bool allow_shift_in;
	bool allow_arc_left_in;
	bool allow_arc_right_in;
	bool allow_pop_word;

public:
	vector<CFeat*>  SHIs;
	vector<CFeat*>  PWs;
	vector<CFeat*>  SYNs1, SYNs2;
	vector<CFeat*>  SYNChars;
	vector<CFeat*>  SHOs, SHOAcs;
	vector<CFeat*>  ARCIns;

public:
	CombinedFeatures(){
		PW__p1_Wmc__p1_C__p1_T.resize(ModelParams::max_seg_length);
		initial();
	}

protected:
	void initial(){
		SHIs.clear();	PWs.clear(); SYNs1.clear(); SYNs2.clear();
		SYNChars.clear(); SHOs.clear(); SHOAcs.clear(); ARCIns.clear();
		//shift_in actions
		SHIs.push_back(&SHI__p1_C__n0_C);
		SHIs.push_back(&SHI__p1_Wfc__n0_C);
		SHIs.push_back(&SHI__p2_Ct__p1_Ct__p2_Ct);
		SHIs.push_back(&SHI__p1_C__n0_C__p1_T);
		SHIs.push_back(&SHI__p1_Wfc__n0_C__p1_T);
		SHIs.push_back(&SHI__p2_Ct__p1_Ct__n0_Ct__p1_T);

		//pop_word actions
		PWs.push_back(&PW__p1_C__n0_C);
		PWs.push_back(&PW__p1_Wfc__n0_C);
		PWs.push_back(&PW__p2_Ct__p1_Ct__p2_Ct);
		PWs.push_back(&PW__p1_W);
		PWs.push_back(&PW__p1_Wd__p1_Wl);
		PWs.push_back(&PW__p1_WSingle);
		PWs.push_back(&PW__p1_W__n0_C);
		PWs.push_back(&PW__p2_W__p1_W);
		PWs.push_back(&PW__p2_Wfc__p1_W);
		PWs.push_back(&PW__p2_Wec__p1_W);
		PWs.push_back(&PW__p2_Wfc__p1_Wfc);
		PWs.push_back(&PW__p2_Wec__p1_C);
		PWs.push_back(&PW__p2_W__p1_Wl);
		PWs.push_back(&PW__p2_Wl__p1_W);
		PWs.push_back(&PW__p2_W__p1_C);
		PWs.push_back(&PW__p1_Wfc__p1_Wl);
		PWs.push_back(&PW__p1_C__p1_Wl);
		for (int idy = 0; idy < ModelParams::max_seg_length; idy++){
			PWs.push_back(&(PW__p1_Wmc__p1_C__p1_T[idy]));
		}
		PWs.push_back(&PW__p1_Whc__n0_C);
		PWs.push_back(&PW__p2_Whc__p1_Whc);
		PWs.push_back(&PW__p2_Wfc__p1_Whc);
		PWs.push_back(&PW__p2_Wec__p1_Whc);
		PWs.push_back(&PW__p2_W__p1_Whc);
		PWs.push_back(&PW__p2_Whc__p1_W);
		PWs.push_back(&PW__p2_Whc__p1_Wl);
		PWs.push_back(&PW__p2_Wl__p1_Whc);
		PWs.push_back(&PW__p2_Whc__p1_C);
		PWs.push_back(&PW__p1_Whc__p1_Wl);
		PWs.push_back(&PW__p1_Wd__p1_T__p1_Wl);

		//original features word-based set 1
		SYNs1.push_back(&SYN__s0_W__ac);
		SYNs1.push_back(&SYN__s0_T__ac);
		SYNs1.push_back(&SYN__s0_W__s0_T__ac);
		SYNs1.push_back(&SYN__s1_W__ac);
		SYNs1.push_back(&SYN__s1_T__ac);
		SYNs1.push_back(&SYN__s1_W__s1_T__ac);
		SYNs1.push_back(&SYN__n0_C__ac);
		SYNs1.push_back(&SYN__n1_C__ac);
		SYNs1.push_back(&SYN__n0_C__n1_C__ac);
		SYNs1.push_back(&SYN__s0_W__s1_W__ac);
		SYNs1.push_back(&SYN__s0_T__s1_W__ac);
		SYNs1.push_back(&SYN__s0_W__s1_T__ac);
		SYNs1.push_back(&SYN__s0_T__s1_T__ac);
		SYNs1.push_back(&SYN__s0_W__s1_W__s0_T__ac);
		SYNs1.push_back(&SYN__s0_W__s1_W__s1_T__ac);
		SYNs1.push_back(&SYN__s0_T__s1_T__s0_W__ac);
		SYNs1.push_back(&SYN__s0_T__s1_T__s1_W__ac);
		SYNs1.push_back(&SYN__s0_W__s1_W__s0_T__s1_T__ac);
		SYNs1.push_back(&SYN__s0rd1_W__ac);
		SYNs1.push_back(&SYN__s0rd1_T__ac);
		SYNs1.push_back(&SYN__s0rd1_P__ac);
		SYNs1.push_back(&SYN__s0rd1_W__s0rd1_T__ac);
		SYNs1.push_back(&SYN__s0ld1_W__ac);
		SYNs1.push_back(&SYN__s0ld1_T__ac);
		SYNs1.push_back(&SYN__s0ld1_P__ac);
		SYNs1.push_back(&SYN__s0ld1_W__s0ld1_T__ac);
		SYNs1.push_back(&SYN__s0rd2_W__ac);
		SYNs1.push_back(&SYN__s0rd2_T__ac);
		SYNs1.push_back(&SYN__s0rd2_P__ac);
		SYNs1.push_back(&SYN__s0rd2_W__s0rd2_T__ac);
		SYNs1.push_back(&SYN__s0ld2_W__ac);
		SYNs1.push_back(&SYN__s0ld2_T__ac);
		SYNs1.push_back(&SYN__s0ld2_P__ac);
		SYNs1.push_back(&SYN__s0ld2_W__s0ld2_T__ac);

		//original features word-based set 2
		SYNs2.push_back(&SYN__s0_T__s0ld1_T__s0ld2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s0rd1_T__s0rd2_T__ac);
		SYNs2.push_back(&SYN__s1_T__s1ld1_T__s1ld2_T__ac);
		SYNs2.push_back(&SYN__s1_T__s1rd1_T__s1rd2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s0ld1_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s0rd1_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s0ld2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s0rd2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s1ld1_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s1rd1_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s1ld2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s1rd2_T__ac);
		SYNs2.push_back(&SYN__s0_T__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s0_W__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s1_T__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s1_W__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s0_W__s1_W__s0s1_dist__ac);
		SYNs2.push_back(&SYN__s0_T__s0_larity__ac);
		SYNs2.push_back(&SYN__s0_W__s0_larity__ac);
		SYNs2.push_back(&SYN__s0_T__s0_rarity__ac);
		SYNs2.push_back(&SYN__s0_W__s0_rarity__ac);
		SYNs2.push_back(&SYN__s1_T__s1_larity__ac);
		SYNs2.push_back(&SYN__s1_W__s1_larity__ac);
		SYNs2.push_back(&SYN__s1_T__s1_rarity__ac);
		SYNs2.push_back(&SYN__s1_W__s1_rarity__ac);
		SYNs2.push_back(&SYN__s0_W__n0_C__ac);
		SYNs2.push_back(&SYN__s0_T__n0_C__ac);
		SYNs2.push_back(&SYN__s0_W__s0_T__n0_C__ac);
		SYNs2.push_back(&SYN__s1_W__n0_C__ac);
		SYNs2.push_back(&SYN__s1_T__n0_C__ac);
		SYNs2.push_back(&SYN__s1_W__s1_T__n0_C__ac);
		SYNs2.push_back(&SYN__n0_C__s0_W__s1_W__ac);
		SYNs2.push_back(&SYN__n0_C__s0_T__s1_T__ac);
		SYNs2.push_back(&SYN__n0_C__s0_W__s1_T__ac);
		SYNs2.push_back(&SYN__n0_C__s0_T__s1_W__ac);
		SYNs2.push_back(&SYN__s0_T__s1_T__s2_T__ac);

		//original features char-based
		SYNChars.push_back(&SYN__s0_C__ac);
		SYNChars.push_back(&SYN__s0_C__s0_T__ac);
		SYNChars.push_back(&SYN__s1_C__ac);
		SYNChars.push_back(&SYN__s1_C__s1_T__ac);
		SYNChars.push_back(&SYN__s0_C__s1_C__ac);
		SYNChars.push_back(&SYN__s0_T__s1_C__ac);
		SYNChars.push_back(&SYN__s0_C__s1_T__ac);
		SYNChars.push_back(&SYN__s0_C__s1_C__s0_T__ac);
		SYNChars.push_back(&SYN__s0_C__s1_C__s1_T__ac);
		SYNChars.push_back(&SYN__s0_T__s1_T__s0_C__ac);
		SYNChars.push_back(&SYN__s0_T__s1_T__s1_C__ac);
		SYNChars.push_back(&SYN__s0_C__s1_C__s0_T__s1_T__ac);
		SYNChars.push_back(&SYN__s0rd1_C__ac);
		SYNChars.push_back(&SYN__s0rd1_C__s0rd1_T__ac);
		SYNChars.push_back(&SYN__s0ld1_C__ac);
		SYNChars.push_back(&SYN__s0ld1_C__s0ld1_T__ac);
		SYNChars.push_back(&SYN__s0rd2_C__ac);
		SYNChars.push_back(&SYN__s0rd2_C__s0rd2_T__ac);
		SYNChars.push_back(&SYN__s0ld2_C__ac);
		SYNChars.push_back(&SYN__s0ld2_C__s0ld2_T__ac);
		SYNChars.push_back(&SYN__s0_C__s0s1_dist__ac);
		SYNChars.push_back(&SYN__s1_C__s0s1_dist__ac);
		SYNChars.push_back(&SYN__s0_C__s1_C__s0s1_dist__ac);
		SYNChars.push_back(&SYN__s0_C__s0_larity__ac);
		SYNChars.push_back(&SYN__s0_C__s0_rarity__ac);
		SYNChars.push_back(&SYN__s1_C__s1_larity__ac);
		SYNChars.push_back(&SYN__s1_C__s1_rarity__ac);
		SYNChars.push_back(&SYN__s0_C__n0_C__ac);
		SYNChars.push_back(&SYN__s0_C__s0_T__n0_C__ac);
		SYNChars.push_back(&SYN__s1_C__n0_C__ac);
		SYNChars.push_back(&SYN__s1_C__s1_T__n0_C__ac);
		SYNChars.push_back(&SYN__n0_C__s0_C__s1_C__ac);
		SYNChars.push_back(&SYN__n0_C__s0_C__s1_T__ac);
		SYNChars.push_back(&SYN__n0_C__s0_T__s1_C__ac);

		//shift features
		SHOs.push_back(&SHO__p1_W__p1_T);
		SHOs.push_back(&SHO__p1_W__p2_T);
		SHOs.push_back(&SHO__p2_Wec__p1_W__p1_T);
		SHOs.push_back(&SHO__p2_Wec__p1_W__n0_C__p1_T);
		SHOs.push_back(&SHO__p1_C__p1_T);
		SHOs.push_back(&SHO__p1_Cc__p1_T);
		SHOs.push_back(&SHO__p1_Wl__p1_T__p2_T);
		SHOs.push_back(&SHO__p1_W__n0_C__p1_T);
		SHOs.push_back(&SHO__n0_C__p1_T);
		SHOs.push_back(&SHO__p1_Whc__p1_T);
		SHOs.push_back(&SHO__p1_Whc__p2_T);
		SHOs.push_back(&SHO__p2_Wec__p1_Whc__p1_T);
		SHOs.push_back(&SHO__p2_Wec__p1_Whc__n0_C__p1_T);
		SHOs.push_back(&SHO__p1_Whc__n0_C__p1_T);

		//shift with actions operations
		SHOAcs.push_back(&SHO__p1_T__ac);
		SHOAcs.push_back(&SHO__p1_Wl__p1_T__ac);
		SHOAcs.push_back(&SHO__p1_Wl__p1_T__p2_T__ac);
		SHOAcs.push_back(&SHO__p1_W__ac);
		SHOAcs.push_back(&SHO__p1_T__p2_T__ac);
		SHOAcs.push_back(&SHO__n0_C__ac);
		SHOAcs.push_back(&SHO__n0_Cc__ac);
		SHOAcs.push_back(&SHO__n0_C__p1_T__ac);
		SHOAcs.push_back(&SHO__n0_C__p1_T__p2_T__ac);
		SHOAcs.push_back(&SHO__n0_C__p1_C__p1_T__ac);
		SHOAcs.push_back(&SHO__p1_W__p2_T__ac);
		SHOAcs.push_back(&SHO__p2_W__p1_T__ac);
		SHOAcs.push_back(&SHO__p1_Whc__ac);
		SHOAcs.push_back(&SHO__p1_Whc__p2_T__ac);
		SHOAcs.push_back(&SHO__p2_Whc__p1_T__ac);

		//arcin operations
		ARCIns.push_back(&SYN__s0s1_ALd__s0s1_CWl__ac);
		ARCIns.push_back(&SYN__s0s1_ARd__s0s1_CWl__ac);
		ARCIns.push_back(&SYN__s0s1_CWd__s0s1_CWl__ac);
	}

	protected:
		void clear(){
			int count;
			count = SHIs.size();
			for (int idx = 0; idx < count; idx++){
				SHIs[idx]->clearValue();
			}
			count = PWs.size();
			for (int idx = 0; idx < count; idx++){
				PWs[idx]->clearValue();
			}
			count = SYNs1.size();
			for (int idx = 0; idx < count; idx++){
				SYNs1[idx]->clearValue();
			}
			count = SYNs2.size();
			for (int idx = 0; idx < count; idx++){
				SYNs2[idx]->clearValue();
			}
			count = SYNChars.size();
			for (int idx = 0; idx < count; idx++){
				SYNChars[idx]->clearValue();
			}
			count = SHOs.size();
			for (int idx = 0; idx < count; idx++){
				SHOs[idx]->clearValue();
			}
			count = SHOAcs.size();
			for (int idx = 0; idx < count; idx++){
				SHOAcs[idx]->clearValue();
			}
			count = ARCIns.size();
			for (int idx = 0; idx < count; idx++){
				ARCIns[idx]->clearValue();
			}
		}

public:
	inline bool haveSHIs() const{
		return allow_shift_in;
	}

	inline bool havePWs() const{
		return allow_pop_word;
	}

	inline bool haveSYNs() const{
		return (allow_pop_root || is_terminated || allow_arc_left_out || allow_arc_right_out
			  || allow_shift || allow_shift_in || allow_arc_left_in || allow_arc_right_in);
	}

	inline bool haveSHOs() const{
		return allow_shift;
	}

	inline bool haveARCIns() const{
		return (allow_arc_left_in || allow_arc_right_in);
	}

public:
	void compute(const AtomFeatures& atom){
		clear();
		allow_shift = atom.allow_shift;
		allow_arc_left_out = atom.allow_arc_left_out;
		allow_arc_right_out = atom.allow_arc_right_out;
		allow_pop_root = atom.allow_pop_root;
		is_terminated = atom.is_terminated;
		allow_shift_in = atom.allow_shift_in;
		allow_arc_left_in = atom.allow_arc_left_in;
		allow_arc_right_in = atom.allow_arc_right_in;
		allow_pop_word = atom.allow_pop_word;
		
		if (haveSHIs()){
			SHI__p1_C__n0_C.setId(1, atom.sid_p1_C, atom.sid_n0_C);
			SHI__p1_Wfc__n0_C.setId(2, atom.sid_p1_Wfc, atom.sid_n0_C);
			SHI__p2_Ct__p1_Ct__p2_Ct.setId(3, atom.sid_p2_Ct, atom.sid_p1_Ct, atom.sid_p2_Ct);

			SHI__p1_C__n0_C__p1_T.setId(148, atom.sid_p1_C, atom.sid_n0_C, atom.sid_p1_T);
			SHI__p1_Wfc__n0_C__p1_T.setId(149, atom.sid_p1_Wfc, atom.sid_n0_C, atom.sid_p1_T);
			SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.setId(150, atom.sid_p2_Ct, atom.sid_p1_Ct, atom.sid_n0_Ct, atom.sid_p1_T);
		}

		if (havePWs()){
			PW__p1_C__n0_C.setId(4, atom.sid_p1_C, atom.sid_n0_C);
			PW__p1_Wfc__n0_C.setId(5, atom.sid_p1_Wfc, atom.sid_n0_C);
			PW__p2_Ct__p1_Ct__p2_Ct.setId(6, atom.sid_p2_Ct, atom.sid_p1_Ct, atom.sid_p2_Ct);
			PW__p1_W.setId(7, atom.sid_p1_W);
			PW__p1_Wd__p1_Wl.setId(8, atom.sid_p1_Wd, atom.sid_p1_Wl);
			PW__p1_WSingle.setId(9, atom.sid_p1_W);
			PW__p1_W__n0_C.setId(10, atom.sid_p1_W, atom.sid_n0_C);
			PW__p2_W__p1_W.setId(11, atom.sid_p2_W, atom.sid_p1_W);
			PW__p2_Wfc__p1_W.setId(12, atom.sid_p2_Wfc, atom.sid_p1_W);
			PW__p2_Wec__p1_W.setId(13, atom.sid_p2_Wec, atom.sid_p1_W);
			PW__p2_Wfc__p1_Wfc.setId(14, atom.sid_p2_Wfc, atom.sid_p1_Wfc);
			PW__p2_Wec__p1_C.setId(15, atom.sid_p2_Wec, atom.sid_p1_C);
			PW__p2_W__p1_Wl.setId(16, atom.sid_p2_W, atom.sid_p1_Wl);
			PW__p2_Wl__p1_W.setId(17, atom.sid_p2_Wl, atom.sid_p1_W);
			PW__p2_W__p1_C.setId(18, atom.sid_p2_W, atom.sid_p1_C);
			PW__p1_Wfc__p1_Wl.setId(19, atom.sid_p1_Wfc, atom.sid_p1_Wl);
			PW__p1_C__p1_Wl.setId(20, atom.sid_p1_C, atom.sid_p1_Wl);
			int count = atom.sid_p1_Wmc.size();
			for (int idy = 0; idy < count && idy < ModelParams::max_seg_length; idy++){
				PW__p1_Wmc__p1_C__p1_T[idy].setId(21, atom.sid_p1_Wmc[idy], atom.sid_p1_C, atom.sid_p1_T);
			}
		}

		if (haveSYNs()){
			SYN__s0_W__ac.setId(22, atom.sid_s0_W);
			SYN__s0_T__ac.setId(23, atom.sid_s0_T);
			SYN__s0_W__s0_T__ac.setId(24, atom.sid_s0_W, atom.sid_s0_T);
			SYN__s1_W__ac.setId(25, atom.sid_s1_W);
			SYN__s1_T__ac.setId(26, atom.sid_s1_T);
			SYN__s1_W__s1_T__ac.setId(27, atom.sid_s1_W, atom.sid_s1_T);
			SYN__n0_C__ac.setId(28, atom.sid_n0_C);
			SYN__n1_C__ac.setId(29, atom.sid_n1_C);
			SYN__n0_C__n1_C__ac.setId(30, atom.sid_n0_C, atom.sid_n1_C);
			SYN__s0_W__s1_W__ac.setId(31, atom.sid_s0_W, atom.sid_s1_W);
			SYN__s0_T__s1_W__ac.setId(32, atom.sid_s0_T, atom.sid_s1_W);
			SYN__s0_W__s1_T__ac.setId(33, atom.sid_s0_W, atom.sid_s1_T);
			SYN__s0_T__s1_T__ac.setId(34, atom.sid_s0_T, atom.sid_s1_T);
			SYN__s0_W__s1_W__s0_T__ac.setId(35, atom.sid_s0_W, atom.sid_s1_W, atom.sid_s0_T);
			SYN__s0_W__s1_W__s1_T__ac.setId(36, atom.sid_s0_W, atom.sid_s1_W, atom.sid_s1_T);
			SYN__s0_T__s1_T__s0_W__ac.setId(37, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0_W);
			SYN__s0_T__s1_T__s1_W__ac.setId(38, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1_W);
			SYN__s0_W__s1_W__s0_T__s1_T__ac.setId(39, atom.sid_s0_W, atom.sid_s1_W, atom.sid_s0_T, atom.sid_s1_T);
			SYN__s0rd1_W__ac.setId(40, atom.sid_s0rd1_W);
			SYN__s0rd1_T__ac.setId(41, atom.sid_s0rd1_T);
			SYN__s0rd1_P__ac.setId(42, atom.sid_s0rd1_P);
			SYN__s0rd1_W__s0rd1_T__ac.setId(43, atom.sid_s0rd1_W, atom.sid_s0rd1_T);
			SYN__s0ld1_W__ac.setId(44, atom.sid_s0ld1_W);
			SYN__s0ld1_T__ac.setId(45, atom.sid_s0ld1_T);
			SYN__s0ld1_P__ac.setId(46, atom.sid_s0ld1_P);
			SYN__s0ld1_W__s0ld1_T__ac.setId(47, atom.sid_s0ld1_W, atom.sid_s0ld1_T);
			SYN__s0rd2_W__ac.setId(48, atom.sid_s0rd2_W);
			SYN__s0rd2_T__ac.setId(49, atom.sid_s0rd2_T);
			SYN__s0rd2_P__ac.setId(50, atom.sid_s0rd2_P);
			SYN__s0rd2_W__s0rd2_T__ac.setId(51, atom.sid_s0rd2_W, atom.sid_s0rd2_T);
			SYN__s0ld2_W__ac.setId(52, atom.sid_s0ld2_W);
			SYN__s0ld2_T__ac.setId(53, atom.sid_s0ld2_T);
			SYN__s0ld2_P__ac.setId(54, atom.sid_s0ld2_P);
			SYN__s0ld2_W__s0ld2_T__ac.setId(55, atom.sid_s0ld2_W, atom.sid_s0ld2_T);
			SYN__s0_T__s0ld1_T__s0ld2_T__ac.setId(56, atom.sid_s0_T, atom.sid_s0ld1_T, atom.sid_s0ld2_T);
			SYN__s0_T__s0rd1_T__s0rd2_T__ac.setId(57, atom.sid_s0_T, atom.sid_s0rd1_T, atom.sid_s0rd2_T);
			SYN__s1_T__s1ld1_T__s1ld2_T__ac.setId(58, atom.sid_s1_T, atom.sid_s1ld1_T, atom.sid_s1ld2_T);
			SYN__s1_T__s1rd1_T__s1rd2_T__ac.setId(59, atom.sid_s1_T, atom.sid_s1rd1_T, atom.sid_s1rd2_T);
			SYN__s0_T__s1_T__s0ld1_T__ac.setId(60, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0ld1_T);
			SYN__s0_T__s1_T__s0rd1_T__ac.setId(61, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0rd1_T);
			SYN__s0_T__s1_T__s0ld2_T__ac.setId(62, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0ld2_T);
			SYN__s0_T__s1_T__s0rd2_T__ac.setId(63, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0rd2_T);
			SYN__s0_T__s1_T__s1ld1_T__ac.setId(64, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1ld1_T);
			SYN__s0_T__s1_T__s1rd1_T__ac.setId(65, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1rd1_T);
			SYN__s0_T__s1_T__s1ld2_T__ac.setId(66, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1ld2_T);
			SYN__s0_T__s1_T__s1rd2_T__ac.setId(67, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1rd2_T);
			SYN__s0_T__s0s1_dist__ac.setId(68, atom.sid_s0_T, atom.sid_s0s1_dist);
			SYN__s0_W__s0s1_dist__ac.setId(69, atom.sid_s0_W, atom.sid_s0s1_dist);
			SYN__s1_T__s0s1_dist__ac.setId(70, atom.sid_s1_T, atom.sid_s0s1_dist);
			SYN__s1_W__s0s1_dist__ac.setId(71, atom.sid_s1_W, atom.sid_s0s1_dist);
			SYN__s0_T__s1_T__s0s1_dist__ac.setId(72, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0s1_dist);
			SYN__s0_W__s1_W__s0s1_dist__ac.setId(73, atom.sid_s0_W, atom.sid_s1_W, atom.sid_s0s1_dist);
			SYN__s0_T__s0_larity__ac.setId(74, atom.sid_s0_T, atom.sid_s0_larity);
			SYN__s0_W__s0_larity__ac.setId(75, atom.sid_s0_W, atom.sid_s0_larity);
			SYN__s0_T__s0_rarity__ac.setId(76, atom.sid_s0_T, atom.sid_s0_rarity);
			SYN__s0_W__s0_rarity__ac.setId(77, atom.sid_s0_W, atom.sid_s0_rarity);
			SYN__s1_T__s1_larity__ac.setId(78, atom.sid_s1_T, atom.sid_s1_larity);
			SYN__s1_W__s1_larity__ac.setId(79, atom.sid_s1_W, atom.sid_s1_larity);
			SYN__s1_T__s1_rarity__ac.setId(80, atom.sid_s1_T, atom.sid_s1_rarity);
			SYN__s1_W__s1_rarity__ac.setId(81, atom.sid_s1_W, atom.sid_s1_rarity);
			SYN__s0_W__n0_C__ac.setId(82, atom.sid_s0_W, atom.sid_n0_C);
			SYN__s0_T__n0_C__ac.setId(83, atom.sid_s0_T, atom.sid_n0_C);
			SYN__s0_W__s0_T__n0_C__ac.setId(54, atom.sid_s0_W, atom.sid_s0_T, atom.sid_n0_C);
			SYN__s1_W__n0_C__ac.setId(85, atom.sid_s1_W, atom.sid_n0_C);
			SYN__s1_T__n0_C__ac.setId(86, atom.sid_s1_T, atom.sid_n0_C);
			SYN__s1_W__s1_T__n0_C__ac.setId(87, atom.sid_s1_W, atom.sid_s1_T, atom.sid_n0_C);
			SYN__n0_C__s0_W__s1_W__ac.setId(88, atom.sid_n0_C, atom.sid_s0_W, atom.sid_s1_W);
			SYN__n0_C__s0_T__s1_T__ac.setId(89, atom.sid_n0_C, atom.sid_s0_T, atom.sid_s1_T);
			SYN__n0_C__s0_W__s1_T__ac.setId(90, atom.sid_n0_C, atom.sid_s0_W, atom.sid_s1_T);
			SYN__n0_C__s0_T__s1_W__ac.setId(91, atom.sid_n0_C, atom.sid_s0_T, atom.sid_s1_W);
			SYN__s0_T__s1_T__s2_T__ac.setId(92, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s2_T);
			SYN__s0_C__ac.setId(93, atom.sid_s0_C);
			SYN__s0_C__s0_T__ac.setId(94, atom.sid_s0_C, atom.sid_s0_T);
			SYN__s1_C__ac.setId(95, atom.sid_s1_C);
			SYN__s1_C__s1_T__ac.setId(96, atom.sid_s1_C, atom.sid_s1_T);
			SYN__s0_C__s1_C__ac.setId(97, atom.sid_s0_C, atom.sid_s1_C);
			SYN__s0_T__s1_C__ac.setId(98, atom.sid_s0_T, atom.sid_s1_C);
			SYN__s0_C__s1_T__ac.setId(99, atom.sid_s0_C, atom.sid_s1_T);
			SYN__s0_C__s1_C__s0_T__ac.setId(100, atom.sid_s0_C, atom.sid_s1_C, atom.sid_s0_T);
			SYN__s0_C__s1_C__s1_T__ac.setId(101, atom.sid_s0_C, atom.sid_s1_C, atom.sid_s1_T);
			SYN__s0_T__s1_T__s0_C__ac.setId(102, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s0_C);
			SYN__s0_T__s1_T__s1_C__ac.setId(103, atom.sid_s0_T, atom.sid_s1_T, atom.sid_s1_C);
			SYN__s0_C__s1_C__s0_T__s1_T__ac.setId(104, atom.sid_s0_C, atom.sid_s1_C, atom.sid_s0_T, atom.sid_s1_T);
			SYN__s0rd1_C__ac.setId(105, atom.sid_s0rd1_C);
			SYN__s0rd1_C__s0rd1_T__ac.setId(106, atom.sid_s0rd1_C, atom.sid_s0rd1_T);
			SYN__s0ld1_C__ac.setId(107, atom.sid_s0ld1_C);
			SYN__s0ld1_C__s0ld1_T__ac.setId(108, atom.sid_s0ld1_C, atom.sid_s0ld1_T);
			SYN__s0rd2_C__ac.setId(109, atom.sid_s0rd2_C);
			SYN__s0rd2_C__s0rd2_T__ac.setId(110, atom.sid_s0rd2_C, atom.sid_s0rd2_T);
			SYN__s0ld2_C__ac.setId(111, atom.sid_s0ld2_C);
			SYN__s0ld2_C__s0ld2_T__ac.setId(112, atom.sid_s0ld2_C, atom.sid_s0ld2_T);
			SYN__s0_C__s0s1_dist__ac.setId(113, atom.sid_s0_C, atom.sid_s0s1_dist);
			SYN__s1_C__s0s1_dist__ac.setId(114, atom.sid_s1_C, atom.sid_s0s1_dist);
			SYN__s0_C__s1_C__s0s1_dist__ac.setId(115, atom.sid_s0_C, atom.sid_s1_C, atom.sid_s0s1_dist);
			SYN__s0_C__s0_larity__ac.setId(116, atom.sid_s0_C, atom.sid_s0_larity);
			SYN__s0_C__s0_rarity__ac.setId(117, atom.sid_s0_C, atom.sid_s0_rarity);
			SYN__s1_C__s1_larity__ac.setId(118, atom.sid_s1_C, atom.sid_s1_larity);
			SYN__s1_C__s1_rarity__ac.setId(119, atom.sid_s1_C, atom.sid_s1_rarity);
			SYN__s0_C__n0_C__ac.setId(120, atom.sid_s0_C, atom.sid_n0_C);
			SYN__s0_C__s0_T__n0_C__ac.setId(121, atom.sid_s0_C, atom.sid_s0_T, atom.sid_n0_C);
			SYN__s1_C__n0_C__ac.setId(122, atom.sid_s1_C, atom.sid_n0_C);
			SYN__s1_C__s1_T__n0_C__ac.setId(123, atom.sid_s1_C, atom.sid_s1_T, atom.sid_n0_C);
			SYN__n0_C__s0_C__s1_C__ac.setId(124, atom.sid_n0_C, atom.sid_s0_C, atom.sid_s1_C);
			SYN__n0_C__s0_C__s1_T__ac.setId(125, atom.sid_n0_C, atom.sid_s0_C, atom.sid_s1_T);
			SYN__n0_C__s0_T__s1_C__ac.setId(126, atom.sid_n0_C, atom.sid_s0_T, atom.sid_s1_C);
		}

		if (haveSHOs()){
			SHO__p1_W__p1_T.setId(127, atom.sid_p1_W, atom.sid_p1_T);
			SHO__p1_W__p2_T.setId(128, atom.sid_p1_W, atom.sid_p2_T);
			SHO__p2_Wec__p1_W__p1_T.setId(129, atom.sid_p2_Wec, atom.sid_p1_W, atom.sid_p1_T);
			SHO__p2_Wec__p1_W__n0_C__p1_T.setId(130, atom.sid_p2_Wec, atom.sid_p1_W, atom.sid_n0_C, atom.sid_p1_T);
			SHO__p1_C__p1_T.setId(131, atom.sid_p1_C, atom.sid_p1_T);
			SHO__p1_Cc__p1_T.setId(132, atom.sid_p1_Cc, atom.sid_p1_T);
			SHO__p1_T__ac.setId(133, atom.sid_p1_T);
			SHO__p1_Wl__p1_T__ac.setId(134, atom.sid_p1_Wl, atom.sid_p1_T);
			SHO__p1_Wl__p1_T__p2_T.setId(135, atom.sid_p1_Wl, atom.sid_p1_T, atom.sid_p2_T);
			SHO__p1_Wl__p1_T__p2_T__ac.setId(136, atom.sid_p1_Wl, atom.sid_p1_T, atom.sid_p2_T);
			SHO__p1_W__ac.setId(137, atom.sid_p1_W);
			SHO__p1_T__p2_T__ac.setId(138, atom.sid_p1_T, atom.sid_p2_T);
			SHO__p1_W__n0_C__p1_T.setId(139, atom.sid_p1_W, atom.sid_n0_C, atom.sid_p1_T);
			SHO__n0_C__ac.setId(140, atom.sid_n0_C);
			SHO__n0_Cc__ac.setId(141, atom.sid_n0_Cc);
			SHO__n0_C__p1_T__ac.setId(142, atom.sid_n0_C, atom.sid_p1_T);
			SHO__n0_C__p1_T__p2_T__ac.setId(143, atom.sid_n0_C, atom.sid_p1_T, atom.sid_p2_T);
			SHO__n0_C__p1_T.setId(144, atom.sid_n0_C, atom.sid_p1_T);
			SHO__n0_C__p1_C__p1_T__ac.setId(145, atom.sid_n0_C, atom.sid_p1_C, atom.sid_p1_T);
			SHO__p1_W__p2_T__ac.setId(146, atom.sid_p1_W, atom.sid_p2_T);
			SHO__p2_W__p1_T__ac.setId(147, atom.sid_p2_W, atom.sid_p1_T);

			SHO__p1_Whc__p1_T.setId(161, atom.sid_p1_Whc, atom.sid_p1_T);
			SHO__p1_Whc__p2_T.setId(162, atom.sid_p1_Whc, atom.sid_p2_T);
			SHO__p2_Wec__p1_Whc__p1_T.setId(163, atom.sid_p2_Wec, atom.sid_p1_Whc, atom.sid_p1_T);
			SHO__p2_Wec__p1_Whc__n0_C__p1_T.setId(164, atom.sid_p2_Wec, atom.sid_p1_Whc, atom.sid_n0_C, atom.sid_p1_T);
			SHO__p1_Whc__ac.setId(165, atom.sid_p1_Whc);
			SHO__p1_Whc__n0_C__p1_T.setId(166, atom.sid_p1_Whc, atom.sid_n0_C, atom.sid_p1_T);
			SHO__p1_Whc__p2_T__ac.setId(167, atom.sid_p1_Whc, atom.sid_p2_T);
			SHO__p2_Whc__p1_T__ac.setId(168, atom.sid_p2_Whc, atom.sid_p1_T);
		}

		if (havePWs()) {
			PW__p1_Whc__n0_C.setId(151, atom.sid_p1_Whc, atom.sid_n0_C);
			PW__p2_Whc__p1_Whc.setId(152, atom.sid_p2_Whc, atom.sid_p1_Whc);
			PW__p2_Wfc__p1_Whc.setId(153, atom.sid_p2_Wfc, atom.sid_p1_Whc);
			PW__p2_Wec__p1_Whc.setId(154, atom.sid_p2_Wec, atom.sid_p1_Whc);
			PW__p2_W__p1_Whc.setId(155, atom.sid_p2_W, atom.sid_p1_Whc);
			PW__p2_Whc__p1_W.setId(156, atom.sid_p2_Whc, atom.sid_p1_W);
			PW__p2_Whc__p1_Wl.setId(157, atom.sid_p2_Whc, atom.sid_p1_Wl);
			PW__p2_Wl__p1_Whc.setId(158, atom.sid_p2_Wl, atom.sid_p1_Whc);
			PW__p2_Whc__p1_C.setId(159, atom.sid_p2_Whc, atom.sid_p1_C);
			PW__p1_Whc__p1_Wl.setId(160, atom.sid_p1_Whc, atom.sid_p1_Wl);

			PW__p1_Wd__p1_T__p1_Wl.setId(172, atom.sid_p1_Wd, atom.sid_p1_T, atom.sid_p1_Wl);
		}

		if (haveARCIns()){
			SYN__s0s1_ALd__s0s1_CWl__ac.setId(169, atom.sid_s0s1_ALd, atom.sid_s0s1_CWl);
			SYN__s0s1_ARd__s0s1_CWl__ac.setId(170, atom.sid_s0s1_ARd, atom.sid_s0s1_CWl);
			SYN__s0s1_CWd__s0s1_CWl__ac.setId(171, atom.sid_s0s1_CWd, atom.sid_s0s1_CWl);
		}		
	}

public:
	void collectFeatures(ModelParams* model){
		int count;
		if (haveSHIs()){
			count = SHIs.size();
			for (int idx = 0; idx < count; idx++){
				model->SHIs.collectFeature(*(SHIs[idx]));
			}
		}
		if (havePWs()){
			count = PWs.size();
			for (int idx = 0; idx < count; idx++){
				model->SHIs.collectFeature(*(PWs[idx]));
			}
		}
		if (haveSYNs()){
			count = SYNs1.size();
			for (int idx = 0; idx < count; idx++){
				model->SYNs1.collectFeature(*(SYNs1[idx]));
			}
			count = SYNs2.size();
			for (int idx = 0; idx < count; idx++){
				model->SYNs2.collectFeature(*(SYNs2[idx]));
			}
			count = SYNChars.size();
			for (int idx = 0; idx < count; idx++){
				model->SYNChars.collectFeature(*(SYNChars[idx]));
			}
		}
		if (haveSHOs()){
			count = SHOs.size();
			for (int idx = 0; idx < count; idx++){
				model->SHOs.collectFeature(*(SHOs[idx]));
			}
			count = SHOAcs.size();
			for (int idx = 0; idx < count; idx++){
				model->SHOAcs.collectFeature(*(SHOAcs[idx]));
			}
		}
		if (haveARCIns()){
			count = ARCIns.size();
			for (int idx = 0; idx < count; idx++){
				model->ARCIns.collectFeature(*(ARCIns[idx]));
			}
		}
	}

};

#endif /* SRC_CombinedFeatures_H_ */
