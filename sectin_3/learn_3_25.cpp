#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    vector<unsigned> scores(11, 0);
    auto it = scores.begin();
    unsigned grade;
    while(cin >> grade){
	if(grade <= 100){
	    ++(*(it + (grade/10)));
	    it = scores.begin();
	}
    }

    for(auto &u: scores)
	cout << u << " ";
    cout << endl;

    return 0;
}