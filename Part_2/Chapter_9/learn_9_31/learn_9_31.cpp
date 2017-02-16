#include <iostream>
#include <forward_list>
#include <list>

int main(int argc, char *argv[]){
    std::list<int> li = {1,2,3,4,5,6,7,8,9};
    auto iter_li = li.begin();
    while(iter_li != li.end()){
	if(*iter_li % 2){
	    iter_li = li.insert(iter_li, *iter_li);
	    ++iter_li; ++iter_li;
	}else{
	    iter_li = li.erase(iter_li);
	}
    }
    for(auto& i: li)
	std::cout << i << " " << std::flush;
    std::cout << std:: endl;

    std::forward_list<int> fli = {1,2,3,4,5,6,7,8,9};
    auto iter_fli = fli.begin();
    while(iter_fli != fli.end()){
	if(*iter_fli % 2){
	    iter_fli = fli.insert_after(iter_fli, *iter_fli);
	    ++iter_fli;
	}else{
	    iter_fli = fli.erase_after(iter_fli);
	    ++iter_fli;
	}
    }

    for(auto& i: fli)
	std::cout << i << " " << std::flush;
    std::cout << std::endl;
    
    return 0;
}