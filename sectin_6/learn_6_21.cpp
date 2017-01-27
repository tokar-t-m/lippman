#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int func(const int &item, const int *pointer){
    if(item > *pointer)
	return item;
    else
	return *pointer;
}

int main(int argc, char *argv[]){
    int item = 20, pointer = 10;
    cout << func(item, &pointer) << endl;
    return 0;
}