#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]){
    double num1, num2;
    cout << "Enter two number: ", cin >> num1 >> num2;
    cout << "result: " << num1 / num2 << endl;
    return 0;
}