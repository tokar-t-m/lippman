#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    string word;
    vector<string> text;
    vector<unsigned> wordCnt;
    unsigned cnt = 0;
    while(cin >> word)
	text.push_back(word);

    auto i = text.begin();
    auto j = text.begin() + 1;

    while(i != text.end()){
	while(j != text.end()){
	    if(*i == *j) ++cnt;
	}
	wordCnt.push_back(cnt);
	cnt = 0;
	++i, ++j;
    }











    return 0;
}