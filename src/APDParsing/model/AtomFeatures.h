/*
 * AtomFeatures.h
 *
 *  Created on: Aug 25, 2016
 *      Author: mszhang
 */

#ifndef SRC_AtomFeatures_H_
#define SRC_AtomFeatures_H_
#include "ModelParams.h"
struct AtomFeatures {
public:
	string str_n0_C;
	string str_n1_C;
	string str_p1_C;  
	string str_p2_C;

	string str_n0_Ct;
	string str_p1_Ct;
	string str_p2_Ct;
	
	string str_n0_Cc;
	string str_p1_Cc;

	string str_p1_W;
	string str_p1_Wfc;   //fc, first char
	string str_p1_Whc;   //hc, head char
	vector<string> str_p1_Wmc;  //ic, middle chars

	string str_p2_W;
	string str_p2_Wfc;   //fc, first char
	string str_p2_Whc;   //hc, head char
	string str_p2_Wec;  //ec, end char

	//additional for dependencies
	string str_s0_W;
	string str_s1_W;
	string str_s2_W;
	string str_s0_C;
	string str_s1_C;
	string str_s2_C;

	string str_s0s1_CW;

	string str_s0ld1_W;
	string str_s0ld2_W;
	string str_s0rd1_W;
	string str_s0rd2_W;

	string str_s0ld1_C;
	string str_s0ld2_C;
	string str_s0rd1_C;
	string str_s0rd2_C;

	string str_s1ld1_W;
	string str_s1ld2_W;
	string str_s1rd1_W;
	string str_s1rd2_W;

	string str_s1ld1_C;
	string str_s1ld2_C;
	string str_s1rd1_C;
	string str_s1rd2_C;


	//integer features directly
public:
	int sid_p1_Wd;
	int sid_p1_Wl;
	int sid_p1_WTd;
	int sid_p2_Wl;

	//additional for pos tagging
	int sid_p1_T;
	int sid_p2_T;

	//additional for word inner structures
	int sid_s0s1_CWl;
	int sid_s0s1_ALd; 
	int sid_s0s1_ARd;
	int sid_s0s1_CWd;
	int sid_s0s1_dist;

	int sid_s0_T;
	int sid_s1_T;
	int sid_s2_T;

	int sid_s0_larity;
	int sid_s0_rarity;
	int sid_s1_larity;
	int sid_s1_rarity;

	int sid_s0ld1_T;
	int sid_s0ld2_T;
	int sid_s0rd1_T;
	int sid_s0rd2_T;

	int sid_s1ld1_T;
	int sid_s1ld2_T;
	int sid_s1rd1_T;
	int sid_s1rd2_T;

	int sid_s0ld1_P;
	int sid_s0ld2_P;
	int sid_s0rd1_P;
	int sid_s0rd2_P;

	int sid_s1ld1_P;
	int sid_s1ld2_P;
	int sid_s1rd1_P;
	int sid_s1rd2_P;

public:
	int sid_n0_C;
	int sid_n1_C;
	int sid_p1_C;
	int sid_p2_C;

	int sid_n0_Ct;
	int sid_p1_Ct;
	int sid_p2_Ct;

	int sid_n0_Cc;
	int sid_p1_Cc;


	int sid_p1_W;
	int sid_p1_Wfc;   //fc, first char
	int sid_p1_Whc;   //hc, head char
	vector<int> sid_p1_Wmc;  //ic, inner chars

	int sid_p2_W;
	int sid_p2_Wfc;   //fc, first char
	int sid_p2_Whc;   //hc, head char
	int sid_p2_Wec;  //ec, end char

	//additional for word dependencies
	int sid_s0_W;
	int sid_s1_W;
	int sid_s2_W;
	int sid_s0_C;
	int sid_s1_C;
	int sid_s2_C;

	int sid_s0s1_CW;

	int sid_s0ld1_W;
	int sid_s0ld2_W;
	int sid_s0rd1_W;
	int sid_s0rd2_W;

	int sid_s0ld1_C;
	int sid_s0ld2_C;
	int sid_s0rd1_C;
	int sid_s0rd2_C;

	int sid_s1ld1_W;
	int sid_s1ld2_W;
	int sid_s1rd1_W;
	int sid_s1rd2_W;

	int sid_s1ld1_C;
	int sid_s1ld2_C;
	int sid_s1rd1_C;
	int sid_s1rd2_C;

	int sid_s0r1_W;
	int sid_s0l1_W;
	int sid_s1r1_W;
	int sid_s1l1_W;

	int sid_s0r1_C;
	int sid_s0l1_C;
	int sid_s1r1_C;
	int sid_s1l1_C;

public:
	int stacksize;
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
	void clear(){
		//strings
		str_n0_C = "";
		str_n1_C = "";
		str_p1_C = "";
		str_p2_C = "";

		str_n0_Ct = "";
		str_p1_Ct = "";
		str_p2_Ct = "";

		str_n0_Cc = "";
		str_p1_Cc = "";

		str_p1_W = "";
		str_p1_Wfc = ""; 
		str_p1_Whc = "";  
		str_p1_Wmc.clear(); 

		str_p2_W = "";
		str_p2_Wfc = "";   
		str_p2_Whc = "";   
		str_p2_Wec = "";  

		str_s0_W = "";
		str_s1_W = "";
		str_s2_W = "";
		str_s0_C = "";
		str_s1_C = "";
		str_s2_C = "";

		str_s0s1_CW = "";

		str_s0ld1_W = "";
		str_s0ld2_W = "";
		str_s0rd1_W = "";
		str_s0rd2_W = "";

		str_s0ld1_C = "";
		str_s0ld2_C = "";
		str_s0rd1_C = "";
		str_s0rd2_C = "";

		str_s1ld1_W = "";
		str_s1ld2_W = "";
		str_s1rd1_W = "";
		str_s1rd2_W = "";

		str_s1ld1_C = "";
		str_s1ld2_C = "";
		str_s1rd1_C = "";
		str_s1rd2_C = "";

		// ids
		sid_p1_Wd = -1;
		sid_p1_Wl = -1;
		sid_p1_WTd = -1;
		sid_p2_Wl = -1;

		sid_p1_T = -1;
		sid_p2_T = -1;

		sid_s0s1_CWl = -1;
		sid_s0s1_ALd = -1;
		sid_s0s1_ARd = -1;
		sid_s0s1_CWd = -1;
		sid_s0s1_dist = -1;

		sid_s0_T = -1;
		sid_s1_T = -1;
		sid_s2_T = -1;

		sid_s0_larity = -1;
		sid_s0_rarity = -1;
		sid_s1_larity = -1;
		sid_s1_rarity = -1;

		sid_s0ld1_T = -1;
		sid_s0ld2_T = -1;
		sid_s0rd1_T = -1;
		sid_s0rd2_T = -1;

		sid_s1ld1_T = -1;
		sid_s1ld2_T = -1;
		sid_s1rd1_T = -1;
		sid_s1rd2_T = -1;

		sid_s0ld1_P = -1;
		sid_s0ld2_P = -1;
		sid_s0rd1_P = -1;
		sid_s0rd2_P = -1;

		sid_s1ld1_P = -1;
		sid_s1ld2_P = -1;
		sid_s1rd1_P = -1;
		sid_s1rd2_P = -1;

		//ids, converted from strings
		sid_n0_C = -1;
		sid_n1_C = -1;
		sid_p1_C = -1;
		sid_p2_C = -1;

		sid_n0_Ct = -1;
		sid_p1_Ct = -1;
		sid_p2_Ct = -1;

		sid_n0_Cc = -1;
		sid_p1_Cc = -1;

		sid_p1_W = -1;
		sid_p1_Wfc = -1;
		sid_p1_Whc = -1;
		sid_p1_Wmc.clear();

		sid_p2_W = -1;
		sid_p2_Wfc = -1;
		sid_p2_Whc = -1;
		sid_p2_Wec = -1;

		sid_s0_W = -1;
		sid_s1_W = -1;
		sid_s2_W = -1;
		sid_s0_C = -1;
		sid_s1_C = -1;
		sid_s2_C = -1;

		sid_s0s1_CW = -1;

		sid_s0ld1_W = -1;
		sid_s0ld2_W = -1;
		sid_s0rd1_W = -1;
		sid_s0rd2_W = -1;

		sid_s0ld1_C = -1;
		sid_s0ld2_C = -1;
		sid_s0rd1_C = -1;
		sid_s0rd2_C = -1;

		sid_s1ld1_W = -1;
		sid_s1ld2_W = -1;
		sid_s1rd1_W = -1;
		sid_s1rd2_W = -1;

		sid_s1ld1_C = -1;
		sid_s1ld2_C = -1;
		sid_s1rd1_C = -1;
		sid_s1rd2_C = -1;

		sid_s0r1_W = -1;
		sid_s0l1_W = -1;
		sid_s1r1_W = -1;
		sid_s1l1_W = -1;

		sid_s0r1_C = -1;
		sid_s0l1_C = -1;
		sid_s1r1_C = -1;
		sid_s1l1_C = -1;

		stacksize = -1;
		allow_shift = false;
		allow_arc_left_out = false;
		allow_arc_right_out = false;
		allow_pop_root = false;
		is_terminated = false;
		allow_shift_in = false;
		allow_arc_left_in = false;
		allow_arc_right_in = false;
		allow_pop_word = false;
	}

public:
	void convert2Id(ModelParams* model){
		sid_n0_C = model->chars.from_string(str_n0_C);
		sid_n1_C = model->chars.from_string(str_n1_C);
		sid_p1_C = model->chars.from_string(str_p1_C);
		sid_p2_C = model->chars.from_string(str_p2_C);

		sid_n0_Ct = model->charTypes.from_string(str_n0_Ct);
		sid_p1_Ct = model->charTypes.from_string(str_p1_Ct);
		sid_p2_Ct = model->charTypes.from_string(str_p2_Ct);

		sid_n0_Cc = model->charCats.from_string(str_n0_Cc);
		sid_p1_Cc = model->charCats.from_string(str_p1_Cc);

		sid_p1_W = model->words.from_string(str_p1_W);
		sid_p1_Wfc = model->chars.from_string(str_p1_Wfc);
		sid_p1_Whc = model->chars.from_string(str_p1_Whc);
		sid_p1_Wmc.resize(str_p1_Wmc.size());
		for (int idx = 0; idx < str_p1_Wmc.size(); idx++){
			sid_p1_Wmc[idx] = model->chars.from_string(str_p1_Wmc[idx]);
		}

		sid_p2_W = model->words.from_string(str_p2_W);
		sid_p2_Wfc = model->chars.from_string(str_p2_Wfc);
		sid_p2_Whc = model->chars.from_string(str_p2_Whc);
		sid_p2_Wec = model->chars.from_string(str_p2_Wec);

		sid_s0_W = model->words.from_string(str_s0_W);
		sid_s1_W = model->words.from_string(str_s1_W);
		sid_s2_W = model->words.from_string(str_s2_W);
		sid_s0s1_CW = model->words.from_string(str_s0s1_CW);

		sid_s0ld1_W = model->words.from_string(str_s0ld1_W);
		sid_s0ld2_W = model->words.from_string(str_s0ld2_W);
		sid_s0rd1_W = model->words.from_string(str_s0rd1_W);
		sid_s0rd2_W = model->words.from_string(str_s0rd2_W);

		sid_s1ld1_W = model->words.from_string(str_s1ld1_W);
		sid_s1ld2_W = model->words.from_string(str_s1ld2_W);
		sid_s1rd1_W = model->words.from_string(str_s1rd1_W);
		sid_s1rd2_W = model->words.from_string(str_s1rd2_W);

		sid_s0_C = model->chars.from_string(str_s0_C);
		sid_s1_C = model->chars.from_string(str_s1_C);
		sid_s2_C = model->chars.from_string(str_s2_C);

		sid_s0ld1_C = model->chars.from_string(str_s0ld1_C);
		sid_s0ld2_C = model->chars.from_string(str_s0ld2_C);
		sid_s0rd1_C = model->chars.from_string(str_s0rd1_C);
		sid_s0rd2_C = model->chars.from_string(str_s0rd2_C);

		sid_s1ld1_C = model->chars.from_string(str_s1ld1_C);
		sid_s1ld2_C = model->chars.from_string(str_s1ld2_C);
		sid_s1rd1_C = model->chars.from_string(str_s1rd1_C);
		sid_s1rd2_C = model->chars.from_string(str_s1rd2_C);

	}

public:
	void collectFeatures(ModelParams* model){
		model->SHI__p1_C__n0_C.collectFeature(sid_p1_C, sid_n0_C);
		model->SHI__p1_Wfc__n0_C.collectFeature(sid_p1_Wfc, sid_n0_C);
		model->SHI__p2_Ct__p1_Ct__p2_Ct.collectFeature(sid_p2_Ct, sid_p1_Ct, sid_p2_Ct);
		model->PW__p1_C__n0_C.collectFeature(sid_p1_C, sid_n0_C);
		model->PW__p1_Wfc__n0_C.collectFeature(sid_p1_Wfc, sid_n0_C);
		model->PW__p2_Ct__p1_Ct__p2_Ct.collectFeature(sid_p2_Ct, sid_p1_Ct, sid_p2_Ct);
		model->PW__p1_W.collectFeature(sid_p1_W);
		model->PW__p1_Wd__p1_Wl.collectFeature(sid_p1_Wd, sid_p1_Wl);
		model->PW__p1_WSingle.collectFeature(sid_p1_W);
		model->PW__p1_W__n0_C.collectFeature(sid_p1_W, sid_n0_C);
		model->PW__p2_W__p1_W.collectFeature(sid_p2_W, sid_p1_W);
		model->PW__p2_Wfc__p1_W.collectFeature(sid_p2_Wfc, sid_p1_W);
		model->PW__p2_Wec__p1_W.collectFeature(sid_p2_Wec, sid_p1_W);
		model->PW__p2_Wfc__p1_Wfc.collectFeature(sid_p2_Wfc, sid_p1_Wfc);
		model->PW__p2_Wec__p1_C.collectFeature(sid_p2_Wec, sid_p1_C);
		model->PW__p2_W__p1_Wl.collectFeature(sid_p2_W, sid_p1_Wl);
		model->PW__p2_Wl__p1_W.collectFeature(sid_p2_Wl, sid_p1_W);
		model->PW__p2_W__p1_C.collectFeature(sid_p2_W, sid_p1_C);
		model->PW__p1_Wfc__p1_Wl.collectFeature(sid_p1_Wfc, sid_p1_Wl);
		model->PW__p1_C__p1_Wl.collectFeature(sid_p1_C, sid_p1_Wl);
		for (int idy = 0; idy < sid_p1_Wmc.size(); idy++){
			model->PW__p1_Wmc__p1_C__p1_T.collectFeature(sid_p1_Wmc[idy], sid_p1_C, sid_p1_T);
		}
		model->SYN__s0_W__ac.collectFeature(sid_s0_W);
		model->SYN__s0_T__ac.collectFeature(sid_s0_T);
		model->SYN__s0_W__s0_T__ac.collectFeature(sid_s0_W, sid_s0_T);
		model->SYN__s1_W__ac.collectFeature(sid_s1_W);
		model->SYN__s1_T__ac.collectFeature(sid_s1_T);
		model->SYN__s1_W__s1_T__ac.collectFeature(sid_s1_W, sid_s1_T);
		model->SYN__n0_C__ac.collectFeature(sid_n0_C);
		model->SYN__n1_C__ac.collectFeature(sid_n1_C);
		model->SYN__n0_C__n1_C__ac.collectFeature(sid_n0_C, sid_n1_C);
		model->SYN__s0_W__s1_W__ac.collectFeature(sid_s0_W, sid_s1_W);
		model->SYN__s0_T__s1_W__ac.collectFeature(sid_s0_T, sid_s1_W);
		model->SYN__s0_W__s1_T__ac.collectFeature(sid_s0_W, sid_s1_T);
		model->SYN__s0_T__s1_T__ac.collectFeature(sid_s0_T, sid_s1_T);
		model->SYN__s0_W__s1_W__s0_T__ac.collectFeature(sid_s0_W, sid_s1_W, sid_s0_T);
		model->SYN__s0_W__s1_W__s1_T__ac.collectFeature(sid_s0_W, sid_s1_W, sid_s1_T);
		model->SYN__s0_T__s1_T__s0_W__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0_W);
		model->SYN__s0_T__s1_T__s1_W__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1_W);
		model->SYN__s0_W__s1_W__s0_T__s1_T__ac.collectFeature(sid_s0_W, sid_s1_W, sid_s0_T, sid_s1_T);
		model->SYN__s0rd1_W__ac.collectFeature(sid_s0rd1_W);
		model->SYN__s0rd1_T__ac.collectFeature(sid_s0rd1_T);
		model->SYN__s0rd1_P__ac.collectFeature(sid_s0rd1_P);
		model->SYN__s0rd1_W__s0rd1_T__ac.collectFeature(sid_s0rd1_W, sid_s0rd1_T);
		model->SYN__s0ld1_W__ac.collectFeature(sid_s0ld1_W);
		model->SYN__s0ld1_T__ac.collectFeature(sid_s0ld1_T);
		model->SYN__s0ld1_P__ac.collectFeature(sid_s0ld1_P);
		model->SYN__s0ld1_W__s0ld1_T__ac.collectFeature(sid_s0ld1_W, sid_s0ld1_T);
		model->SYN__s0rd2_W__ac.collectFeature(sid_s0rd2_W);
		model->SYN__s0rd2_T__ac.collectFeature(sid_s0rd2_T);
		model->SYN__s0rd2_P__ac.collectFeature(sid_s0rd2_P);
		model->SYN__s0rd2_W__s0rd2_T__ac.collectFeature(sid_s0rd2_W, sid_s0rd2_T);
		model->SYN__s0ld2_W__ac.collectFeature(sid_s0ld2_W);
		model->SYN__s0ld2_T__ac.collectFeature(sid_s0ld2_T);
		model->SYN__s0ld2_P__ac.collectFeature(sid_s0ld2_P);
		model->SYN__s0ld2_W__s0ld2_T__ac.collectFeature(sid_s0ld2_W, sid_s0ld2_T);
		model->SYN__s0_T__s0ld1_T__s0ld2_T__ac.collectFeature(sid_s0_T, sid_s0ld1_T, sid_s0ld2_T);
		model->SYN__s0_T__s0rd1_T__s0rd2_T__ac.collectFeature(sid_s0_T, sid_s0rd1_T, sid_s0rd2_T);
		model->SYN__s1_T__s1ld1_T__s1ld2_T__ac.collectFeature(sid_s1_T, sid_s1ld1_T, sid_s1ld2_T);
		model->SYN__s1_T__s1rd1_T__s1rd2_T__ac.collectFeature(sid_s1_T, sid_s1rd1_T, sid_s1rd2_T);
		model->SYN__s0_T__s1_T__s0ld1_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0ld1_T);
		model->SYN__s0_T__s1_T__s0rd1_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0rd1_T);
		model->SYN__s0_T__s1_T__s0ld2_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0ld2_T);
		model->SYN__s0_T__s1_T__s0rd2_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0rd2_T);
		model->SYN__s0_T__s1_T__s1ld1_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1ld1_T);
		model->SYN__s0_T__s1_T__s1rd1_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1rd1_T);
		model->SYN__s0_T__s1_T__s1ld2_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1ld2_T);
		model->SYN__s0_T__s1_T__s1rd2_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1rd2_T);
		model->SYN__s0_T__s0s1_dist__ac.collectFeature(sid_s0_T, sid_s0s1_dist);
		model->SYN__s0_W__s0s1_dist__ac.collectFeature(sid_s0_W, sid_s0s1_dist);
		model->SYN__s1_T__s0s1_dist__ac.collectFeature(sid_s1_T, sid_s0s1_dist);
		model->SYN__s1_W__s0s1_dist__ac.collectFeature(sid_s1_W, sid_s0s1_dist);
		model->SYN__s0_T__s1_T__s0s1_dist__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0s1_dist);
		model->SYN__s0_W__s1_W__s0s1_dist__ac.collectFeature(sid_s0_W, sid_s1_W, sid_s0s1_dist);
		model->SYN__s0_T__s0_larity__ac.collectFeature(sid_s0_T, sid_s0_larity);
		model->SYN__s0_W__s0_larity__ac.collectFeature(sid_s0_W, sid_s0_larity);
		model->SYN__s0_T__s0_rarity__ac.collectFeature(sid_s0_T, sid_s0_rarity);
		model->SYN__s0_W__s0_rarity__ac.collectFeature(sid_s0_W, sid_s0_rarity);
		model->SYN__s1_T__s1_larity__ac.collectFeature(sid_s1_T, sid_s1_larity);
		model->SYN__s1_W__s1_larity__ac.collectFeature(sid_s1_W, sid_s1_larity);
		model->SYN__s1_T__s1_rarity__ac.collectFeature(sid_s1_T, sid_s1_rarity);
		model->SYN__s1_W__s1_rarity__ac.collectFeature(sid_s1_W, sid_s1_rarity);
		model->SYN__s0_W__n0_C__ac.collectFeature(sid_s0_W, sid_n0_C);
		model->SYN__s0_T__n0_C__ac.collectFeature(sid_s0_T, sid_n0_C);
		model->SYN__s0_W__s0_T__n0_C__ac.collectFeature(sid_s0_W, sid_s0_T, sid_n0_C);
		model->SYN__s1_W__n0_C__ac.collectFeature(sid_s1_W, sid_n0_C);
		model->SYN__s1_T__n0_C__ac.collectFeature(sid_s1_T, sid_n0_C);
		model->SYN__s1_W__s1_T__n0_C__ac.collectFeature(sid_s1_W, sid_s1_T, sid_n0_C);
		model->SYN__n0_C__s0_W__s1_W__ac.collectFeature(sid_n0_C, sid_s0_W, sid_s1_W);
		model->SYN__n0_C__s0_T__s1_T__ac.collectFeature(sid_n0_C, sid_s0_T, sid_s1_T);
		model->SYN__n0_C__s0_W__s1_T__ac.collectFeature(sid_n0_C, sid_s0_W, sid_s1_T);
		model->SYN__n0_C__s0_T__s1_W__ac.collectFeature(sid_n0_C, sid_s0_T, sid_s1_W);
		model->SYN__s0_T__s1_T__s2_T__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s2_T);
		model->SYN__s0_C__ac.collectFeature(sid_s0_C);
		model->SYN__s0_C__s0_T__ac.collectFeature(sid_s0_C, sid_s0_T);
		model->SYN__s1_C__ac.collectFeature(sid_s1_C);
		model->SYN__s1_C__s1_T__ac.collectFeature(sid_s1_C, sid_s1_T);
		model->SYN__s0_C__s1_C__ac.collectFeature(sid_s0_C, sid_s1_C);
		model->SYN__s0_T__s1_C__ac.collectFeature(sid_s0_T, sid_s1_C);
		model->SYN__s0_C__s1_T__ac.collectFeature(sid_s0_C, sid_s1_T);
		model->SYN__s0_C__s1_C__s0_T__ac.collectFeature(sid_s0_C, sid_s1_C, sid_s0_T);
		model->SYN__s0_C__s1_C__s1_T__ac.collectFeature(sid_s0_C, sid_s1_C, sid_s1_T);
		model->SYN__s0_T__s1_T__s0_C__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s0_C);
		model->SYN__s0_T__s1_T__s1_C__ac.collectFeature(sid_s0_T, sid_s1_T, sid_s1_C);
		model->SYN__s0_C__s1_C__s0_T__s1_T__ac.collectFeature(sid_s0_C, sid_s1_C, sid_s0_T, sid_s1_T);
		model->SYN__s0rd1_C__ac.collectFeature(sid_s0rd1_C);
		model->SYN__s0rd1_C__s0rd1_T__ac.collectFeature(sid_s0rd1_C, sid_s0rd1_T);
		model->SYN__s0ld1_C__ac.collectFeature(sid_s0ld1_C);
		model->SYN__s0ld1_C__s0ld1_T__ac.collectFeature(sid_s0ld1_C, sid_s0ld1_T);
		model->SYN__s0rd2_C__ac.collectFeature(sid_s0rd2_C);
		model->SYN__s0rd2_C__s0rd2_T__ac.collectFeature(sid_s0rd2_C, sid_s0rd2_T);
		model->SYN__s0ld2_C__ac.collectFeature(sid_s0ld2_C);
		model->SYN__s0ld2_C__s0ld2_T__ac.collectFeature(sid_s0ld2_C, sid_s0ld2_T);
		model->SYN__s0_C__s0s1_dist__ac.collectFeature(sid_s0_C, sid_s0s1_dist);
		model->SYN__s1_C__s0s1_dist__ac.collectFeature(sid_s1_C, sid_s0s1_dist);
		model->SYN__s0_C__s1_C__s0s1_dist__ac.collectFeature(sid_s0_C, sid_s1_C, sid_s0s1_dist);
		model->SYN__s0_C__s0_larity__ac.collectFeature(sid_s0_C, sid_s0_larity);
		model->SYN__s0_C__s0_rarity__ac.collectFeature(sid_s0_C, sid_s0_rarity);
		model->SYN__s1_C__s1_larity__ac.collectFeature(sid_s1_C, sid_s1_larity);
		model->SYN__s1_C__s1_rarity__ac.collectFeature(sid_s1_C, sid_s1_rarity);
		model->SYN__s0_C__n0_C__ac.collectFeature(sid_s0_C, sid_n0_C);
		model->SYN__s0_C__s0_T__n0_C__ac.collectFeature(sid_s0_C, sid_s0_T, sid_n0_C);
		model->SYN__s1_C__n0_C__ac.collectFeature(sid_s1_C, sid_n0_C);
		model->SYN__s1_C__s1_T__n0_C__ac.collectFeature(sid_s1_C, sid_s1_T, sid_n0_C);
		model->SYN__n0_C__s0_C__s1_C__ac.collectFeature(sid_n0_C, sid_s0_C, sid_s1_C);
		model->SYN__n0_C__s0_C__s1_T__ac.collectFeature(sid_n0_C, sid_s0_C, sid_s1_T);
		model->SYN__n0_C__s0_T__s1_C__ac.collectFeature(sid_n0_C, sid_s0_T, sid_s1_C);
		model->SHO__p1_W__p1_T.collectFeature(sid_p1_W, sid_p1_T);
		model->SHO__p1_W__p2_T.collectFeature(sid_p1_W, sid_p2_T);
		model->SHO__p2_Wec__p1_W__p1_T.collectFeature(sid_p2_Wec, sid_p1_W, sid_p1_T);
		model->SHO__p2_Wec__p1_W__n0_C__p1_T.collectFeature(sid_p2_Wec, sid_p1_W, sid_n0_C, sid_p1_T);
		model->SHO__p1_C__p1_T.collectFeature(sid_p1_C, sid_p1_T);
		model->SHO__p1_Cc__p1_T.collectFeature(sid_p1_Cc, sid_p1_T);
		model->SHO__p1_T__ac.collectFeature(sid_p1_T);
		model->SHO__p1_Wl__p1_T__ac.collectFeature(sid_p1_Wl, sid_p1_T);
		model->SHO__p1_Wl__p1_T__p2_T.collectFeature(sid_p1_Wl, sid_p1_T, sid_p2_T);
		model->SHO__p1_Wl__p1_T__p2_T__ac.collectFeature(sid_p1_Wl, sid_p1_T, sid_p2_T);
		model->SHO__p1_W__ac.collectFeature(sid_p1_W);
		model->SHO__p1_T__p2_T__ac.collectFeature(sid_p1_T, sid_p2_T);
		model->SHO__p1_W__n0_C__p1_T.collectFeature(sid_p1_W, sid_n0_C, sid_p1_T);
		model->SHO__n0_C__ac.collectFeature(sid_n0_C);
		model->SHO__n0_Cc__ac.collectFeature(sid_n0_Cc);
		model->SHO__n0_C__p1_T__ac.collectFeature(sid_n0_C, sid_p1_T);
		model->SHO__n0_C__p1_T__p2_T__ac.collectFeature(sid_n0_C, sid_p1_T, sid_p2_T);
		model->SHO__n0_C__p1_T.collectFeature(sid_n0_C, sid_p1_T);
		model->SHO__n0_C__p1_C__p1_T__ac.collectFeature(sid_n0_C, sid_p1_C, sid_p1_T);
		model->SHO__p1_W__p2_T__ac.collectFeature(sid_p1_W, sid_p2_T);
		model->SHO__p2_W__p1_T__ac.collectFeature(sid_p2_W, sid_p1_T);
		model->SHI__p1_C__n0_C__p1_T.collectFeature(sid_p1_C, sid_n0_C, sid_p1_T);
		model->SHI__p1_Wfc__n0_C__p1_T.collectFeature(sid_p1_Wfc, sid_n0_C, sid_p1_T);
		model->SHI__p2_Ct__p1_Ct__n0_Ct__p1_T.collectFeature(sid_p2_Ct, sid_p1_Ct, sid_n0_Ct, sid_p1_T);
		model->PW__p1_Whc__n0_C.collectFeature(sid_p1_Whc, sid_n0_C);
		model->PW__p2_Whc__p1_Whc.collectFeature(sid_p2_Whc, sid_p1_Whc);
		model->PW__p2_Wfc__p1_Whc.collectFeature(sid_p2_Wfc, sid_p1_Whc);
		model->PW__p2_Wec__p1_Whc.collectFeature(sid_p2_Wec, sid_p1_Whc);
		model->PW__p2_W__p1_Whc.collectFeature(sid_p2_W, sid_p1_Whc);
		model->PW__p2_Whc__p1_W.collectFeature(sid_p2_Whc, sid_p1_W);
		model->PW__p2_Whc__p1_Wl.collectFeature(sid_p2_Whc, sid_p1_Wl);
		model->PW__p2_Wl__p1_Whc.collectFeature(sid_p2_Wl, sid_p1_Whc);
		model->PW__p2_Whc__p1_C.collectFeature(sid_p2_Whc, sid_p1_C);
		model->PW__p1_Whc__p1_Wl.collectFeature(sid_p1_Whc, sid_p1_Wl);
		model->SHO__p1_Whc__p1_T.collectFeature(sid_p1_Whc, sid_p1_T);
		model->SHO__p1_Whc__p2_T.collectFeature(sid_p1_Whc, sid_p2_T);
		model->SHO__p2_Wec__p1_Whc__p1_T.collectFeature(sid_p2_Wec, sid_p1_Whc, sid_p1_T);
		model->SHO__p2_Wec__p1_Whc__n0_C__p1_T.collectFeature(sid_p2_Wec, sid_p1_Whc, sid_n0_C, sid_p1_T);
		model->SHO__p1_Whc__ac.collectFeature(sid_p1_Whc);
		model->SHO__p1_Whc__n0_C__p1_T.collectFeature(sid_p1_Whc, sid_n0_C, sid_p1_T);
		model->SHO__p1_Whc__p2_T__ac.collectFeature(sid_p1_Whc, sid_p2_T);
		model->SHO__p2_Whc__p1_T__ac.collectFeature(sid_p2_Whc, sid_p1_T);
		model->SYN__s0s1_ALd__s0s1_CWl__ac.collectFeature(sid_s0s1_ALd, sid_s0s1_CWl);
		model->SYN__s0s1_ARd__s0s1_CWl__ac.collectFeature(sid_s0s1_ARd, sid_s0s1_CWl);
		model->SYN__s0s1_CWd__s0s1_CWl__ac.collectFeature(sid_s0s1_CWd, sid_s0s1_CWl);
		model->PW__p1_Wd__p1_T__p1_Wl.collectFeature(sid_p1_Wd, sid_p1_T, sid_p1_Wl);
	}

};

#endif /* SRC_AtomFeatures_H_ */
