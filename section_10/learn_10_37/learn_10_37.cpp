#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
    std::list<int> lst;
    copy(ivec.crbegin() + 3, ivec.crbegin() + 7, back_inserter(lst));
    for(const auto& i: lst)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    return 0;
}