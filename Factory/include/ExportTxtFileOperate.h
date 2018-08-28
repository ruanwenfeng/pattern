/**
 * Project PatternDesign
 */


#ifndef _EXPORTTXTFILEOPERATE_H
#define _EXPORTTXTFILEOPERATE_H

#include "ExportOperate.h"
#include "ExportFileApi.h"

class ExportTxtFileOperate: public ExportOperate {
protected: 
    
	ExportFileApi* factoryMethod();
};

#endif //_EXPORTTXTFILEOPERATE_H