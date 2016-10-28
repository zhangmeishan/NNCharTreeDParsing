/*
 * Dep.h
 *
 *  Created on: Apr 23, 2016
 *      Author: panda
 */

#ifndef BASIC_DEP_H_
#define BASIC_DEP_H_

#include "MyLib.h"

class CDep {
public:
	const static int DEP_SIZE = 1;
	const static string DEP_STRING[DEP_SIZE];
	const static string NULLDEP;
public:
	static inline int getID(const string& dep){
		for (int idx = 0; idx < DEP_SIZE; idx++){
			if (DEP_STRING[idx] == dep){
				return idx;
			}
		}
		return -1;
	}
};

const string CDep::DEP_STRING[DEP_SIZE] = {
	"ROOT", 
};

const string CDep::NULLDEP = "-NULL-";

#endif /* BASIC_DEP_H_ */
