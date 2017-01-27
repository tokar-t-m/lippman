#include <iostream>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, std::string::size_type> str_size;

    std::string word;
    while(std::cin >> word)
	str_size[word];

    auto it_beg = str_size.begin();
    while(it_beg != str_size.end())
	it_beg->second = it_beg->first.size(), ++it_beg;

    for(const auto& p: str_size)
	std::cout << p.first << " : " << p.second << std::endl;

    return 0;
}