/**
 * Project PatternDesign
 */


#ifndef _IMPLONE_H
#define _IMPLONE_H

#include "Api.h"


class ImplOne: public Api {
public:
	// Í¨¹ý Api ¼Ì³Ð
	virtual void test(const string & msg) override;
};

#endif //_IMPLONE_H