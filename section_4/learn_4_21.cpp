#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[]){
    vector<int> ivec;

    for(auto index = 0; index < 10; ++index)
	ivec.push_back(index);
    for(auto &i: ivec)
	cout << i << " ";
    cout << endl;

    for(auto &i: ivec)
	i = (i%2 != 0) ? i : i * 2;
    for(auto &i: ivec)
	cout << i << " ";
    cout << endl;

    return 0;
}