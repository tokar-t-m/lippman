#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    //indexs
    //Indexs
    string word1;
    unsigned ffCnt1 = 0, flCnt1 = 0, fiCnt1 = 0;
    while(cin >> word1){
	for(string::size_type index = 0; index < word1.size(); ++index)
	    if(tolower(word1[index]) == 'f'){
		if(tolower(word1[index + 1]) == 'f') ++ffCnt1;
		if(tolower(word1[index + 1]) == 'l') ++flCnt1;
		if(tolower(word1[index + 1]) == 'i') ++fiCnt1;
	    }
    }
    cout << "ffCnt: " << ffCnt1 << "\n"
	 << "flCnt: " << flCnt1 << "\n"
	 << "fiCnt: " << fiCnt1 << "\n" 
	 << endl;;
    */
    //Iterators
    string word2;
    unsigned ffCnt2 = 0, flCnt2 = 0, fiCnt2 = 0;
    while(cin >> word2){
	for(string::iterator it = word2.begin(); it != word2.end(); ++it)
	    if(tolower(*it) == 'f'){
		if(tolower(*(it + 1)) == 'f') ++ffCnt2;
		if(tolower(*(it + 1)) == 'l') ++flCnt2;
		if(tolower(*(it + 1)) == 'i') ++fiCnt2;
	    }
    }
    cout << "ffCnt2: " << ffCnt2 << "\n"
	 << "flCnt2: " << flCnt2 << "\n"
	 << "fiCnt2: " << fiCnt2 << "\n"
	 << endl;
    return 0;
}