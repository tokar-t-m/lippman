#include <iostream>
#include <iterator>
#include <cstddef>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int *beg, const int *end){
    while(beg != end)
	cout << *beg++ << " ";
    cout << endl;
}

void print(const int *ia, const size_t size){
    for(size_t index = 0; index < size; ++index)
	cout << ia[index] << " ";
    cout << endl;
}

void print(const int *cp){
    if(cp)
	while(*cp)
	    cout << *cp++ << " ";
    cout << endl;
}

int main(int argc, char *argv[]){
    int j[2] = {0, 1};
    print(begin(j), end(j));
    print(j, end(j) - begin(j));
    return 0;
}