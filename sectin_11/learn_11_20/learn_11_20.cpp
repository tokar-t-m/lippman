#include <iostream>
#include <string>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, size_t> word_count;
    std::string word;
    while(std::cin >> word){
	auto ret = word_count.insert({word, 1});
	if(!ret.second)
	    ++ret.first->second;
    }
    auto map_it = word_count.cbegin();
    while(map_it != word_count.cend()){
	std::cout << map_it->first << " : " << map_it->second << std::endl;
	++map_it;
    }
    return 0;
}