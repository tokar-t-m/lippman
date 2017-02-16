#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]){
    std::vector<char> chvec{'H', 'W'};
    std::string str;
    for(auto& c: chvec)
	str.push_back(c);
    std::cout << str << std::endl;
    return 0;
}