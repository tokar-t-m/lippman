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
    std::cout << "Sorted: " << std::endl;
    sort(sdvec.begin(), sdvec.end(), [](const Sales_data& sd1, const Sales_data& sd2){return sd1.isbn().size() < sd2.isbn().size();});
    for(const auto& sd: sdvec)
	print(std::cout, sd) << std::endl;
    return 0;
}