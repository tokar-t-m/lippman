#include <iostream>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string>& word);

int main(int argc, char *argv[]){
    std::vector<std::string> svec;
    std::string word;
    while(std::cin >> word)
	svec.push_back(word);
    elimDups(svec);
    return 0;
}

void elimDups(std::vector<std::string>& words){
    sort(words.begin(), words.end());
    for(auto& s: words)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;

    auto end_unique = unique(words.begin(), words.end());
    for(auto& s: words)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;

    words.erase(end_unique, words.end());
    for(auto& s: words)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;
}