#include <iostream>
#include <string>

std::istream& read(std::istream &is){
    std::string text;
    while(is >> text)
	std::cout << text;
    is.clear();
    return is;
}

int main(int argc, char *argv[]){
    read(std::cin);
    return 0;
}