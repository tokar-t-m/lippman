#include <iostream>
#include <vector>
#include <new>

std::vector<int>* create_vec();
std::vector<int>* in_vec(std::vector<int> *ivec);
void ivec_print(std::vector<int>* ivec);

int main(int argc, char *argv[]){
    std::vector<int> *ivec_create = create_vec();
    std::vector<int> *ivec_in = in_vec(ivec_create);
    ivec_print(ivec_in);
    return 0;
}

std::vector<int>* create_vec(){
    std::vector<int> *ivec = new std::vector<int>;
    return ivec;
}

std::vector<int>* in_vec(std::vector<int> *ivec){
    int num, i(0);
    while(std::cin >> num && i < 3)
	ivec->push_back(num), ++i;
    return ivec;
}

void ivec_print(std::vector<int>* ivec){
    for(int i: *ivec)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    delete ivec;
}