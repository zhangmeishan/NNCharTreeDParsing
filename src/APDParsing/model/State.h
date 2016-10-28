/*
 * State.h
 *
 *  Created on: Oct 1, 2015
 *      Author: mszhang
 */

#ifndef TAGGER_STATE_H_
#define TAGGER_STATE_H_

#include "ModelParams.h"
#include "Action.h"
#include "ActionedNodes.h"
#include "AtomFeatures.h"
#include "Utf.h"
#include "Instance.h"

class CStateItem {
public:
	//values
	short _stack[max_sentence_clength];
	short _stack_type[max_sentence_clength];  //0, inner; 1, inter
	short _stack_size;

	short _head_set[max_sentence_clength];
	short _head[max_sentence_clength];
	short _head_set_size;

	short _left_most_index[max_sentence_clength]; 
	short _right_most_index[max_sentence_clength]; 

	short _inner_left_most_index[max_sentence_clength];
	short  _inner_right_most_index[max_sentence_clength];

	short _left_closest_index[max_sentence_clength];
	short _right_closest_index[max_sentence_clength];

	short _left_children_num[max_sentence_clength]; 
	short _right_children_num[max_sentence_clength];

	short _left_sibling[max_sentence_clength];
	short _right_sibling[max_sentence_clength];

	short _deplabels[max_sentence_clength];
	short _deplabel_types[max_sentence_clength];

	short _postags[max_sentence_clength];
	short _segment_types[max_sentence_clength];

	short _segment_heads[max_sentence_clength];
	short _segment_starts[max_sentence_clength];
	short _segment_ends[max_sentence_clength];

	short _next_index;
	short _step;

	CStateItem *_prevState;

	const std::vector<std::string> *_chars;
	int _char_size;

	// features
	ActionedNodes _nextscores;  // features current used
	AtomFeatures _atomFeat;  //features will be used for future
	CAction _lastAction;
	PNode _score;

public:
	bool _bStart; // whether it is a start state
	bool _bGold; // for train
	bool _bEnd; // whether it is an end state

public:
	CStateItem() {
		clear();
	}


	virtual ~CStateItem(){
		clear();
	}

	void initial(ModelParams& params, HyperParams& hyparams) {
		for (int idx = 0; idx <= CAction::POP_ROOT; idx++){
			_nextscores.initial(params, hyparams);
		}
	}

	void setInput(const std::vector<std::string>* chars) {
		_chars = chars;
		_char_size = chars->size();
	}

	void clear() {
		_stack_size = 0;
		_head_set_size = 0;
		_next_index = 0;

		clearProperty();

		_prevState = 0;
		_lastAction.clear();

		_chars = 0;
		_char_size = 0;

		_score = NULL;
		_bStart = true;
		_bGold = true;
		_bEnd = false;
		_step = 0;
	}


	const CStateItem* getPrevState() const{
		return _prevState;
	}


protected:
	inline void copyProperty2Next(CStateItem* next){
		memcpy(next->_stack, _stack, sizeof(short)*_stack_size);
		memcpy(next->_stack_type, _stack_type, sizeof(short)*_stack_size);

		memcpy(next->_head_set, _head_set, sizeof(short)*_head_set_size);
		memcpy(next->_head, _head, sizeof(short)*_next_index);

		memcpy(next->_left_most_index, _left_most_index, sizeof(short)*_next_index);
		memcpy(next->_right_most_index, _right_most_index, sizeof(short)*_next_index);

		memcpy(next->_inner_left_most_index, _inner_left_most_index, sizeof(short)*_next_index);
		memcpy(next->_inner_right_most_index, _inner_right_most_index, sizeof(short)*_next_index);

		memcpy(next->_left_closest_index, _left_closest_index, sizeof(short)*_next_index);
		memcpy(next->_right_closest_index, _right_closest_index, sizeof(short)*_next_index);

		memcpy(next->_left_children_num, _left_children_num, sizeof(short)*_next_index);
		memcpy(next->_right_children_num, _right_children_num, sizeof(short)*_next_index);

		memcpy(next->_left_sibling, _left_sibling, sizeof(short)*_next_index);
		memcpy(next->_right_sibling, _right_sibling, sizeof(short)*_next_index);

		memcpy(next->_deplabels, _deplabels, sizeof(short)*_next_index);
		memcpy(next->_deplabel_types, _deplabel_types, sizeof(short)*_next_index);

		memcpy(next->_postags, _postags, sizeof(short)*_next_index);
		memcpy(next->_segment_types, _segment_types, sizeof(short)*_next_index);

		memcpy(next->_segment_heads, _segment_heads, sizeof(short)*_next_index);
		memcpy(next->_segment_starts, _segment_starts, sizeof(short)*_next_index);
		memcpy(next->_segment_ends, _segment_ends, sizeof(short)*_next_index);

		next->_chars = _chars;
		next->_char_size = _char_size;
		next->_prevState = this;
		next->_step = _step + 1;
	}

	inline void clearProperty(){
		_stack[_stack_size] = -2;
		_stack_type[_stack_size] = -2;

		_head_set[_head_set_size] = -2;
		_head[_next_index] = -2;

		_left_most_index[_next_index] = -2;
		_right_most_index[_next_index] = -2;

		_left_closest_index[_next_index] = -2;
		_right_closest_index[_next_index] = -2;

		_left_children_num[_next_index] = -2;
		_right_children_num[_next_index] = -2;

		_left_sibling[_next_index] = -2;
		_right_sibling[_next_index] = -2;

		_deplabels[_next_index] = -2;
		_deplabel_types[_next_index] = -2;

		_postags[_next_index] = -2;
		_segment_types[_next_index] = -2;

		_segment_heads[_next_index] = -2;
		_segment_starts[_next_index] = -2;
		_segment_ends[_next_index] = -2;
	}

// conditions
public:
	bool allow_shift() const{
		if (_next_index >= _char_size){
			return false;
		}
		if (_next_index == 0){
			return true;
		}
		if (_stack_size > 0 && _stack_type[_stack_size - 1] == 1){
			return true;
		}

		return false;
	}

	bool allow_arc_left_out() const{
		if (_stack_size > 1 && _stack_type[_stack_size - 1] == 1 && _stack_type[_stack_size - 2] == 1){
			return true;
		}
		return false;
	}

	bool allow_arc_right_out() const{
		if (_stack_size > 1 && _stack_type[_stack_size - 1] == 1 && _stack_type[_stack_size - 2] == 1){
			return true;
		}
		return false;
	}

	bool allow_pop_root() const{
		if (_next_index == _char_size && _stack_size == 1 && _stack_type[0] == 1){
			return true;
		}
		return false;
	}

	bool allow_shift_in() const{
		if (_next_index >= _char_size){
			return false;
		}
		if (_stack_size > 0 && _stack_type[_stack_size - 1] == 0){
			return true;
		}
		return false;
	}

	bool allow_arc_left_in() const{
		if (_stack_size > 1 && _stack_type[_stack_size - 1] == 0 && _stack_type[_stack_size - 2] == 0){
			return true;
		}
		return false;
	}

	bool allow_arc_right_in() const{
		if (_stack_size > 1 && _stack_type[_stack_size - 1] == 0 && _stack_type[_stack_size - 2] == 0){
			return true;
		}
		return false;
	}

	bool allow_pop_word() const{
		if (_stack_size > 0 && _stack_type[_stack_size - 1] == 0 && (_stack_size == 1 || _stack_type[_stack_size - 2] == 1)){
			for (int idx = 0; idx < _stack_size - 2; idx++){
				if (_stack_type[idx] == 0){
					std::cout << "check state error during pop word" << std::endl;
					return false;
				}
			}
			return true;
		}
		return false;
	}

	bool IsTerminated() const {
		return _bEnd;
	}

//actions
public:
	//only assign context
	void shift(CStateItem* next, const int& tag){
		if (!allow_shift()) {
			std::cout << "inter shift error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index + 1;
		next->_stack_size = _stack_size + 1;

		next->_stack[_stack_size] = _next_index;
		next->_stack_type[_stack_size] = 0;  // inner 
		next->_head_set[_next_index] = 0; //head not assigned

		next->_deplabel_types[_next_index] = 0; // inner

		next->_inner_left_most_index[_next_index] = _next_index;
		next->_inner_right_most_index[_next_index] = _next_index;

		next->_left_sibling[_next_index] = -1;
		next->_right_sibling[_next_index] = -1;

		next->_postags[_next_index] = tag;  
		next->_segment_types[_next_index] = 1;   //start a new word

		next->clearProperty();
		next->_lastAction.set(CAction::SHIFT + tag);
	}

	void arc_left_out(CStateItem* next, const int& dep){
		if (!allow_arc_left_out()) {
			std::cout << "inter arc left error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index;
		next->_stack_size = _stack_size - 1;

		int top0 = _stack[_stack_size - 1];
		int top1 = _stack[_stack_size - 2];

		next->_stack[_stack_size - 2] = top0;
		next->_stack_type[_stack_size - 2] = _stack_type[_stack_size - 1];

		next->_head_set[top1] = 1; //head assigned
		next->_head[top1] = top0;
		next->_deplabels[top1] = dep;

		next->_left_children_num[top0] = _left_children_num[top0] + 1;
		next->_left_most_index[top0] = top1;

		if (_left_children_num[top0] == 0){
			next->_left_closest_index[top0] = top1;
		}
		else{
			next->_left_sibling[_left_most_index[top0]] = top1;
			next->_right_sibling[top1] = _left_most_index[top0];
		}

		next->clearProperty();
		next->_lastAction.set(CAction::ARC_LEFT_OUT + dep);
	}

	void arc_right_out(CStateItem* next, const int& dep){
		if (!allow_arc_right_out()) {
			std::cout << "inter arc right error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index;
		next->_stack_size = _stack_size - 1;

		int top0 = _stack[_stack_size - 1];
		int top1 = _stack[_stack_size - 2];

		//next->_stack[_stack_size - 2] = top1;
		//next->_stack_type[_stack_size - 2] = _stack_type[_stack_size - 2];  // no need

		next->_head_set[top0] = 1; //head assigned
		next->_head[top0] = top1;
		next->_deplabels[top0] = dep;

		next->_right_children_num[top1] = _right_children_num[top1] + 1;
		next->_right_most_index[top1] = top0;

		if (_right_children_num[top1] == 0){
			next->_right_closest_index[top1] = top0;
		}
		else{
			next->_left_sibling[top0] = _right_most_index[top1];
			next->_right_sibling[_right_most_index[top1]] = top0;
		}

		next->clearProperty();
		next->_lastAction.set(CAction::ARC_RIGHT_OUT + dep);
	}

	void pop_root(CStateItem* next){
		if (!allow_pop_root()) {
			std::cout << "pop root error" << std::endl;
			return;
		}
		copyProperty2Next(next);
		next->_next_index = _char_size;
		next->_stack_size = 0;

		int top0 = _stack[_stack_size - 1];
		next->_head_set[top0] = 1; //head assigned
		next->_head[top0] = -1;
		next->_deplabels[top0] = 0;

		next->clearProperty();
		next->_lastAction.set(CAction::POP_ROOT);
	}



	//only assign context
	void shift_in(CStateItem* next){
		if (!allow_shift_in()) {
			std::cout << "inner shift error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index + 1;
		next->_stack_size = _stack_size + 1;

		next->_stack[_stack_size] = _next_index;
		next->_stack_type[_stack_size] = 0;  // inner 
		next->_head_set[_next_index] = 0; //head not assigned
		next->_deplabel_types[_next_index] = 0; // inner

		next->_inner_left_most_index[_next_index] = _next_index;
		next->_inner_right_most_index[_next_index] = _next_index;

		next->_left_sibling[_next_index] = -1;
		next->_right_sibling[_next_index] = -1;

		next->_postags[_next_index] = _postags[_next_index-1];
		next->_segment_types[_next_index] = 0;   //start a new word

		next->clearProperty();
		next->_lastAction.set(CAction::SHIFT_IN);
	}

	void arc_left_in(CStateItem* next){
		if (!allow_arc_left_in()) {
			std::cout << "inter arc left error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index;
		next->_stack_size = _stack_size - 1;

		int top0 = _stack[_stack_size - 1];
		int top1 = _stack[_stack_size - 2];

		next->_stack[_stack_size - 2] = top0;
		next->_stack_type[_stack_size - 2] = _stack_type[_stack_size - 1];

		next->_head_set[top1] = 1; //head assigned
		next->_head[top1] = top0;
		next->_deplabels[top1] = -1;

		next->_inner_left_most_index[top0] = _inner_left_most_index[top1];

		next->clearProperty();
		next->_lastAction.set(CAction::ARC_LEFT_IN);
	}

	void arc_right_in(CStateItem* next){
		if (!allow_arc_right_in()) {
			std::cout << "inter arc right error" << std::endl;
			return;
		}

		copyProperty2Next(next);

		next->_next_index = _next_index;
		next->_stack_size = _stack_size - 1;

		int top0 = _stack[_stack_size - 1];
		int top1 = _stack[_stack_size - 2];

		//next->_stack[_stack_size - 2] = top1;
		//next->_stack_type[_stack_size - 2] = _stack_type[_stack_size - 2]; // no need

		next->_head_set[top0] = 1; //head assigned
		next->_head[top0] = top1;
		next->_deplabels[top0] = -1;

		next->_inner_right_most_index[top1] = _inner_right_most_index[top0];

		next->clearProperty();
		next->_lastAction.set(CAction::ARC_RIGHT_IN);
	}

	void pop_word(CStateItem* next){
		if (!allow_pop_word()) {
			std::cout << "pop word error" << std::endl;
			return;
		}
		copyProperty2Next(next);
		next->_next_index = _next_index;
		next->_stack_size = _stack_size;

		int head = _stack[_stack_size - 1];

		next->_stack_type[_stack_size - 1] = 1; // inter dependency

		next->_deplabel_types[head] = 1; // inner

		next->_left_most_index[head] = -1;
		next->_right_most_index[head] = -1;

		next->_left_children_num[head] = 0;
		next->_right_children_num[head] = 0;
				
		int start = _inner_left_most_index[head];
		int end = _inner_right_most_index[head];

		if (_segment_types[start] != 1 || end != _next_index - 1){
			std::cout << "pop word error" << std::endl;
		}

		for (int idx = start; idx <= end; idx++){
			next->_segment_starts[idx] = start;
			next->_segment_ends[idx] = end;
			next->_segment_heads[idx] = head;
		}

		next->clearProperty();
		next->_lastAction.set(CAction::POP_WORD);
	}


	void idle(CStateItem* next){
		if (!IsTerminated()) {
			std::cout << "idle error" << std::endl;
			return;
		}
		copyProperty2Next(next);
		next->_next_index = _char_size;
		next->_stack_size = 0;

		next->clearProperty();
		next->_lastAction.set(CAction::IDLE);
	}

//move, orcale
public:
	void move(CStateItem* next, const CAction& ac){
		next->_bStart = false;
		next->_bEnd = false;
		next->_bGold = false;
		if (ac.isShift()) {
			shift(next, ac.getTAGId());
		}
		else if (ac.isArcLeftOut()) {
			arc_left_out(next, ac.getDEPId());
		}
		else if (ac.isArcRightOut()) {
			arc_right_out(next, ac.getDEPId());
		}
		else if (ac.isFinish()) {
			pop_root(next);
			next->_bEnd = true;
		}
		else if (ac.isIdle()) {
			idle(next);
			next->_bEnd = true;
		}
		else if (ac.isShiftIn()) {
			shift_in(next);
		}
		else if (ac.isArcLeftIn()) {
			arc_left_in(next);
		}
		else if (ac.isArcRightIn()) {
			arc_right_in(next);
		}
		else if (ac.isPopWord()) {
			pop_word(next);
		}
		else {
			std::cout << "error action" << std::endl;
		}
	}

	//partial results
	void getResults(CResult& result) const {
		result.clear();
		result.allocate(_char_size);
		for (int idx = 0; idx < _next_index && idx < _char_size; idx++){
			result.segmarks[idx] = (_segment_types[idx] == 1);
			result.postags[idx] = CTag::TAG_STRING[_postags[idx]];
			result.charheads[idx] = _head[idx];			
			result.depmarks[idx] = (_deplabel_types[idx] == 1);
			result.deplabels[idx] = result.depmarks[idx] ? CDep::DEP_STRING[_deplabels[idx]] : CDep::NULLDEP;
		}
		result.chars = _chars;
	}


	void getGoldAction(const CResult& result, CAction& ac) const {
		int top0, top1, word_length;
		bool has_right_child;
		string curTag, curDep;

		if (_stack_size == 0) {
			curTag = result.postags[0];
			ac.set(CAction::SHIFT + CTag::getID(curTag));
			return;
		}
		
		if (_stack_size == 1){
			if (_next_index == _char_size)
			{
				if (_stack_type[0] == 1){
					ac.set(CAction::POP_ROOT);
					return;
				}
				else if(_stack_type[0] == 0){
					ac.set(CAction::POP_WORD);
					return;
				}
				else{
					std::cout << "error _stack_type value" << std::endl;
					return;
				}
			}
			else if (result.segmarks[_next_index]){
				if (_stack_type[0] == 1){
					curTag = result.postags[_next_index];
					ac.set(CAction::SHIFT + CTag::getID(curTag));
					return;
				}
				else if (_stack_type[0] == 0){
					ac.set(CAction::POP_WORD);
					return;
				}
				else{
					std::cout << "error _stack_type value" << std::endl;
					return;
				}
			}
			else{
				if (_stack_type[0] == 0){
					ac.set(CAction::SHIFT_IN);
					return;
				}
				else{
					std::cout << "error _stack_type value" << std::endl;
					return;
				}
			}

		}

		if (_stack_size > 1){
			top0 = _stack[_stack_size - 1];
			top1 = _stack[_stack_size - 2];

			has_right_child = false;
			for (int i = _next_index; i < _char_size; ++i) {
				if (result.charheads[i] == top0) { 
					has_right_child = true; 
					break; 
				}
			}


			if (result.charheads[top0] == top1 && !has_right_child) {
				if (result.depmarks[top0]){
					if (_stack_type[_stack_size - 1] == 1){
						curDep = result.deplabels[top0];
						ac.set(CAction::ARC_RIGHT_OUT + CDep::getID(curDep));
						return;
					}
					else if (_next_index == _char_size || result.segmarks[_next_index]){
						ac.set(CAction::POP_WORD);
						return;
					}
					else{
						ac.set(CAction::SHIFT_IN);
						return;
					}
				}
				else{
					ac.set(CAction::ARC_RIGHT_IN);
					return;
				}
			}
			else if (result.charheads[top1] == top0){
				if (result.depmarks[top1]){
					if (_stack_type[_stack_size - 1] == 1){
						curDep = result.deplabels[top1];
						ac.set(CAction::ARC_LEFT_OUT + CDep::getID(curDep));
						return;
					}
					else if (_next_index == _char_size || result.segmarks[_next_index]){
						ac.set(CAction::POP_WORD);
						return;
					}
					else{
						ac.set(CAction::SHIFT_IN);
						return;
					}
				}
				else{
					ac.set(CAction::ARC_LEFT_IN);
					return;
				}
			}
			else{
				if (result.segmarks[_next_index]){
					if (_stack_type[_stack_size - 1] == 1){
						curTag = result.postags[_next_index];
						ac.set(CAction::SHIFT + CTag::getID(curTag));
						return;
					}
					else if (_stack_type[_stack_size - 1] == 0){
						ac.set(CAction::POP_WORD);
						return;
					}
					else{
						std::cout << "error _stack_type value" << std::endl;
						return;
					}
				}
				else{
					ac.set(CAction::SHIFT_IN);
					return;
				}
			}			
		}

		ac.set(CAction::NO_ACTION);
		return;
	}

	// we did not judge whether history actions are match with current state.
	void getGoldAction(const CStateItem* goldState, CAction& ac) const{
		if (_step > goldState->_step || _step < 0) {
			ac.set(CAction::NO_ACTION);
			return;
		}
		const CStateItem *prevState = goldState->_prevState;
		CAction curAction = goldState->_lastAction;
		while (_step < prevState->_step) {
			curAction = prevState->_lastAction;
			prevState = prevState->_prevState;
		}
		return ac.set(curAction._code);
	}

	void getCandidateActions(vector<CAction> & actions) const{
		actions.clear();
		CAction ac;

		if (IsTerminated()){
			ac.set(CAction::IDLE);
			actions.push_back(ac);
			return;
		}

		if (allow_shift()){
			for (int idx = 0; idx < CTag::TAG_SIZE; idx++){
				ac.set(CAction::SHIFT + idx);
				actions.push_back(ac);
			}
		}

		if (allow_arc_left_out()){
			for (int idx = 0; idx < CDep::DEP_SIZE; idx++){
				ac.set(CAction::ARC_LEFT_OUT + idx);
				actions.push_back(ac);
			}
		}

		if (allow_arc_right_out()){
			for (int idx = 0; idx < CDep::DEP_SIZE; idx++){
				ac.set(CAction::ARC_RIGHT_OUT + idx);
				actions.push_back(ac);
			}
		}

		if (allow_pop_root()){
			ac.set(CAction::POP_ROOT);
			actions.push_back(ac);
		}

		if (allow_shift_in()){
			ac.set(CAction::SHIFT_IN);
			actions.push_back(ac);
		}

		if (allow_arc_left_in()){
			ac.set(CAction::ARC_LEFT_IN);
			actions.push_back(ac);
		}

		if (allow_arc_right_in()){
			ac.set(CAction::ARC_RIGHT_IN);
			actions.push_back(ac);
		}

		if (allow_pop_word()){
			ac.set(CAction::POP_WORD);
			actions.push_back(ac);
		}
	}

	inline std::string str() const{
		stringstream curoutstr;
		curoutstr << "score: " << _score->val(0, 0) << " ";
		curoutstr << "seg:";
		static CResult result;
		getResults(result);
		curoutstr << result;
		return curoutstr.str();
	}

protected:
	inline int getNextUnit(const int& position, const bool& bInter) const{
		if (position < 0 || position >= _char_size - 1){
			return -1;
		}
		if (bInter){ // inter characters
			int end = _segment_ends[position];
			if (end >= _char_size - 1 || end >= _next_index - 1){
				return -1;
			}
			else{
				return _segment_heads[end + 1];
			}
		}
		else{ // inner characters
			return position + 1;
		}
	}

	inline int getPrevUnit(const int& position, const bool& bInter) const{
		if (position <= 0 || position > _char_size - 1){
			return -1;
		}
		if (bInter){
			int start = _segment_starts[position];
			if (start <= 0){
				return -1;
			}
			else{
				return _segment_heads[start - 1];
			}
		}
		else{
			return position - 1;
		}
	}

	inline int getWordStart(const int& position) const{
		if (position < 0 || position >= _next_index || position >= _char_size){
			return -1;
		}
		int idx = position;
		while (_segment_types[idx] != 1 && idx > 0){
			idx--;
		}
		return idx;
	}

	inline int getWordEnd(const int& position) const{
		if (position < 0 || position >= _next_index || position >= _char_size){
			return -1;
		}
		int idx = position;
		while (idx + 1 < _char_size && _segment_types[idx + 1] != 1){
			idx++;
		}
		return idx;
	}

	// according subword head to find boundaries
	inline int getSubWordStart(const int& position) const{
		if (position < 0 || position >= _next_index || position >= _char_size){
			return -1;
		}
		return _inner_left_most_index[position];
	}

	inline int getSubWordEnd(const int& position) const{
		if (position < 0 || position >= _next_index || position >= _char_size){
			return -1;
		}
		return _inner_right_most_index[position];
	}

	//get word by boundaries
	inline void getWord(string& curWord, const int& start, const int& end){
		if (start == -1 || end == -1){
			curWord = nullkey;
			return;
		}
		curWord = "";
		for (int idx = start; idx <= end; idx++){
			curWord = curWord + _chars->at(idx);
		}
	}


public:
	inline void computeNextScore(Graph *cg, const vector<CAction>& acs){
		if (_bStart){
			_nextscores.forward(cg, acs, _atomFeat, NULL);
		}
		else{
			_nextscores.forward(cg, acs, _atomFeat, _score);
		}
	}

	inline void collectFeat(ModelParams* model_params){
		_prevState->_atomFeat.collectFeatures(model_params);
	}


public:
	inline void prepare(HyperParams* hyper_params, ModelParams* model_params){
		//basic features for word segmentation and pos tagging
		int idx, length, p1wstart, p1wend;
		string lastTag;
		_atomFeat.str_n0_C = _next_index < _char_size ? _chars->at(_next_index) : nullkey;
		_atomFeat.str_n1_C = _next_index + 1 < _char_size ? _chars->at(_next_index + 1) : nullkey;
		_atomFeat.str_p1_C = _next_index > 0 && _next_index < _char_size ? _chars->at(_next_index - 1) : nullkey;
		_atomFeat.str_p2_C = _next_index > 1 && _next_index < _char_size ? _chars->at(_next_index - 2) : nullkey;

		_atomFeat.str_n0_Ct = _next_index < _char_size ? wordtype(_atomFeat.str_n0_C) : nullkey;
		_atomFeat.str_p1_Ct = _next_index > 0 && _next_index < _char_size ? wordtype(_atomFeat.str_p1_C) : nullkey;
		_atomFeat.str_p2_Ct = _next_index > 1 && _next_index < _char_size ? wordtype(_atomFeat.str_p2_C) : nullkey;

		_atomFeat.str_n0_Cc = _next_index < _char_size ? (hyper_params->char_cat.find(_atomFeat.str_n0_C) != hyper_params->char_cat.end() ? hyper_params->char_cat[_atomFeat.str_n0_C] : unknownkey) : nullkey;
		_atomFeat.str_p1_Cc = _next_index > 0 && _next_index < _char_size ? (hyper_params->char_cat.find(_atomFeat.str_p1_C) != hyper_params->char_cat.end() ? hyper_params->char_cat[_atomFeat.str_p1_C] : unknownkey) : nullkey;


		int p1_W_start = getWordStart(_next_index - 1);
		int p1_W_end = _next_index > 0 && _next_index < _char_size ? _next_index - 1 : -1;
		_atomFeat.str_p1_W = nullkey;
		_atomFeat.str_p1_Wfc = nullkey;
		_atomFeat.str_p1_Whc = nullkey;
		_atomFeat.sid_p1_Wl = 0;
		_atomFeat.str_p1_Wmc.clear();
		_atomFeat.sid_p1_Wd = 0;
		_atomFeat.sid_p1_T = CTag::TAG_SIZE;
		_atomFeat.sid_p1_WTd = 0;
		if (p1_W_start >= 0){
			_atomFeat.str_p1_W = "";
			for (idx = p1_W_start; idx <= p1_W_end; idx++){
				_atomFeat.str_p1_W = _atomFeat.str_p1_W + _chars->at(idx);
				if (_head[idx] < p1_W_start || _head[idx] > p1_W_end){
					_atomFeat.str_p1_Whc = _chars->at(idx);
				}
				_atomFeat.str_p1_Wmc.push_back(_chars->at(idx));
			}
			_atomFeat.str_p1_Wfc = _chars->at(p1_W_start);

			length = p1_W_end - p1_W_start + 1;
			if (length > 5) length = 5;
			_atomFeat.sid_p1_Wl = length;

			if (hyper_params->dicts.find(_atomFeat.str_p1_W) != hyper_params->dicts.end()){
				_atomFeat.sid_p1_Wd = 1;
			}
			else{
				_atomFeat.sid_p1_Wd = 2;
			}

			_atomFeat.sid_p1_T = _postags[p1_W_start];
			lastTag = CTag::TAG_STRING[_atomFeat.sid_p1_T];
			if (hyper_params->word_tags.find(_atomFeat.str_p1_W) != hyper_params->word_tags.end()){
				if (hyper_params->word_tags[_atomFeat.str_p1_W].find(lastTag) != hyper_params->word_tags[_atomFeat.str_p1_W].end()){
					if (hyper_params->word_tags[_atomFeat.str_p1_W][lastTag] > hyper_params->maxfreq / 5000 + hyper_params->threshold){
						_atomFeat.sid_p1_WTd = 1;
					}
					else{
						_atomFeat.sid_p1_WTd = 2;
					}
				}
				else{
					_atomFeat.sid_p1_WTd = 3;
				}
			}
		}

		int p2_W_start = getWordStart(p1_W_start - 1);
		int p2_W_end = p1_W_start > 0 && p1_W_start < _char_size ? p1_W_start - 1 : -1;
		_atomFeat.str_p2_W = nullkey;
		_atomFeat.str_p2_Wfc = nullkey;
		_atomFeat.str_p2_Whc = nullkey;
		_atomFeat.str_p2_Wec = nullkey;
		_atomFeat.sid_p2_Wl = 0;
		_atomFeat.sid_p2_T = CTag::TAG_SIZE;
		if (p2_W_start >= 0){
			_atomFeat.str_p2_W = "";
			for (idx = p2_W_start; idx <= p2_W_end; idx++){
				_atomFeat.str_p2_W = _atomFeat.str_p2_W + _chars->at(idx);
				if (_head[idx] < p2_W_start || _head[idx] > p2_W_end){
					_atomFeat.str_p2_Whc = _chars->at(idx);
				}
			}
			_atomFeat.str_p2_Wfc = _chars->at(p2_W_start);
			_atomFeat.str_p2_Wec = _chars->at(p2_W_end);
			length = p2_W_end - p2_W_start + 1;
			if (length > 5) length = 5;
			_atomFeat.sid_p2_Wl = length;

			_atomFeat.sid_p2_T = _postags[p2_W_start];
		}

		//additional features for parsing tree structures
		int s0_index = _stack_size <= 0 ? -1 : _stack[_stack_size - 1]; // stack top		
		int s1_index = _stack_size <= 1 ? -1 : _stack[_stack_size - 2]; // stack top 1 head
		int s2_index = _stack_size <= 2 ? -1 : _stack[_stack_size - 3]; // stack top 2 head

		int s0ld1_index = _stack_size <= 0 || _stack_type[_stack_size - 1] == 0 ? -1 : _left_most_index[s0_index]; // leftmost dep
		int s0rd1_index = _stack_size <= 0 || _stack_type[_stack_size - 1] == 0 ? -1 : _right_most_index[s0_index]; // rightmost dep
		int s0ld2_index = s0ld1_index == -1 ? -1 : _right_sibling[s0ld1_index]; // secondleftmost dep
		int s0rd2_index = s0rd1_index == -1 ? -1 : _left_sibling[s0rd1_index]; // secondrightmost dep

		int s1ld1_index = _stack_size <= 1 || _stack_type[_stack_size - 2] == 0 ? -1 : _left_most_index[s1_index]; // leftmost dep
		int s1rd1_index = _stack_size <= 1 || _stack_type[_stack_size - 2] == 0 ? -1 : _right_most_index[s1_index]; // rightmost dep
		int s1ld2_index = s1ld1_index == -1 ? -1 : _right_sibling[s1ld1_index]; // secondleftmost dep
		int s1rd2_index = s1rd1_index == -1 ? -1 : _left_sibling[s1rd1_index]; // secondrightmost dep

		int s0_W_start = s0_index == -1 ? -1 : getSubWordStart(s0_index);
		int s0_W_end = s0_index == -1 ? -1 : getSubWordEnd(s0_index);
		getWord(_atomFeat.str_s0_W, s0_W_start, s0_W_end);
		_atomFeat.sid_s0_T = s0_index == -1 ? -1 : _postags[s0_index];
		_atomFeat.str_s0_C = s0_index == -1 ? nullkey : _chars->at(s0_index);

		if (s0_index >= 0 && s1_index >= 0){
			_atomFeat.sid_s0s1_dist = 0;
			for (idx = s1_index; idx <= s0_index; idx++){
				if (_segment_types[idx] == 1){
					_atomFeat.sid_s0s1_dist++;
				}
				if (_atomFeat.sid_s0s1_dist >= 5){
					break;
				}
			}
		}
		
		_atomFeat.sid_s0_larity = -1;
		_atomFeat.sid_s0_rarity = -1;
		if (s0_index >= 0 && _stack_type[_stack_size -1] == 1){
			_atomFeat.sid_s0_larity = _left_children_num[s0_index];
			if (_atomFeat.sid_s0_larity > 5) _atomFeat.sid_s0_larity = 5;
			_atomFeat.sid_s0_rarity = _left_children_num[s0_index];
			if (_atomFeat.sid_s0_rarity > 5) _atomFeat.sid_s0_rarity = 5;
		}
		
		_atomFeat.sid_s1_larity = -1;
		_atomFeat.sid_s1_rarity = -1;
		if (s1_index >= 0 && _stack_type[_stack_size - 12] == 1){
			_atomFeat.sid_s1_larity = _left_children_num[s1_index];
			if (_atomFeat.sid_s1_larity > 5) _atomFeat.sid_s1_larity = 5;
			_atomFeat.sid_s1_rarity = _left_children_num[s1_index];
			if (_atomFeat.sid_s1_rarity > 5) _atomFeat.sid_s1_rarity = 5;
		}

		int s1_W_start = s1_index == -1 ? -1 : getSubWordStart(s1_index);
		int s1_W_end = s1_index == -1 ? -1 : getSubWordEnd(s1_index);
		getWord(_atomFeat.str_s1_W, s1_W_start, s1_W_end);
		_atomFeat.sid_s1_T = s1_index == -1 ? -1 : _postags[s1_index];
		_atomFeat.str_s1_C = s1_index == -1 ? nullkey : _chars->at(s1_index);

		int s2_W_start = s2_index == -1 ? -1 : getSubWordStart(s2_index);
		int s2_W_end = s2_index == -1 ? -1 : getSubWordEnd(s2_index);
		getWord(_atomFeat.str_s2_W, s2_W_start, s2_W_end);
		_atomFeat.sid_s2_T = s2_index == -1 ? -1 : _postags[s2_index];
		_atomFeat.str_s2_C = s2_index == -1 ? nullkey : _chars->at(s2_index);

		int s0rd1_W_start = s0rd1_index == -1 ? -1 : getSubWordStart(s0rd1_index);
		int s0rd1_W_end = s0rd1_index == -1 ? -1 : getSubWordEnd(s0rd1_index);
		getWord(_atomFeat.str_s0rd1_W, s0rd1_W_start, s0rd1_W_end);
		_atomFeat.sid_s0rd1_T = s0rd1_index == -1 ? -1 : _postags[s0rd1_index];
		_atomFeat.sid_s0rd1_P = s0rd1_index == -1 ? -1 : _deplabels[s0rd1_index];
		_atomFeat.str_s0rd1_C = s0rd1_index == -1 ? nullkey : _chars->at(s0rd1_index);

		int s0ld1_W_start = s0ld1_index == -1 ? -1 : getSubWordStart(s0ld1_index);
		int s0ld1_W_end = s0ld1_index == -1 ? -1 : getSubWordEnd(s0ld1_index);
		getWord(_atomFeat.str_s0ld1_W, s0ld1_W_start, s0ld1_W_end);
		_atomFeat.sid_s0ld1_T = s0ld1_index == -1 ? -1 : _postags[s0ld1_index];
		_atomFeat.sid_s0ld1_P = s0ld1_index == -1 ? -1 : _deplabels[s0ld1_index];
		_atomFeat.str_s0ld1_C = s0ld1_index == -1 ? nullkey : _chars->at(s0ld1_index);

		int s0rd2_W_start = s0rd2_index == -1 ? -1 : getSubWordStart(s0rd2_index);
		int s0rd2_W_end = s0rd2_index == -1 ? -1 : getSubWordEnd(s0rd2_index);
		getWord(_atomFeat.str_s0rd2_W, s0rd2_W_start, s0rd2_W_end);
		_atomFeat.sid_s0rd2_T = s0rd2_index == -1 ? -1 : _postags[s0rd2_index];
		_atomFeat.sid_s0rd2_P = s0rd2_index == -1 ? -1 : _deplabels[s0rd2_index];
		_atomFeat.str_s0rd2_C = s0rd2_index == -1 ? nullkey : _chars->at(s0rd2_index);

		int s0ld2_W_start = s0ld2_index == -1 ? -1 : getSubWordStart(s0ld2_index);
		int s0ld2_W_end = s0ld2_index == -1 ? -1 : getSubWordEnd(s0ld2_index);
		getWord(_atomFeat.str_s0ld2_W, s0ld2_W_start, s0ld2_W_end);
		_atomFeat.sid_s0ld2_T = s0ld2_index == -1 ? -1 : _postags[s0ld2_index];
		_atomFeat.sid_s0ld2_P = s0ld2_index == -1 ? -1 : _deplabels[s0ld2_index];
		_atomFeat.str_s0ld2_C = s0ld2_index == -1 ? nullkey : _chars->at(s0ld2_index);

		int s1rd1_W_start = s1rd1_index == -1 ? -1 : getSubWordStart(s1rd1_index);
		int s1rd1_W_end = s1rd1_index == -1 ? -1 : getSubWordEnd(s1rd1_index);
		getWord(_atomFeat.str_s1rd1_W, s1rd1_W_start, s1rd1_W_end);
		_atomFeat.sid_s1rd1_T = s1rd1_index == -1 ? -1 : _postags[s1rd1_index];
		_atomFeat.sid_s1rd1_P = s1rd1_index == -1 ? -1 : _deplabels[s1rd1_index];
		_atomFeat.str_s1rd1_C = s1rd1_index == -1 ? nullkey : _chars->at(s1rd1_index);

		int s1ld1_W_start = s1ld1_index == -1 ? -1 : getSubWordStart(s1ld1_index);
		int s1ld1_W_end = s1ld1_index == -1 ? -1 : getSubWordEnd(s1ld1_index);
		getWord(_atomFeat.str_s1ld1_W, s1ld1_W_start, s1ld1_W_end);
		_atomFeat.sid_s1ld1_T = s1ld1_index == -1 ? -1 : _postags[s1ld1_index];
		_atomFeat.sid_s1ld1_P = s1ld1_index == -1 ? -1 : _deplabels[s1ld1_index];
		_atomFeat.str_s1ld1_C = s1ld1_index == -1 ? nullkey : _chars->at(s1ld1_index);

		int s1rd2_W_start = s1rd2_index == -1 ? -1 : getSubWordStart(s1rd2_index);
		int s1rd2_W_end = s1rd2_index == -1 ? -1 : getSubWordEnd(s1rd2_index);
		getWord(_atomFeat.str_s1rd2_W, s1rd2_W_start, s1rd2_W_end);
		_atomFeat.sid_s1rd2_T = s1rd2_index == -1 ? -1 : _postags[s1rd2_index];
		_atomFeat.sid_s1rd2_P = s1rd2_index == -1 ? -1 : _deplabels[s1rd2_index];
		_atomFeat.str_s1rd2_C = s1rd2_index == -1 ? nullkey : _chars->at(s1rd2_index);

		int s1ld2_W_start = s1ld2_index == -1 ? -1 : getSubWordStart(s1ld2_index);
		int s1ld2_W_end = s1ld2_index == -1 ? -1 : getSubWordEnd(s1ld2_index);
		getWord(_atomFeat.str_s1ld2_W, s1ld2_W_start, s1ld2_W_end);
		_atomFeat.sid_s1ld2_T = s1ld2_index == -1 ? -1 : _postags[s1ld2_index];
		_atomFeat.sid_s1ld2_P = s1ld2_index == -1 ? -1 : _deplabels[s1ld2_index];
		_atomFeat.str_s1ld2_C = s1ld2_index == -1 ? nullkey : _chars->at(s1ld2_index);

		_atomFeat.sid_s0s1_ALd = _atomFeat.sid_s0s1_ARd = 0;
		_atomFeat.sid_s0s1_CWd = 0;
		if (_stack_size > 1 && _stack_type[_stack_size - 1] == 0 && _stack_type[_stack_size - 2] == 0){
			_atomFeat.sid_s0s1_CWl = s0_W_end - s1_W_start + 1;
			if (_atomFeat.sid_s0s1_CWl > 5) _atomFeat.sid_s0s1_CWl = 5;
			_atomFeat.str_s0s1_CW = _atomFeat.str_s1_W + _atomFeat.str_s0_W;

			if (hyper_params->s0s1_dicts_left.find(_atomFeat.str_s0s1_CW) != hyper_params->s0s1_dicts_left.end()
				|| hyper_params->s0s1_dicts_right.find(_atomFeat.str_s0s1_CW) != hyper_params->s0s1_dicts_right.end()){
				_atomFeat.sid_s0s1_CWd = 1;
			}
			else{
				_atomFeat.sid_s0s1_CWd = 2; // contain this sub word
			}

			if (hyper_params->s0s1_dicts_left.find(_atomFeat.str_s0s1_CW) != hyper_params->s0s1_dicts_left.end()){
				_atomFeat.sid_s0s1_ALd = 1;
			}
			else{
				_atomFeat.sid_s0s1_ALd = 2;
			}

			if (hyper_params->s0s1_dicts_right.find(_atomFeat.str_s0s1_CW) != hyper_params->s0s1_dicts_right.end()){
				_atomFeat.sid_s0s1_ARd = 1;
			}
			else{
				_atomFeat.sid_s0s1_ARd = 2;
			}
		}

		_atomFeat.stacksize = _stack_size;
		_atomFeat.allow_shift = allow_shift();
		_atomFeat.allow_arc_left_out = allow_arc_left_out();
		_atomFeat.allow_arc_right_out = allow_arc_right_out();
		_atomFeat.allow_pop_root = allow_pop_root();
		_atomFeat.is_terminated = IsTerminated();
		_atomFeat.allow_shift_in = allow_shift_in();
		_atomFeat.allow_arc_left_in = allow_arc_left_in();
		_atomFeat.allow_arc_right_in = allow_arc_right_in();
		_atomFeat.allow_pop_word = allow_pop_word();

		//
		if (model_params != NULL){
			_atomFeat.convert2Id(model_params);
		}
	}
};


class CScoredState {
public:
	CStateItem *item;
	int ac;
	dtype score;
	bool bGold;

public:
	CScoredState() : item(0), score(0), ac(0), bGold(0){
	}

	CScoredState(const CScoredState& other) : item(other.item), score(other.score), ac(other.ac), bGold(other.bGold){

	}

public:
	bool operator <(const CScoredState &a1) const {
		return score < a1.score;
	}
	bool operator >(const CScoredState &a1) const {
		return score > a1.score;
	}
	bool operator <=(const CScoredState &a1) const {
		return score <= a1.score;
	}
	bool operator >=(const CScoredState &a1) const {
		return score >= a1.score;
	}
};

class CScoredState_Compare {
public:
	int operator()(const CScoredState &o1, const CScoredState &o2) const {

		if (o1.score < o2.score)
			return -1;
		else if (o1.score > o2.score)
			return 1;
		else
			return 0;
	}
};



#endif /* TAGGER_STATE_H_ */
