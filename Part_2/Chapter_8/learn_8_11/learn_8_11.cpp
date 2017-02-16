#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <sstream>
using std::istringstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "PersonInfo.h"

int main(int argc, char *argv[]){
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin, line)){
	PersonInfo info;
	//istringstream record(line);
	record.str(line);
	record >> info.name;
	while(record >> word)
	    info.phones.push_back(word);
	people.push_back(info);
	record.clear();
    }
    for(auto p: people)
	cout << p.name << endl;
    return 0;
}