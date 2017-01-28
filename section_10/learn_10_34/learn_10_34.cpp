#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};
    std::vector<int>::reverse_iterator rbeg = ivec.rbegin();
    while(rbeg != ivec.rend())
	std::cout << *rbeg++ << " " << std::flush;
    std::cout << std::endl;
    return 0;
}