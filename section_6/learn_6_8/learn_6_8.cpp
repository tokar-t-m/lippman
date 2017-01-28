#include <iostream>
#include <cstddef>
#include "chapter6.h"

using std::cout;
using std::endl;
using std::cin;

int fact(int val){
    int ret = 1;
    while(val > 1)
	ret *= val--;
    return ret;
}

auto absolute(auto val){
    return val;
}

size_t count_calls(){
    static size_t ctr = 0;
    return ctr++;
}

int main(int argc, char *argv[]){
    cout << "Fact: " << fact(5) << endl;
    cout << "Absolute: " << absolute(120) << endl;
    cout << "Cout calls: " << count_calls() << endl;
    return 0;
}