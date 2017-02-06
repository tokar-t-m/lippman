#include <iostream>
#include <string>
#include <memory>

int main(int argc, char *argv[]){
	size_t n = 3;
	std::allocator<std::string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;
	std::string s;
	while(std::cin >> s && q != p + n){
		alloc.construct(q);
		*q++ = s;
	}
	while(q != p){
		--q;
		std::cout << *q << " " << std::flush;
	}
	while(q != p + n)
		alloc.destroy(q++);
	alloc.deallocate(p, n);
	return 0;
}