#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>
#include <string>

class Employee{
public:
	Employee(): user(std::string()) { id = next_id(); }
	Employee(const std::string &n): user(n) { id = next_id(); }
	std::ostream& print(std::ostream &os);
private:
	std::string user;
	static unsigned id;
	unsigned static next_id() { id++; return id; }
};

#endif