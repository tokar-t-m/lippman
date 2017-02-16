#include <iostream>
using std::cout;
#include "Screen.h"

int main(int argc, char *argv[]){
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}