#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int fact(int val){
    int ret = 1;
    while(val > 1)
	ret *= val--;
    return ret;
}

auto absolut(auto item){
    return item;
}

int main(int argc, char *argv[]){
    int val;
    cout << "Enter number: ", cin >> val;
    cout << "Factorial is " << val << ": " << fact(val) << endl;
    cout << "Absolut item: " << absolut(1.2) << endl;
    return 0;
}