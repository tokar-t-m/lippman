#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> ivec1(10, 1), ivec2(10, 2);
    if(ivec1 == ivec2)
	std::cout << true << std::endl;
    return 0;
}