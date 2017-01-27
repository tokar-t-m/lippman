#include <iostream>
#include <sstream>
#include <string>

std::istream& read(std::istream& is);

int main(int argc, char *argv[]){
    std::istringstream record("test test");
    read(record);
    return 0;
}

std::istream& read(std::istream& is){
    std::string text;
    while(is >> text)
	std::cout << text << std::endl;
    is.clear();
    return is;
}