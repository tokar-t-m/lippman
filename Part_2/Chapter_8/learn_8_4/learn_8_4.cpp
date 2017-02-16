#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool readLineFile(std::string& nameFile, std::vector<std::string>& textLine);

int main(int argc, char *argv[]){
    std::string nameFile("bookTrans");
    std::vector<std::string> textLine;
    if(readLineFile(nameFile, textLine)){
	for(auto& line : textLine)
	    std::cout << line << std::endl;
    }else{
	std::cerr << "Error open file!" << std::endl;
	return 1;
    }
    return 0;
}

bool readLineFile(std::string& nameFile, std::vector<std::string>& textLine){
    std::ifstream file(nameFile);
    if(file.is_open()){
	std::string buf;
	while(getline(file, buf))
	    textLine.push_back(buf);
	file.close();
	return true;
    }else{
	file.close();
	return false;
    }
}