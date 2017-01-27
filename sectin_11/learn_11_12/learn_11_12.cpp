#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>

std::pair<std::string, size_t> read(std::ifstream& is);

int main(int argc, char *argv[]){
    std::ifstream file(argv[1]);
    std::vector<std::pair<std::string, size_t>> str_num;
    std::pair<std::string, size_t> s_n;
    while(!file.eof()){
	s_n = read(file);
	str_num.push_back(s_n);
    }

    for(const auto& p: str_num)
	std::cout << p.first << " " << p.second << std::endl;

    return 0;
}

std::pair<std::string, size_t> read(std::ifstream& is){
    std::string first, second;
    is >> first >> second;
    return {first, stoi(second)};
}