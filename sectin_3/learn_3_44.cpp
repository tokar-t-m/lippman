#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using int_array = int[4];

int main(int argc, char *argv[]){
    int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11},
    };

    for(int_array &row: ia){
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

    for(int_array *p = ia; p != ia + 3; ++p){
	for(int *q = *p; q != *p + 4; ++q)
	    cout << *q << " ";
	cout << endl;
    }

    return 0;
}