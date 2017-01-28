#include <iostream>
#include <cstring>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, entCnt = 0;
    string text;
    while(getline(cin, text)){
	++entCnt;
	for(auto &c: text)
	    if(auto ch = tolower(c)){
		if(ch == 'a')
		    ++aCnt;
		else if(ch == 'e')
		    ++eCnt;
		else if(ch == 'i')
		    ++iCnt;
		else if(ch == 'o')
		    ++oCnt;
		else if(ch == 'u')
		    ++uCnt;
		else if(ch == ' ')
		    ++spaceCnt;
		else if(ch == '\t')
		    ++tabCnt;
	    }
    }
    cout << endl;
    cout << "aCnt: " << aCnt << "\n"
	 << "eCnt: " << eCnt << "\n"
	 << "iCnt: " << iCnt << "\n"
	 << "oCnt: " << oCnt << "\n"
	 << "uCnt: " << uCnt << "\n"
	 << "spaceCnt: " << spaceCnt << "\n"
	 << "tabCnt: " << tabCnt << "\n"
	 << "entCnt: " << entCnt << endl;
    return 0;
}