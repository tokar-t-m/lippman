#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include "Sales_data.h"

int main(int argc, char *argv[]){
    std::vector<Sales_data> sdvec;
    Sales_data total;
    if(read(std::cin, total)){
	Sales_data trans;
	while(read(std::cin, trans)){
	    if(total.isbn() == trans.isbn())
		total.combine(trans);
	    else{
		sdvec.push_back(trans);
		trans = total;
	    }
	}
	sdvec.push_back(total);
    }else{
	std::cerr << "No data!?" << std::endl;
	return -1;
    }
    sort(sdvec.begin(), sdvec.end(), compareIsbn);
    for(const auto& sd: sdvec)
	print(std::cout, sd) << std::endl;

    /*
    std::vector<Sales_data> sdUniq;
    unique_copy(sdvec.begin(), sdvec.end(), back_inserter(sdUniq), [](const Sales_data& sd1, const Sales_data& sd2){return sd1.isbn() == sd2.isbn();});
    auto it = sdUniq.begin();
    while(it != sdUniq.end()){
    */



    return 0;
}