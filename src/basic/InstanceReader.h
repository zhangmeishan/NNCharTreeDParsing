#ifndef _CONLL_READER_
#define _CONLL_READER_

#include "Reader.h"
#include "N3L.h"
#include "Utf.h"
#include <sstream>

using namespace std;
/*
 this class reads conll-format data (10 columns, no srl-info)
 */
class InstanceReader: public Reader {
public:
  InstanceReader() {
  }
  ~InstanceReader() {
  }

  Instance *getNext() {
    m_instance.clear();
    static string strLine;
    static vector<string> vecLine;
	vecLine.clear();
    while (1) {
      if (!my_getline(m_inf, strLine)) {
        break;
      }
      if (strLine.empty())
        break;
      vecLine.push_back(strLine);
    }

	static vector<string> charInfo;
	static int count, parent_id;
	count = 0;
    for (int i = 0; i < vecLine.size(); i++) {
      split_bychar(vecLine[i], charInfo, '\t');

	  m_instance.chars.push_back(charInfo[0]);

	  if (i == 0 || charInfo[2] == "b") {
		  m_instance.result.segmarks.push_back(true);
	  }
	  else{
		  m_instance.result.segmarks.push_back(false);
	  }

	  m_instance.result.postags.push_back(charInfo[1]);

	  m_instance.result.charheads.push_back(atoi(charInfo[3].c_str()));

	  m_instance.result.deplabels.push_back(charInfo[4]);

	  if (charInfo[5] == "out"){
		  m_instance.result.depmarks.push_back(true);	 
	  }
	  else{
		  m_instance.result.depmarks.push_back(false);
	  }

    }

	m_instance.result.chars = &m_instance.chars;

    return &m_instance;
  }
};

#endif

