#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(int argc, char *argv[]){
    constexpr int array_size = 10;
    int iarr1[array_size] = {1}; 
    int iarr2[array_size] = {2};
    ptrdiff_t array_size_1 = end(iarr1) - begin(iarr1);
    ptrdiff_t array_size_2 = end(iarr2) - begin(iarr2);
    if(array_size_1 == array_size_2)
	for(auto pbeg1 = begin(iarr1), pbeg2 = begin(iarr2), pend1 = end(iarr1), pend2 = end(iarr2); pbeg1 != pend1 && pbeg2 != pend2; ++pbeg1, ++pbeg2)
	    if(*pbeg1 != *pbeg2){
		cout << "No!" << endl;
		break;
	    }

    constexpr vector<int>::size_type ivec_size = 10;
    vector<int> ivec1(ivec_size, 1);
    vector<int> ivec2(ivec_size, 2);
    if(ivec1 != ivec2)
	cout << "No!" << endl;

    return 0;
}