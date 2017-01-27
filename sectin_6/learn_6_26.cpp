#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    if(argv)
	while(*argv)
	    cout << *argv++ << endl;
    return 0;
}