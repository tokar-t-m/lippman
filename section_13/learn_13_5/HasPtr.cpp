#include "HasPtr.h"

HasPtr::HasPtr(const HasPtr& rhs){
	std::string *pstmp(rhs.ps);
	ps = new std::string(*pstmp);
	i = rhs.i;
}

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}
