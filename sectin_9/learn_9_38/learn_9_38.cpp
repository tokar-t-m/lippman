#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> ivec;
    std::cout << "Size: " << ivec.size() << " Capacity: " << ivec.capacity() << std::endl;
    for(std::vector<int>::size_type ix = 0; ix < 100; ++ix){
	ivec.push_back(ix);
	std::cout << "Size: " << ivec.size() << " Capacity: " << ivec.capacity() << std::endl;
    }
    return 0;
}