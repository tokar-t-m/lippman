#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};
    fill_n(ivec.begin(), ivec.size(), 0);
    for(auto& i: ivec)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    return 0;
}