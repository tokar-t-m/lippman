#include <iostream>
using std::cout; using std::endl;
#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#include <string>
using std::string;

int main(int argc, char *argv[]){
    ifstream input(argv[1]);
    vector<string> text;

    if(input.is_open()){
	string line;
	while(getline(input, line))
	    text.push_back(line);
	}

	for(string& s: text){
	    istringstream mem(s);
	    string word;
	    while(mem >> word)
		cout << word << endl;
	}

    return 0;
}