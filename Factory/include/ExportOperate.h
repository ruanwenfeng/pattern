/**
 * Project PatternDesign
 */


#ifndef _EXPORTOPERATE_H
#define _EXPORTOPERATE_H
#include "ExportFileApi.h"
#include <iostream>
using std::string;
class ExportOperate {
public: 
    
/**
 * @param data
 */
bool exportData(string data);
protected: 
    
virtual ExportFileApi* factoryMethod() = 0;
};

#endif //_EXPORTOPERATE_H