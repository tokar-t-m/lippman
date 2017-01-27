#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> ivec_create();
std::shared_ptr<std::vector<int>> ivec_in(std::shared_ptr<std::vector<int>> ivec);
void ivec_print(std::shared_ptr<std::vector<int>> ivec);

int main(int argc, char *argv[]){
    std::shared_ptr<std::vector<int>> ivec = ivec_create();
    ivec = ivec_in(ivec);
    ivec_print(ivec);
    return 0;
}

std::shared_ptr<std::vector<int>> ivec_create(){
    std::shared_ptr<std::vector<int>> ivec = std::make_shared<std::vector<int>>();
    return ivec;
}

std::shared_ptr<std::vector<int>> ivec_in(std::shared_ptr<std::vector<int>> ivec){
    int num, i(0);
    while(std::cin >> num && i < 3)
	ivec->push_back(num), ++i;
    return ivec;
}

void ivec_print(std::shared_ptr<std::vector<int>> ivec){
    for(int i: *ivec)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
}