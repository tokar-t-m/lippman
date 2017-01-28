#include <iostream>
#include <string>
#include <forward_list>

void insert_str(std::forward_list<std::string>& flst, const std::string& search, const std::string& str);

int main(int argc, char *argv[]){
    std::forward_list<std::string> flst{"Hello", "World", "Hello"};
    insert_str(flst, "test", "test");
    insert_str(flst, "Hello", "test2");
    for(std::string& s: flst)
	std::cout << s << " " << std::endl;


    return 0;
}

void insert_str(std::forward_list<std::string>& flst, const std::string& search, const std::string& str){
    std::forward_list<std::string>::iterator prev = flst.before_begin();
    std::forward_list<std::string>::iterator curr = flst.begin();
    while(curr != flst.end()){
	if(*curr == search){
	    curr = flst.insert_after(curr, str);
	    break;
	}else{
	    prev = curr;
	    ++curr;
	}
    }
    if(curr == flst.end()){
	curr = flst.insert_after(prev, str);
	prev = curr;
	++curr;
    }
}