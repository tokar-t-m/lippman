#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<std::string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    std::string::size_type sz = 5;
    auto count = count_if(svec.begin(), svec.end(), [sz](const std::string& s){return s.size() >= sz;});
    std::cout << count << std::endl;
    return 0;
}