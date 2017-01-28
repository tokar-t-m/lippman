#include <iostream>
#include <string>

std::string& restr(std::string& s, const std::string& oldVal, const std::string& newVal);

int main(int argc, char *argv[]){
    std::string s{"tho qweqwrsdasdf tho tho dsfdgdg tho"};
    std::cout << restr(s, "tho", "aaa") << std::endl;
    return 0;
}

std::string& restr(std::string& s, const std::string& oldVal, const std::string& newVal){
    std::string::size_type pos = 0;
    while((pos = s.find(oldVal, pos)) != std::string::npos)
	s.replace(pos, oldVal.size(), newVal);
    ++pos;
    return s;
}