#include <iostream>
#include <string>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, size_t> word_count;
    std::string exclude{".,!?:"};
    std::string word;
    while(std::cin >> word){
	std::string::size_type pos = 0;
	while((pos = word.find_first_of(exclude, pos)) != std::string::npos){
	    word.erase(pos);
	    ++pos;
	}
	for(auto& c: word)
	    c = tolower(c);
	++word_count[word];
    }
    for(const auto& p: word_count)
	std::cout << p.first << " occurs " << p.second << (p.second > 1 ? " times" : " time") << std::endl;
    return 0;
}