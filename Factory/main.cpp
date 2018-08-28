#include "ExportDBOperate.h"

#include <functional>
#include <iostream>
#include <string>
using namespace std;
class Car {

public:
	virtual void test(string msg) = 0;
};

class Bus :public Car {
public:
	void test(string msg) {
		cout << "bus " << msg << endl;
	}
};
Bus * fun() {
	return new Bus;
}
int main(int argc, char *argv[]) {
	//function<Car*()> p = fun;//[] {return new Bus; };
	//Car * car = p();
	//car->test("main.cpp");
	ExportOperate *op = new ExportDBOperate();
	op->exportData("main.cpp");
	return 0;
}