/*
 * CAction.h
 *
 *  Created on: Oct 6, 2015
 *      Author: mszhang
 */

#ifndef BASIC_CAction_H_
#define BASIC_CAction_H_

#include <sstream>
#include "Tag.h"
#include "Dep.h"

/*===============================================================
 *
 * scored actions
 *
 *==============================================================*/
// for segmentation, there are only threee valid operations
class CAction {
public:
	enum CODE { IDLE = 0, SHIFT_IN = 1, ARC_LEFT_IN = 2, ARC_RIGHT_IN = 3, POP_WORD = 4, 
		SHIFT = 5, ARC_LEFT_OUT = SHIFT + CTag::TAG_SIZE, ARC_RIGHT_OUT = ARC_LEFT_OUT + CDep::DEP_SIZE,
		POP_ROOT = ARC_RIGHT_OUT + CDep::DEP_SIZE, NO_ACTION = 1000
	};
  unsigned long _code;

public:
   CAction() : _code(NO_ACTION){
   }

   CAction(int code) : _code(code){
   }

   CAction(const CAction &ac) : _code(ac._code){
   }

public:
   inline void clear() { _code=NO_ACTION; }

   inline void set(int code){
     _code = code;
   }

   inline bool isNone() const { return _code==NO_ACTION; }
   inline bool isInnerAction() const { return _code >= SHIFT_IN && _code <= POP_WORD; }
   inline bool isInterAction() const { return _code >= SHIFT && _code <= POP_ROOT; }
   inline bool isFinish() const { return _code == POP_ROOT; }
   inline bool isIdle() const { return _code==IDLE; }
   inline bool isShiftIn() const { return _code == SHIFT_IN; }
   inline bool isArcLeftIn() const { return _code == ARC_LEFT_IN; }
   inline bool isArcRightIn() const { return _code == ARC_RIGHT_IN; }
   inline bool isPopWord() const { return _code == POP_WORD; }
   inline bool isShift() const { return _code >= SHIFT && _code < ARC_LEFT_OUT; }
   inline bool isArcLeftOut() const { return _code >= ARC_LEFT_OUT && _code < ARC_RIGHT_OUT; }
   inline bool isArcRightOut() const { return _code >= ARC_RIGHT_OUT && _code < POP_ROOT; }
public:
   inline std::string str() const {
	   if (_code == IDLE) return "IDLE";
	   else if (_code == SHIFT_IN) return "SHIFT_IN";
	   else if (_code == ARC_LEFT_IN) return "ARC_LEFT_IN";
	   else if (_code == ARC_RIGHT_IN) return "ARC_RIGHT_IN";
	   else if (_code == POP_WORD) return "POP_WORD";
	   else if (_code >= SHIFT && _code < ARC_LEFT_OUT) return "SHIFT_OUT_" + getTag();
	   else if (_code >= ARC_LEFT_OUT && _code < ARC_RIGHT_OUT) return "ARC_LEFT_OUT_" + getDep();
	   else if (_code >= ARC_RIGHT_OUT && _code < POP_ROOT) return "ARC_RIGHT_OUT_" + getDep();
	   else if (_code == POP_ROOT) return "POP_ROOT";

	   return "NO_ACTION";
   }


   inline int getTAGId() const{
	   if (_code >= SHIFT && _code < ARC_LEFT_OUT){
		   return _code - CAction::SHIFT;
	   }
	   return -1;
   }

   inline const string& getTag() const{
	   int id = getTAGId();
	   if (id >= 0){
		   return CTag::TAG_STRING[id];		   
	   }
	   else{
		   return nullkey;
	   }
   }

   inline int getDEPId() const{
	   if (_code >= ARC_LEFT_OUT && _code < ARC_RIGHT_OUT){
		   return _code - CAction::ARC_LEFT_OUT;
	   }
	   if (_code >= ARC_RIGHT_OUT && _code < POP_ROOT){
		   return _code - CAction::ARC_RIGHT_OUT;
	   }
	   return -1;
   }

   inline const string& getDep() const{
	   int id = getDEPId();
	   if (id >= 0){
		   return CDep::DEP_STRING[id];
	   }
	   else{
		   return nullkey;
	   }
   }

public:
   const unsigned long &code() const {return _code;}
   const unsigned long &hash() const {return _code;}
   bool operator == (const CAction &a1) const { return _code == a1._code; }
   bool operator != (const CAction &a1) const { return _code != a1._code; }
   bool operator < (const CAction &a1) const { return _code < a1._code; }
   bool operator > (const CAction &a1) const { return _code > a1._code; }

};


inline std::ostream & operator << (std::ostream &os, const CAction &action) {
   os << action.str();
   return os;
}


#endif /* BASIC_CAction_H_ */
