#include <iostream>
#include <deque>

int main(int argc, char *argv[]){
    std::deque<std::string> text;
    std::string word;

    std::deque<std::string>::iterator iter = text.begin();
    while(std::cin >> word)
	iter = text.insert(iter, word);
    std::cout << std::endl;
    for(std::string& s: text)
	std::cout << s << std::endl;
    return 0;
}