#ifndef HASPTR
#define HASPTR

#include <iostream>
#include <string>


class HasPtr{
public:
	HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) { std::cout << "Constryct" << std::endl; }
	HasPtr(const HasPtr &rhs): ps(new std::string()), i(rhs.i) { std::cout << "Constryct copy" << std::endl; ps = rhs.ps; }
	std::ostream& print(std::ostream &os);
private:
	std::string *ps;
	int i;
};

#endif



