#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> vec_create();
std::shared_ptr<std::vector<int>> in_ivec(std::shared_ptr<std::vector<int>> ivec);
void print(std::shared_ptr<std::vector<int>> ivec);

int main(int argc, char *argv[]){
	std::shared_ptr<std::vector<int>> ivec = vec_create();
	in_ivec(ivec);
	print(ivec);
	return 0;
}

std::shared_ptr<std::vector<int>> vec_create(){
	std::shared_ptr<std::vector<int>> ivec;
	return ivec;
}

std::shared_ptr<std::vector<int>> in_ivec(std::shared_ptr<std::vector<int>> ivec){
	int num;
	for(std::vector<int>::size_type i = 0; i < 3; ++i){
		std::cin >> num;
		ivec->push_back(num);
	}
	return ivec;
}

void print(std::shared_ptr<std::vector<int>> ivec){
	for(int i: *ivec)
		std::cout << i << " " << std::flush;
}