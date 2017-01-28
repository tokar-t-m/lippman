#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };

    for(int (&row)[4] : ia){
	for(int &num: row)
	    cout << num << " ";
	cout << endl;
    }

    cout << endl;

    for(size_t i = 0; i < 3; ++i){
	for(size_t j = 0; j < 4; ++j)
	    cout << ia[i][j] << " ";
	cout << endl;
    }

    cout << endl;

    for(int (*p)[4] = ia; p != ia + 3; ++p){
	for(int *q = *p; q != *p + 4; ++q)
	    cout << *q << " ";
	cout << endl;
    }

    cout << endl;

    for(auto p = ia; p != ia + 3; ++p){
	for(auto q = *p; q != *p + 4; ++q)
	    cout << *q << " ";
	cout << endl;
    }

    return 0;
}