#include "HasPtr.h"

HasPtr::HasPtr(const HasPtr& rhs){
	std::string *pstmp(rhs.ps);
	ps = new std::string(*pstmp);
	i = rhs.i;
}

HasPtr& HasPtr::operator=(const HasPtr &rhs){
	std::string *pstmp(rhs.ps);
	ps = new std::string(*pstmp);
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