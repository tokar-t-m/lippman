#include <iostream>
#include <list>
#include <algorithm>

int main(int argc, char *argv[]){
    std::list<int> ilst;
    int i;
    while(std::cin >> i)
	ilst.push_back(i);
    std::cout << count(ilst.cbegin(), ilst.cend(), 3) << std::endl;
    return 0;
}