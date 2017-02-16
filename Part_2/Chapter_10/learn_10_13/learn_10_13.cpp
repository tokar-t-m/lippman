#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool strSize(const std::string& s);

int main(int argc, char *argv[]){
    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto it_end = partition(words.begin(), words.end(), strSize);
    for(auto it = words.begin(); it != it_end; ++it)
	std::cout << *it << " " << std::flush;
    std::cout << std::endl;
    return 0;
}

bool strSize(const std::string& s){
    return (s.size() >= 5) ? true : false;
}