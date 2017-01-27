#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char *argv[]){
    std:: ifstream file(argv[1]);
    std::vector<std::string> text;
    if(file.is_open()){
	std::string no_characters{"dfpq"};
	std::string word;
	while(file >> word){
	    if(word.find_first_of(no_characters) == std::string::npos)
		text.push_back(word);
	}
    }else{
	std::cerr << "Error open file!" << std::endl;
	return 0;
    }
    std::string::size_type max_size = 0;
    for(const auto& s: text){
	if(max_size < s.size())
	    max_size = s.size();
    }
    for(const auto& s: text)
	if(s.size() == max_size){
	    std::cout << s << std::endl;
	    break;
	}
    return 0;
}