#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int sum_ilist(initializer_list<int> il){
    int sum = 0;
    for(const int &elem: il)
	sum += elem;
    return sum;
}

int main(int argc, char *argv[]){
    cout << "Sum: " << sum_ilist({1, 2, 3}) << endl;
    return 0;
}