/**
 * Project PatternDesign
 */


#ifndef _EXPORTDB_H
#define _EXPORTDB_H

#include "ExportFileApi.h"

//std
#include <string>
using std::string;

class ExportDB: public ExportFileApi {
public: 
    
/**
 * @param data
 */
	bool exportData(string data);
};

#endif //_EXPORTDB_H