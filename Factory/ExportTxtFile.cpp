/**
 * Project PatternDesign
 */


#include "ExportTxtFile.h"
#include <iostream>
/**
 * ExportTxtFile implementation
 */


/**
 * @param data
 * @return bool
 */
bool ExportTxtFile::exportData(string data) {
	std::cout << "正在导出数据 " << data << " 到csv文件！" << std::endl;
	return true;
}