#include "HasPtr.h"

/*
HasPtr::HasPtr(const HasPtr &rhs){
	std::cout << "Copy constryct" << std::endl;
	//ps = rhs.ps;
	
	i = rhs.i;		
}
*/

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}