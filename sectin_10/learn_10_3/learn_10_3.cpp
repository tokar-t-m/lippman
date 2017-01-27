#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};
    auto result = accumulate(ivec.begin(), ivec.end(), 0);
    std::cout << result << std::endl;
    return 0;
}