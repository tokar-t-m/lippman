#include <string>
#include <cctype>
#include "func.h"

using std::string;

bool is_upper(const string &str){
    for(const char &c: str)
	if(isupper(c))
	    return true;
    return false;
}

void to_lower(string &str){
    for(char &c: str)
	c = tolower(c);
}