#include <iostream>
#include <vector>
#include <string>
#include <map>

void addFamily(std::map<std::string, std::vector<std::string>>& family, const std::string& surname);
void addFamily(std::map<std::string, std::vector<std::string>>& family, const std::string& surname, const std::string& children);

int main(int argc, char *argv[]){
    std::map<std::string, std::vector<std::string>> family = {
    {"qwe", {"qwe", "qwe"}}
    };

    addFamily(family, "test");
    addFamily(family, "test", "children");
    addFamily(family, "test", "children");

    for(const auto& p: family){
	std::cout << p.first << " - " << std::flush;
	for(const auto& s: p.second)
	    std::cout << s << " " << std::flush;
	std::cout << std::endl;
    }

    return 0;
}


void addFamily(std::map<std::string, std::vector<std::string>>& family, const std::string& surname){
    family[surname];
}

void addFamily(std::map<std::string, std::vector<std::string>>& family, const std::string& surname, const std::string& children){
    family[surname].push_back(children);
}