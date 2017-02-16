#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]){
    const char* c{"qwe"};
    std::vector<std::string> vec(10, c);
    for(std::string& s: vec)
	std::cout << s << std::endl;
    return 0;
}