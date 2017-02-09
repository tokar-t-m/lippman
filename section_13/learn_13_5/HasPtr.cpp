#include "HasPtr.h"

HasPtr& HasPtr::operator=(const HasPtr& rhs){
	ps = rhs.ps;
	i = rhs.i;
	return *this;
}

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}
