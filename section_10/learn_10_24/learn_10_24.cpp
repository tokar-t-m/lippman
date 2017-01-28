#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

bool check_size(const std::string& s, std::string::size_type sz);

int main(int argc, char *argv[]){
    std::vector<int> ivec{10,2,3,4,1,5,6,7,8,9};
    std::string str{"qwerty"};
    auto wc = find_if(ivec.begin(), ivec.end(), bind(check_size, str, std::placeholders::_1));
    std::cout << *wc << std::endl;

    return 0;
}

bool check_size(const std::string& s, std::string::size_type sz){
    return s.size() >= sz;
}