#include <iostream>
#include <list>
#include <string>

void elimDups(std::list<std::string> &words);

int main(int argc, char *argv[]){
    std::list<std::string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(words);
    for(const auto& w: words)
	std::cout << w << " " << std::flush;
    std::cout << std::endl;
    return 0;
}

void elimDups(std::list<std::string>& words){
    words.sort();
    words.unique();
}