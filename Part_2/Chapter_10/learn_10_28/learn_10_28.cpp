#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};
    std::vector<int> ivec1, ivec2; 
    std::list<int> ilst3;

    copy(ivec.cbegin(), ivec.cend(), inserter(ivec1, ivec1.begin()));
    for(const auto& i: ivec1)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;

    copy(ivec.cbegin(), ivec.cend(), back_inserter(ivec2));
    for(const auto& i: ivec2)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;

    copy(ivec.cbegin(), ivec.cend(), front_inserter(ilst3));
    for(const auto& i: ilst3)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;

    return 0;
}