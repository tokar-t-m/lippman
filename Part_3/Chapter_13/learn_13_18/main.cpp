#include <iostream>
#include "Employee.hpp"

int main(int argc, char **argv){
	Employee emp1, emp2;;
	emp1.print(std::cout) << std::endl;
	emp2.print(std::cout) << std::endl;
	Employee emp3("name");
	emp3.print(std::cout) << std::endl;
	return 0;
}