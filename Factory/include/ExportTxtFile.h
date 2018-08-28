/**
 * Project PatternDesign
 */


#ifndef _EXPORTTXTFILE_H
#define _EXPORTTXTFILE_H

#include "ExportFileApi.h"
 //std
#include <string>
using std::string;

class ExportTxtFile: public ExportFileApi {
public: 
    
/**
 * @param data
 */
	bool exportData(string data);
};

#endif //_EXPORTTXTFILE_H