/**
 * Project PatternDesign
 */


#ifndef _IMPLTWO_H
#define _IMPLTWO_H

#include "Api.h"

class ImplTwo: public Api {
public:
	// ͨ�� Api �̳�
	virtual void test(const string & msg) override;
};

#endif //_IMPLTWO_H