#include <iostream>
#include "../Sales_data.h"

int main(int argc, char *argv[]){
    Sales_data data1;
    std::cin >> data1.bookNo >> data1.units_sold >> data1.revenue;
    std::cout << data1.bookNo << " "
	      << data1.units_sold << " "
	      << data1.revenue << std::endl;
    return 0;
}