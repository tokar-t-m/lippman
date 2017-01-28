#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    string str1 = {"Hello"};
    string str2 = {"Hello"};
    if(str1 == str2)
	cout << "Yes!" << endl;
    else
	cout << "No!" << endl;

    char carr1[] = "Hello";
    char carr2[] = "Hello";
    if(strcmp(carr1, carr2) == 0)
	cout << "Yes!" << endl;
    else
	cout << "No!" << endl;

    return 0;
}