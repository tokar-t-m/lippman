#include "HasPtr.h"

std::ostream& HasPtr::print(std::ostream &os){
	os << *ps << " " << i;
	return os;
}