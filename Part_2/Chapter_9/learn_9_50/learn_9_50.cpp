#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]){
    std::vector<std::string> str_to_num{"1","2","3"};
    int sum = 0;
    for(const auto& s: str_to_num)
	sum += std::stoi(s);
    std::cout << sum << std::endl;
    return 0;
}