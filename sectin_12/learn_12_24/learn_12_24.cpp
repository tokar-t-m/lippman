#include <iostream>
#include <new>

int main(int argc, char *argv[]){
    char *str = new char[10];
    std::cin >> str;
    std::cout << str <<std::endl;
    delete [] str;
}