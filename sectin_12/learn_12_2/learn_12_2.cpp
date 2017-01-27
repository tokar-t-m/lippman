#include <iostream>
#include "StrBlob.h"

int main(int argc, char *argv[]){
    StrBlob b1;
    StrBlob b2{"item1", "item2", "item3"};
    std::string str = b2.front();
    str = "qwe";
    std::cout << b2.front() << std::endl;
    return 0;
}