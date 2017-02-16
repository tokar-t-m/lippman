#include <iostream>
#include <cstddef>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(int argc, char *argv[]){
    int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };

    for(auto &row: ia){
	for(auto &num: row)
	    cout << num << " ";
	cout << endl;
    }

    cout << endl;

    for(auto i = 0; i < 3; ++i){
	for(auto j = 0; j < 4; ++j)
	    cout << ia[i][j] << " ";
	cout << endl;
    }

    cout << endl;

    for(auto p = begin(ia); p != end(ia); ++p){
	for(auto q = begin(*p); q != end(*p); ++q)
	    cout << *q << " ";
	cout << endl;
    }

    return 0;
}