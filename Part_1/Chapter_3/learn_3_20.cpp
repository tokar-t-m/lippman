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

    for(decltype(ivec.size()) index = 0; index < ivec.size() - 1; ++index)
	cout << ivec[index] + ivec[index + 1] << " ";
    cout << endl;

    for(decltype(ivec.size()) index = 0; index < ivec.size()/2; ++index)
	cout << ivec[index] + ivec[(ivec.size()-1) - index] << " ";
    cout << endl;

    return 0;
}