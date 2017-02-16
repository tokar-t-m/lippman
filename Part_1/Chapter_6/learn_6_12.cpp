#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void reset(int &i1, int &i2){
    i1 = i2 = 0;
}

int main(int argc, char *argv[]){
    int item1 = 5, item2 = 10;
    cout << item1 << " " << item2 << endl;
    reset(item1, item2);
    cout << item1 << " " << item2 << endl;
    return 0;
}