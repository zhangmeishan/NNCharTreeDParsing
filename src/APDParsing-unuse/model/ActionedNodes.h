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
#include "CombinedFeatures.h"

struct ActionedNodes {
	APCNode  SHIs;
	APCNode  PWs;
	APCNode  SYNs1, SYNs2;
	APCNode  SYNChars;
	APCNode  SHOs, SHOAcs;
	APCNode  ARCIns;

	vector<SPAddNode> outputs;

public:
	inline void initial(ModelParams& params, HyperParams& hyparams){
		SHIs.setParam(&params.SHIs);
		PWs.setParam(&params.PWs);
		SYNs1.setParam(&params.SYNs1);
		SYNs2.setParam(&params.SYNs2);
		SYNChars.setParam(&params.SYNChars);
		SHOs.setParam(&params.SHOs);
		SHOAcs.setParam(&params.SHOAcs);
		ARCIns.setParam(&params.ARCIns);


		outputs.resize(hyparams.action_num);
	}


public:
	inline void forward(Graph* cg, const vector<CAction>& actions, const CombinedFeatures& combFeat, PNode prevStateNode){

		if (combFeat.haveSHIs())SHIs.forward(cg, combFeat.SHIs);
		if (combFeat.havePWs())PWs.forward(cg, combFeat.PWs);
		if (combFeat.haveSYNs())SYNs1.forward(cg, combFeat.SYNs1);
		if (combFeat.haveSYNs())SYNs2.forward(cg, combFeat.SYNs2);
		if (combFeat.haveSYNs())SYNChars.forward(cg, combFeat.SYNChars);
		if (combFeat.haveSHOs())SHOs.forward(cg, combFeat.SHOs);
		if (combFeat.haveSHOs())SHOAcs.forward(cg, combFeat.SHOAcs);
		if (combFeat.haveARCIns())ARCIns.forward(cg, combFeat.ARCIns);


		static vector<PNode> sumNodes;
		static CAction ac;
		static int ac_num;
		ac_num = actions.size();
		
		for (int idx = 0; idx < ac_num; idx++){
			ac.set(actions[idx]._code);
			sumNodes.clear();
			if (combFeat.haveSHIs())sumNodes.push_back(&SHIs);
			if (combFeat.havePWs())sumNodes.push_back(&PWs);
			if (combFeat.haveSYNs())sumNodes.push_back(&SYNs1);
			if (combFeat.haveSYNs())sumNodes.push_back(&SYNs2);
			if (combFeat.haveSYNs())sumNodes.push_back(&SYNChars);
			if (combFeat.haveSHOs())sumNodes.push_back(&SHOs);
			if (combFeat.haveSHOs())sumNodes.push_back(&SHOAcs);
			if (combFeat.haveARCIns())sumNodes.push_back(&ARCIns);
			
			if (prevStateNode != NULL){
				sumNodes.push_back(prevStateNode);
			}

			outputs[ac._code].forward(cg, sumNodes, ac._code);
		}
	}

};

#endif /* SRC_ActionedNodes_H_ */
