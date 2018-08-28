/**
 * Project PatternDesign
 */


#include "Factory.h"

/**
 * Factory implementation
 */

#include "ImplOne.h"
#include "ImplTwo.h"

Api* Factory::createApi(int type) {
	Api *pApi = nullptr;
	if (type == 1) {
		pApi = new ImplOne;
	} else if (type == 2) {
		pApi = new ImplTwo;
	}
	return pApi;
}