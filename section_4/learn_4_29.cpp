#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    int ia[10];
    cout << sizeof(ia) << endl;
    cout << sizeof(*ia) << endl;
    cout << endl;
    int *pia = ia;
    cout << sizeof(pia) << endl;
    cout << sizeof(*pia) << endl;





    return 0;
}