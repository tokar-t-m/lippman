#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include <iostream>

class Employee{
	public:
		static int set_id() { return ++id; }
		Employee(): name(std::string()) {  user_id = set_id(); }
		Employee(const std::string& s): name(s) { user_id = set_id(); }
		Employee(Employee& rhs): name(rhs.name) { user_id = set_id(); }
		Employee& operator=(Employee& rhs) { name = rhs.name; user_id = set_id(); return *this; }
		std::ostream& print(std::ostream& os) { return os << name << " - " << user_id << std::flush; }
	private:
		std::string name;
		static unsigned int id;
		unsigned int user_id;
};

unsigned int Employee::id;

#endif