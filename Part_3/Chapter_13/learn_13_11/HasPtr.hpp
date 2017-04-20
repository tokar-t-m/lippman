#ifndef HAS_PTR
#define HAS_PTR

#include <string>
#include <iostream>

class HasPtr {
	public:
		HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &rhs){
			ps = new std::string(*rhs.ps);
			i = rhs.i;
		}
		HasPtr& operator=(HasPtr &rhs){
			ps = new std::string(*rhs.ps);
			i = rhs.i;
			return *this;
		}
		std::ostream& print(std::ostream& os){
			return os << *ps << " " << i << std::flush;
		}
		~HasPtr(){
			delete ps;
		}
	private:
		std::string *ps;
		int i;
};
#endif