/**
 * Project PatternDesign
 */


#include "ExportTxtFileOperate.h"
#include "ExportTxtFile.h"
/**
 * ExportTxtFileOperate implementation
 */


/**
 * @return ExportFileApi*
 */
ExportFileApi* ExportTxtFileOperate::factoryMethod() {

    return new ExportTxtFile();
}