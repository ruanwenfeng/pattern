/**
 * Project PatternDesign
 */


#include "ExportDBOperate.h"
#include "ExportDB.h"
/**
 * ExportDBOperate implementation
 */


/**
 * @return ExportFileApi*
 */
ExportFileApi* ExportDBOperate::factoryMethod() {
	return new ExportDB();
}