#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print_vec(vector<int>::iterator beg, vector<int>::iterator end){
    if(beg != end){
	cout << *beg << " ";
	print_vec(beg + 1, end);
    }
}

int main(int argc, char *argv[]){
    vector<int> ivec = {1, 2, 3, 4, 5};
    print_vec(ivec.begin(), ivec.end());
    cout << endl;
    return 0;
}