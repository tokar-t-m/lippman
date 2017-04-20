#include "struct_x.hpp"

int main(int argc, char **argv){
	X x1;
	X x2(x1);
	X x3;
	x3 = x1;

	return 0;
}