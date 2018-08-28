#ifndef _DYNOBJ_H
#define _DYNOBJ_H
#include <iostream>
#include <string>
#include <map>

typedef void* (*Constructor)();

class DynOBJ {
public:
	static void registerClass(std::string className, Constructor constructor) {
		constructors()[className] = constructor;
	}

	static void * createObject(std::string className) {
		Constructor constructor = nullptr;
		if (constructors().end() != constructors().find(className)) {
			constructor = constructors().find(className)->second;
			return constructor();
		}
		return nullptr;
	}
private:
	static std::map<std::string, Constructor>& constructors() {
		static std::map<std::string, Constructor> instance;
		return instance;
	}

};


#define REG_CLASS(class_name)\
class class_name##Helper {\
public:\
	class_name##Helper() {\
		DynOBJ::registerClass(#class_name, class_name##Helper::createObjFunc);\
	}\
	static void*createObjFunc() {\
		return new class_name;\
	}\
};\
class_name##Helper class_name##helper;
#endif // !_DYNOBJ_H
