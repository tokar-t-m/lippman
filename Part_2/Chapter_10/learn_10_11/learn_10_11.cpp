#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string>& svec);
bool isShorter(const std::string& s1, const std::string& s2);

int main(int argc, char *argv[]){
    std::vector<std::string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(svec);
    for(const auto& s: svec)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;
    stable_sort(svec.begin(), svec.end(), isShorter);
    for(const auto& s: svec)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;
    return 0;
}

void elimDups(std::vector<std::string>& svec){
    sort(svec.begin(), svec.end());
    auto end_unique = unique(svec.begin(), svec.end());
    svec.erase(end_unique, svec.end());

}

bool isShorter(const std::string& s1, const std::string& s2){
    return s1.size() < s2.size();
}