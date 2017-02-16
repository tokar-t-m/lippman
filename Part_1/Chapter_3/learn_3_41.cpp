#include <iostream>
#include <vector>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    int iarr1[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec1(begin(iarr1), end(iarr1));
    for(auto &i: ivec1)
	cout << i << " ";
    cout << endl;

    vector<int> ivec2 = {5, 4, 3, 2, 1, 0};
    const decltype(ivec2.size()) size_iarr2 = ivec2.size();
    int iarr2[size_iarr2];
    for(decltype(ivec2.size()) index = 0; index < size_iarr2; ++index)
	iarr2[index] = ivec2[index];
    for(auto &i : iarr2)
	cout << i << " ";
    cout << endl;

    return 0;
}