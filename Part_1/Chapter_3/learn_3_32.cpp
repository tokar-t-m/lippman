#include <iostream>
#include <vector>
#include <cstddef>

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    constexpr size_t array_size = 10;
    int iarr[array_size];
    for(size_t index = 0; index < array_size; ++index)
	iarr[index] = index;

    int ciarr[array_size];
    for(size_t index = 0; index < array_size; ++index)
	ciarr[index] = iarr[index];
	
    for(auto &i: ciarr)
	cout << i << " ";
    cout << endl;


    constexpr vector<int>::size_type ivec_size = 10;
    vector<int> ivec(ivec_size);
    for(vector<int>::size_type index = 0; index < ivec_size; ++index)
	ivec[index] = index;

    for(auto &i: ivec)
	cout << i << " ";
    cout << endl;

    return 0;
}