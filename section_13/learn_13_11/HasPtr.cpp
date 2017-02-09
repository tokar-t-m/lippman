#include "HasPtr.h"

HasPtr::HasPtr(const HasPtr& rhs){
	ps = new std::string(*rhs.ps);
	i = rhs.i;
}

HasPtr& HasPtr::operator=(const HasPtr &rhs){
	std::string *newps = new std::string(*rhs.ps);
	delete ps;
	ps = newps;
	i = rhs.i;
	return *this;
}

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}

HasPtr::~HasPtr(){
	delete ps;
}