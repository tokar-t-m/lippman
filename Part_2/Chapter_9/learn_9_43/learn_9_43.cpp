#include <iostream>
#include <string>

std::string& restr(std::string& s, const std::string& oldVal, const std::string& newVal);

int main(int argc, char *argv[]){
    std::string s{"tho dsfdsf tho tho sdfdsfdsf tho"};
    std::cout << restr(s, "tho", "though") << std::endl;
    return 0;
}

std::string& restr(std::string& s, const std::string& oldVal, const std::string& newVal){
    std::string::size_type pos = 0;
    while((pos = s.find(oldVal, pos)) != std::string::npos){
	s.erase(pos, oldVal.size());
	s.insert(pos, newVal);
	++pos;
    }
    return s;
}