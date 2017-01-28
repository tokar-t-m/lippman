#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    std::ifstream file(argv[1]);
    std::vector<Sales_data> sdvec;
    if(file.is_open()){
	Sales_data item;
	while(read(file, item))
	    sdvec.push_back(item);
    }else{
	std::cerr << "Error open file!" << std::endl;
    }

    for(const Sales_data& sd: sdvec)
	print(std::cout, sd) << std::endl;

    stable_sort(sdvec.begin(), sdvec.end(), compareIsbn);

    std::cout << "Sorted: " << std::endl;
    for(const auto& sd: sdvec)
	print(std::cout, sd) << std::endl;



    return 0;
}