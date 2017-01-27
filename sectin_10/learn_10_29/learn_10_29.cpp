#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>

int main(int argc, char *argv[]){
    std::ifstream in(argv[1]);
    std::istream_iterator<std::string> str_it(in), str_eof;
    std::vector<std::string> words;
    while(str_it != str_eof)
	words.push_back(*str_it++);
    for(const auto& s: words)
	std::cout << s << " " << std::flush;
    std::cout << std::endl;
    return 0;
}