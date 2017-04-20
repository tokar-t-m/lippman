#ifndef STRUCT_X
#define STRUCT_X

#include <iostream>

struct X {
	X() { std::cout << "X()" << std::endl; }
	X(const X &rhs) { std::cout << "X(const X&)" << std::endl; }
	X& operator=(const X &rhs) { std::cout << "operator=" << std::endl; return *this; }
	~X(){ std::cout << "~X()" << std::endl; }
};
#endif