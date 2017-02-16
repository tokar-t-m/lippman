#include <iostream>
#include <string>
#include "../Sales_data.h"

int main(int argc, char *argv[]){
    Sales_data data1, data2;
    double price;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    while(std::cin >> data2.bookNo >> data2.units_sold >> price){
	data2.revenue = data2.units_sold * price;
	if(data1.bookNo == data2.bookNo){
	    data1.units_sold += data2.units_sold;
	    data1.revenue += data2.revenue;
	}
    }
    std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << " ";
    if(data1.units_sold != 0){
	std::cout << data1.revenue / data1.units_sold << std::endl;
	return 0;
    }else{
	std::cerr << "(no sales)" << std::endl;
	return -1;
    }
}