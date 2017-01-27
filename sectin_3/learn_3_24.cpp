#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    vector<int> ivec;
    int num;
    while(cin >> num){
	ivec.push_back(num);
    }

    for(auto beg = ivec.begin(), end = ivec.end(); beg != end - 1; ++beg)
	cout << *beg + *(beg + 1) << " ";
    cout << endl;

    for(auto beg = ivec.begin(), end = ivec.end(), mid = ivec.begin() + (ivec.end() - ivec.begin())/2; beg != mid && end != mid; ++beg, --end){
	cout << *beg + *(end - 1)  << " ";
    }
    cout << endl;

    return 0;
}
