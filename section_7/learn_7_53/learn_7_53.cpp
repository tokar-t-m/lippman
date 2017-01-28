#include <iostream>
#include "Debug.h"

//compile standard is C++11
//Not is C++14! constexpr!
int main(int argc, char *argv[]){
    constexpr Debug io_sub(false, true, false);
    io_sub.set_io(false);
    if(io_sub.any())
	std::cerr << "print appropriate error messages" << std::endl;
    constexpr Debug prod(true);
    if(prod.any())
	std::cerr << "print an error message" << std::endl;
    return 0;
}