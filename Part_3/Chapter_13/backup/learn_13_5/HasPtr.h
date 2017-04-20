#ifndef HASPTR
#define HASPTR

#include <iostream>
#include <string>

class HasPtr{
public:
	HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &rhs);
	std::ostream& print(std::ostream &os);
private:
	std::string *ps;
	int i;
};

#endif