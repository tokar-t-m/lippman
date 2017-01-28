#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    const char carr1[] = "Hello";
    const char carr2[] = "World";
    const auto size_uarr = strlen(carr1) + strlen(carr2) + 2;
    char uarr[size_uarr];
    strcpy(uarr, carr1);
    strcat(uarr, " ");
    strcat(uarr, carr2);
    const char *cp = uarr;
    while(*cp){
	cout << *cp;
	++cp;
    }
    cout << endl;
    return 0;
}