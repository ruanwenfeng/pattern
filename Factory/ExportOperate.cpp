/**
 * Project PatternDesign
 */


#include "ExportOperate.h"

/**
 * ExportOperate implementation
 */


/**
 * @param data
 * @return bool
 */
bool ExportOperate::exportData(string data) {
	ExportFileApi *pApi = factoryMethod();
    return pApi->exportData(data);
}

/**
 * @return ExportFileApi*
 */
ExportFileApi* ExportOperate::factoryMethod() {
    return nullptr;
}