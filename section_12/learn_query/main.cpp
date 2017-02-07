#include <iostream>
#include <fstream>
#include <string>
#include "Query.h"

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::cin;

void runQueries(ifstream &infile){
	TextQuery tq(infile);
	while(true){
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

int main(int argc, char *argv[]){
	ifstream infile("text.txt");
	if(infile.is_open())
		runQueries(infile), infile.close();
	else
		cout << "Error open file!" << endl;
	return 0;
}