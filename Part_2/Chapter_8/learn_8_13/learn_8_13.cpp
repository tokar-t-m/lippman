#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "PersonInfo.h"

int main(int argc, char *argv[]){
    ifstream file(argv[1]);
    if(file.is_open()){
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while(getline(file, line)){
	    PersonInfo info;
	    //istringstream record(line);
	    record.str(line);
	    record >> info.name;
	    while(record >> word)
		info.phones.push_back(word);
	    people.push_back(info);
	    record.clear();
	}
	file.close();
	for(auto& p: people)
	    cout << p.name << endl;
	return 0;
    }else{
	cerr << "Eror open file!" << endl;
	return 1;
    }
}