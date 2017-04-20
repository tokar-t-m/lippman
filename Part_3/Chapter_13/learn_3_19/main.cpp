#include <iostream>
#include "Employee.hpp"

int main(int argc, char **argv){
	Employee emp1, emp2;;
	emp1.print(std::cout) << std::endl;
	emp2.print(std::cout) << std::endl;
	Employee emp3("name");
	emp3.print(std::cout) << std::endl;
	Employee emp4(emp3);
	emp4.print(std::cout) << std::endl;
	emp1 = emp4;
	emp1.print(std::cout) << std::endl;
	return 0;
}