#include <iostream>
#include <list>
#include <deque>

int main(int argc, char *argv[]){
    std::list<int> ilist{1,2,3,4,5,6,7,8,9};
    std::deque<int> even, odd;
    std::deque<int>::iterator iter_even = even.end(), iter_odd = odd.end();
    for(int& a: ilist)
	if(a % 2 == 0)
	    //even.push_back(a);
	    iter_even = even.insert(iter_even, a);
	else
	    //odd.push_back(a);
	    iter_odd = odd.insert(iter_odd, a);
    for(int& i: even)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    for(int& i: odd)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    return 0;
}