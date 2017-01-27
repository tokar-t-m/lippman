#include <iostream>
#include <iterator>
#include <cstddef>

using std::cout;
using std::endl;
using std::cin;

char (*func(char mas[3][5]))[5]{
    
    return mas;
}

int main(int argc, char *argv[]){
    char mas[3][5] = {"str1", "str2", "str3"};
    
    return 0;
}