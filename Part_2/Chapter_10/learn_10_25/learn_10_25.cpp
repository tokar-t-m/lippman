#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

void elimDups(std::vector<std::string>& words);
std::string make_plural(size_t ctr, const std::string& word, const std::string& ending);
void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz);
bool check_size(const std::string& s, std::string::size_type sz);

int main(int argc, char *argv[]){
    std::vector<std::string> svec{"fox", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(svec, 5);
    return 0;
}

void elimDups(std::vector<std::string>& words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

std::string make_plural(size_t ctr, const std::string& word, const std::string& ending){
    return ctr > 1 ? word + ending : word;
}

/*
void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const std::string& a, const std::string& b){return a.size() < b.size();});
    auto wc = find_if(words.begin(), words.end(), [sz](const std::string& a){return a.size() >= sz;});
    auto count = words.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer " << std::endl;
    for_each(wc, words.end(), [](const std::string& s){std::cout << s << " " << std::flush;});
    std::cout << std::endl;
}
*/


void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const std::string& a, const std::string& b){return a.size() < b.size();});
    auto wc = partition(words.begin(), words.end(), bind(check_size, std::placeholders::_1, sz));
    auto count = wc - words.begin();
    std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << std::endl;
    for_each(words.begin(), wc, [](const std::string& s){std::cout << s << " " << std::flush;});
    std::cout << std::endl;
}

bool check_size(const std::string& s, std::string::size_type sz){
    return s.size() >= sz;
}