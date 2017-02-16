#include <iostream>
#include <vector>
#include <new>

std::vector<int>* vec_create();
std::vector<int>* in_ivec(std::vector<int>* ivec);
void print(std::vector<int>* ivec);

int main(int argc, char *argv[]){
	std::vector<int>* ivec = vec_create();
	in_ivec(ivec);
	print(ivec);
	return 0;
}

std::vector<int>* vec_create(){
	std::vector<int>* ivec = new std::vector<int>;
	return ivec;
}

std::vector<int>* in_ivec(std::vector<int>* ivec){
	int num;
	for(std::vector<int>::size_type i = 0; i < 3; ++i){
		std::cin >> num;
		ivec->push_back(num);
	}
	return ivec;
}

void print(std::vector<int>* ivec){
	for(int i: *ivec)
		std::cout << i << " " << std::flush;
	delete ivec;
}