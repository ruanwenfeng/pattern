/**
 * Project PatternDesign
 */


#ifndef _API_H
#define _API_H
#include <string>
using std::string;
class Api {
public: 
    
/**
 * @param msg
 */
virtual void test(const string & msg) = 0;
virtual ~Api();
};

#endif //_API_H