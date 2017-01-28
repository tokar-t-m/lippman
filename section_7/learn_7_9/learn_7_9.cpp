#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    Person item;
    cout << "Enter name and adress: ", read(cin, item);
    cout << "Output: ", print(cout, item) << endl;
    return 0;
}