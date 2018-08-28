/**
 * Project PatternDesign
 */


#ifndef _FACTORY_H
#define _FACTORY_H
class Api;
class Factory {
public:
	static Api*createApi(int type);
};

#endif //_FACTORY_H