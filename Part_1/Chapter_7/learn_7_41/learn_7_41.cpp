#include <iostream>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    Sales_data item1("test", 0, 0);
    Sales_data item2;
    Sales_data item3("test");
    Sales_data item4(std::cin);
    return 0;
}