/**
 * Project PatternDesign
 */


#ifndef _EXPORTFILEAPI_H
#define _EXPORTFILEAPI_H

 //std
#include <string>
using std::string;
class ExportFileApi {
public: 
    
/**
 * @param data
 */
virtual bool exportData(string data) = 0;
};

#endif //_EXPORTFILEAPI_H