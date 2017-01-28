#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    string rsp;
    do{
	string str1, str2;
	cout << "Enter two string: ", cin >> str1 >> str2;
	if(str1.size() > str2.size())
	    cout << "str1 > str2" << endl;
	else
	    cout << "str2 > str1" << endl;
	cout << "Enter yes or no: ", cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}