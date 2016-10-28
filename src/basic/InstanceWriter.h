#ifndef _CONLL_WRITER_
#define _CONLL_WRITER_

#include "Writer.h"
#include "MyLib.h"
#include <sstream>

using namespace std;

class InstanceWriter : public Writer
{
public:
	InstanceWriter(){}
	~InstanceWriter(){}
	int write(const Instance *pInstance)
	{
	  if (!m_outf.is_open()) return -1;

	  for (int i = 0; i < pInstance->charsize(); ++i) {
		  m_outf << pInstance->chars[i] << " " << pInstance->result.postags[i] << " " << (pInstance->result.segmarks[i] ? "b" : "i") << " " << pInstance->result.charheads[i]
		         << " " << pInstance->result.deplabels[i] << " " << (pInstance->result.segmarks[i] ? "out" : "in") << std::endl;
	  }
	  m_outf << endl;
	  return 0;
	}

  int write(const CResult& result)
  {
    if (!m_outf.is_open())
      return -1;
	for (int i = 0; i < result.charsize(); ++i) {
		m_outf << (*result.chars)[i] << " " << result.postags[i] << " " << (result.segmarks[i] ? "b" : "i") << " " << result.charheads[i]
			<< " " << result.deplabels[i] << " " << (result.segmarks[i] ? "out" : "in") << std::endl;
	}
    m_outf << endl;
    return 0;
  }
};

#endif

