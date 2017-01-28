#include <iostream>

int main(int argc, char *argv[]){
    int i = 10;
    auto f = [&i]()->bool{while(i != 0) --i; return true;};
    std::cout << f() << std::endl;


    return 0;
}