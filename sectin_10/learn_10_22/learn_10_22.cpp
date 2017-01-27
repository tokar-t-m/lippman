#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

bool check_size(const std::string& s, std::string::size_type sz);

int main(int argc, char *argv[]){
    std::vector<std::string> svec{"qwe", "qwer", "asdfgh"};
    std::string::size_type sz = 6;
    auto wc = count_if(svec.begin(), svec.end(), bind(check_size, std::placeholders::_1, sz));
    std::cout << wc << std::endl;
    return 0;
}

bool check_size(const std::string& s, std::string::size_type sz){
    return s.size() >= sz;
}