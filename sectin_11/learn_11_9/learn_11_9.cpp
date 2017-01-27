#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <set>

int main(int argc, char *argv[]){
    std::ifstream file(argv[1]);
    std::map<std::string, std::list<size_t>> num_word;
    std::set<std::string> uniqWord;
    std::string word;
    while(file >> word)
	uniqWord.insert(word);

    std::string search{"asd"};

    for(const auto& word: uniqWord){
	std::cout << search << std::endl;
	search = word;
	std::string line;
	size_t num = 1;
	while(getline(file, line)){
	    std::cout << search << std::endl;
	    if(line.find(search) != std::string::npos)
		num_word[search].push_back(num);
	    ++num;
	}
	num = 1;
    }

    for(const auto& nw: num_word){
	std::cout << nw.first << " - " << std::flush;
	for(const auto& n: nw.second)
	    std::cout << n << " " << std::flush;
	std::cout << "line" << std::endl;
    }
    return 0;
}