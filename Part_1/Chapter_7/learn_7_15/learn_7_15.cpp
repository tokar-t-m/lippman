#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    Person item1;
    Person item2("name", "adress");
    Person item3(cin);

    print(cout, item1) << endl;
    print(cout, item2) << endl;
    print(cout, item3) << endl;

    return 0;
}