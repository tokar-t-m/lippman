#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    int val = 0, sum = 0;
    while(val <= 10)
	sum += val, ++val;
    cout << "sum: " << sum << endl;
    return 0;
}