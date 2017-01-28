#include <iostream>
#include <cstring>
#include <string>
#include <memory>

void char_str();
void str();

int main(int argc, char *argv[]){
    char_str();
    str();
    return 0;
}

void char_str(){
    char str1[] = "qwe"; size_t n1 = sizeof(str1) / sizeof(char);
    char str2[] = "rty"; size_t n2 = sizeof(str2) / sizeof(char);
    char *str = new char[n1 + n2];
    strcpy(str, str1);
    strcat(str, str2);
    puts(str);
    delete [] str;
}

void str(){
    std::string str1{"qwe"};
    std::string str2{"rty"};
    std::string str = str1 + str2;
    std::cout << str << std::endl;
}
