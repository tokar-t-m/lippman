#include <iostream>
#include <vector>
int main(int argc, char *argv[]){
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};
    if(!ivec.empty()){
	std::cout << ivec.at(0) << std::endl;
	std::cout << ivec.front() << std::endl;
	std::cout << *ivec.begin() << std::endl;
	std::cout << ivec[0] << std::endl;
    }else{
	//std::cout << ivec.at(0) << std::endl;
	//std::cout << ivec.front() <<std::endl;
	//std::cout << *ivec.begin() << std::endl;
	//std::cout << ivec[0] << std::endl;
    }
    return 0;
}