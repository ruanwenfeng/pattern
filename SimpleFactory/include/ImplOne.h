/**
 * Project PatternDesign
 */


#ifndef _IMPLONE_H
#define _IMPLONE_H

#include "Api.h"


class ImplOne: public Api {
public:
	// ͨ�� Api �̳�
	virtual void test(const string & msg) override;
};

#endif //_IMPLONE_H