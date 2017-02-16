#include <iostream>

int main(int argc, char *argv[]){
    int a = 1;
    auto f = [a](const int& b) -> int { return a + b; };
    std::cout << f(5) << std::endl;
    return 0;
}