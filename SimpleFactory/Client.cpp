/**
 * Project PatternDesign
 */

#include "Api.h"
#include "ImplOne.h"
#include "ImplTwo.h"
#include "Client.h"
#include "Factory.h"
#include "DynOBJ.h"
/**
 * Client implementation
 */
REG_CLASS(ImplOne)
REG_CLASS(ImplTwo)

class ApiFactory {
public:
	static Api*createApi() {
		Api*pApi = nullptr;
		pApi = static_cast<Api*>(DynOBJ::createObject("ImplTwo"));
		return pApi;
	}
};

int main() {
	Api*pApi = ApiFactory::createApi();
	if (pApi)
		pApi->test("main.cpp");
	else
		std::cout << "api ´´½¨Ê§°Ü£¡" << std::endl;
	return 0;
}