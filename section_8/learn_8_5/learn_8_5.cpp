#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool readWordFile(std::string& nameFile, std::vector<std::string>& textLine);

int main(int argc, char *argv[]){
    std::string nameFile("bookTrans");
    std::vector<std::string> textWord;
    if(readWordFile(nameFile, textWord)){
	for(auto& word : textWord)
	    std::cout << word << std::endl;
    }else{
	std::cerr << "Error open file!" << std::endl;
	return 1;
    }
    return 0;
}

bool readWordFile(std::string& nameFile, std::vector<std::string>& textWord){
    std::ifstream file(nameFile);
    if(file.is_open()){
	std::string buf;
	while(file >> buf)
	    textWord.push_back(buf);
	file.close();
	return true;
    }else{
	file.close();
	return false;
    }
}