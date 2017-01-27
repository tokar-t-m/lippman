#include <iostream>
#include <iterator>
#include <cstddef>
#include <vector>

using std::begin;
using std::end;
using std::vector;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    constexpr size_t array_size = 10;
    int iarr[array_size] = {1};

    for(auto *pbeg = begin(iarr), *pend = end(iarr); pbeg != pend; ++pbeg)
	*pbeg = 0;

    for(auto &i : iarr)
	cout << i << " ";
    cout << endl;

    return 0;
}