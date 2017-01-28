#include <iostream>
using std::cout; using std::endl;
#include <vector>
using std::vector;

bool search(vector<int>::const_iterator b, vector<int>::const_iterator e, const int i);

int main(int argc, char *argv[]){
    vector<int> num{1,2,3,4,5,6,7,8,9,0};
    cout << search(num.cbegin(), num.cend(), 15) << endl;
    return 0;
}

bool search(vector<int>::const_iterator b, vector<int>::const_iterator e, const int i){
    while(b != e){
	if(*b == i) return true;
	++b;
    }
    return false;
}