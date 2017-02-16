#include <iostream>
#include <list>

int main(int argc, char *argv[]){
    std::list<std::string> text;
    std::string word;
    std::list<std::string>::iterator iter = text.begin();
    while(std::cin >> word)
	iter = text.insert(iter, word);
    std::cout << std::endl;
    for(std::string& s: text)
	std::cout << s << std::endl;
    return 0;
}