#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<int> ivec;
    int i;
    while(std::cin >> i)
	ivec.push_back(i);
    std::cout << count(ivec.cbegin(), ivec.cend(), 3) << std::endl;
    return 0;
}