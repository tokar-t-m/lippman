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
	try{
	    double item1, item2;
	    cout << "Enter two number: ", cin >> item1 >> item2;
	    if(item2 == 0)
		throw invalid_argument("Error two number - zero!\n");
	    cout << item1 << " / " << item2 << " = " << item1 / item2 << endl;
	    cout << "Try Again? Enter y or n: ", cin >> rsp;
	}catch(invalid_argument err_zero){
	    cout << err_zero.what() << "Try Again? Enter y or n: ", cin >> rsp;
	}
    }while(!rsp.empty() && rsp[0] != 'n');












    return 0;
}