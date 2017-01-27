#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::invalid_argument;

int main(int argc, char *argv[]){
    string rsp;
    do{
	double item1, item2;
	cout << "Enter two number: ", cin >> item1 >> item2;
	if(item2 == 0)
	    throw invalid_argument("Error two number - zero!");
	cout << item1 << " / " << item2 << " = " << item1 / item2;
	cout << "\nTry Again? Enter y or n: ", cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}