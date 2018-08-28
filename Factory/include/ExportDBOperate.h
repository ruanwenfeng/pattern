/**
 * Project PatternDesign
 */


#ifndef _EXPORTDBOPERATE_H
#define _EXPORTDBOPERATE_H

#include "ExportOperate.h"
#include "ExportFileApi.h"

class ExportDBOperate: public ExportOperate {
protected: 
    
	ExportFileApi* factoryMethod();
};

#endif //_EXPORTDBOPERATE_H