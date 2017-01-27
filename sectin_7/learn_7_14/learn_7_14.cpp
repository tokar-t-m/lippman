#include <iostream>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    Sales_data item;
    read(std::cin, item);
    print(std::cout, item) << std::endl;
    return 0;
}