#include <iostream>

int main(int argc, char *argv[]){
    auto f = [](const int& a, const int& b) -> int {return a + b;};
    std::cout << f(1, 2) << std::endl;
    return 0;
}