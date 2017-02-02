#include <iostream>
#include <cstring>
#include <string>


int main(int argc, char *argv[]){
	char ch1[] = "qwe"; size_t n1 = sizeof(ch1) / sizeof(char);
	char ch2[] = "rty"; size_t n2 = sizeof(ch2) / sizeof(char);
	char *ch3 = new char[n1 + n2];
	strcpy(ch3, ch1);
	strcat(ch3, ch2);
	std::cout << n1 + n2 << std::endl;
	std::cout << "char: " << ch3 << std::endl;
	delete [] ch3;

	std::string str1{"qwe"};
	std::string str2{"rty"};
	std::string *str3 = new std::string;
	*str3 = str1 + str2;
	std::cout << "string: " << *str3 << std::endl;
	delete str3;
	return 0;
}