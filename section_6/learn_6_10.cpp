#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void reset(int *ip1, int *ip2){
    *ip1 = *ip2 = 0;
    ip1 = ip2 = nullptr;
}

int main(int argc, char *argv[]){
    int item1 = 5, item2 = 10;
    cout << item1 << " " << item2 << endl;
    reset(&item1, &item2);
    cout << item1 << " " << item2 << endl;
    return 0;
}