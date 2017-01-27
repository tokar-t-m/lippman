#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, size_t> word_count;
    std::vector<std::string> exclude{"qwe", "QWE"};
    std::string word;
    while(std::cin >> word)
	if(find(exclude.begin(), exclude.end(), word) == exclude.end())
	    ++word_count[word];
    for(const auto& w: word_count)
	std::cout << w.first << " occurs " << w.second << (w.second > 1 ? " times" : " time") << std::endl;
    return 0;
}