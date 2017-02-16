#include <iostream>
#include <string>
#include "func.h"

/*
    func is:
	bool is_upper(const string &str);
	void to_lower(string &str);
*/

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(int argc, char *argv[]){
    string str = {"Hello World!!!"};
    cout << str << endl;
    cout << "is_upper: " << is_upper(str) << endl;
    to_lower(str);
    cout << "to_lower: " << str << endl;
    cout << "is_upper: " << is_upper(str) << endl;
    return 0;
}