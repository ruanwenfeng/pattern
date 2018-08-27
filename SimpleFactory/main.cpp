#include <cstdlib>
#include <string>
#include <iostream>


class Api {

public:
	virtual void test(std::string) = 0;

};

class Impl :public Api {

public:
	void test(std::string msg) {
		std::cout << "��Impl�е���test: " << msg << std::endl;
		return;
	}
};

int main() {
	Api *pApi = new Impl;
	pApi->test("main.cpp");
	system("pause");
	return 0;
}