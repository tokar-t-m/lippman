#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    vector<string> svec;
    string word;
    while(cin >> word){
	svec.push_back(word);
    }

    for(auto &word: svec)
	for(auto &c: word)
	    if(isalpha(c))
		c = toupper(c);
    int index = 0;
    for(auto &word: svec){
	++index;
	cout << word << " ";
	if(index % 3 == 0)
	    cout << "\n";
    }
    cout << endl;

    return 0;
}