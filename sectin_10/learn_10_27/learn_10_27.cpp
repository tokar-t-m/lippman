#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<int> ivec1{1,1,2,3,4,4,5,6,7,8,9};
    std::vector<int> ivec2;
    unique_copy(ivec1.begin(), ivec1.end(), back_inserter(ivec2));
    for(const auto& i: ivec1)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    for(const auto& i: ivec2)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    return 0;
}