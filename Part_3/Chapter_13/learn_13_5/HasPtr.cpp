#include "HasPtr.h"

HasPtr::HasPtr(const HasPtr& rhs){
	ps = new std::string(*rhs.ps);
	i = rhs.i;
}

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}
