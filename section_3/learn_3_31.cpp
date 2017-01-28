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

    for(size_t index = 0; index < array_size; ++index)
	cout << iarr[index] << " ";
    cout << endl;

    return 0;
}