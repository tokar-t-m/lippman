#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    std::string num{"1234567890"};
    std::string str{"ab2c3d7R4E6"};

    std::cout << "Number:" << std::endl;
    std::string::size_type pos = 0;
    while((pos = str.find_first_of(num, pos)) != std::string::npos){
	std::cout << "Found number at index: " << pos << " element is " << str[pos] << std::endl;
	++pos;
    }

    std::cout << "Character:" << std::endl;
    pos = 0;
    while((pos = str.find_first_not_of(num, pos)) != std::string::npos){
	std::cout << "Found character at index " << pos << " element is " << str[pos] << std::endl;
	++pos;
    }
    return 0;
}