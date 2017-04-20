#include <iostream>
#include "HasPtr.hpp"

int main(int argc, char **argv){
	HasPtr hp1("str");
	hp1.print(std::cout) << std::endl;
	HasPtr hp2(hp1);
	hp2.print(std::cout) << std::endl;
	return 0;
}