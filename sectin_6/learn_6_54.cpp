#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int sum(int, int);
int difference(int, int);
int multiply(int, int);
int division(int, int);

int main(int argc, char *argv[]){
    vector<int(*)(int, int)> pfvec;

    pfvec.push_back(&sum);
    pfvec.push_back(&difference);
    pfvec.push_back(&multiply);
    pfvec.push_back(&division);

    for(int (*&f)(int, int): pfvec)
	cout << f(1, 1) << endl;

    return 0;
}

int sum(int a, int b){
    return a + b;
}

int difference(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}