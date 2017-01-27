#include <iostream>
#include <vector>
#include <list>

int main(int argc, char *argv[]){
    std::vector<int> ivec(10, 1);
    std::list<int> ilst(10, 1);
    std::vector<int> ivec2(ilst.begin(), ilst.end());
    if(ivec == ivec2)
	std::cout << true << std::endl;
    return 0;
}