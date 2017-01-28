#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main(int argc, char *argv[]){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    std::vector<int> ivec(std::begin(ia), std::end(ia));
    std::list<int> ilst(std::begin(ia), std::end(ia));

    if(!ivec.empty()){
	std::vector<int>::iterator iter = ivec.begin();
	while(iter != ivec.end())
	    if(*iter % 2 == 0)
		iter = ivec.erase(iter);
	    else
		++iter;
    }else{
	std::cerr << "Empty: true!" << std::endl;
    }

    if(!ilst.empty()){
	std::list<int>::iterator iter = ilst.begin();
	while(iter != ilst.end())
	    if(*iter % 2 != 0)
		iter = ilst.erase(iter);
	    else
		++iter;
    }else{
	std::cerr << "Emty: true!" << std:: endl;
    }

    for(int& i: ivec)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;

    for(int& i: ilst)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;

    return 0;
}