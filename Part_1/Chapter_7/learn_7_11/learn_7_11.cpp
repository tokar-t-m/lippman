#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    Sales_data item1;
    Sales_data item2("qwerty");
    Sales_data item3("qwerty", 2, 25.00);
    Sales_data item4(cin);
    return 0;
}