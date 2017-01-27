#include <iostream>
using std::cout; using std::endl; using std::cerr;
#include <vector>
using std::vector;

vector<int>::const_iterator search(vector<int>::const_iterator b, vector<int>::const_iterator e, const int i);

int main(int argc, char *argv[]){
    vector<int> num{1,2,3,4,5,6,7,8,9,0};
    vector<int>::const_iterator iter = search(num.cbegin(), num.cend(), 5);
    if(iter != num.end())
	cout << *iter << endl;
    else
	cout << "No element!" << endl;
    return 0;
}

vector<int>::const_iterator search(vector<int>::const_iterator b, vector<int>::const_iterator e, const int i){
    while(b != e){
	if(*b == i) return b;
	++b;
    }
    return b;
}