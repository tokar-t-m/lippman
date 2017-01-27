#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
    auto it = find(ivec.crbegin(), ivec.crend(), 0);
    std::cout << *it << std::endl;
    return 0;
}