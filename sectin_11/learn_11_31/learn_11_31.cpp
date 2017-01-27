#include <iostream>
#include <string>
#include <map>

int main(int argc, char *argv[]){
    std::multimap<std::string, std::string> authors{
	{"Alen de Botton", "Book1"},
	{"Alen de Botton", "Book2"},
	{"Boor", "Book1"},
	{"Alen", "Book1"}
    };

    /*
    //Searh 1
    auto entries = authors.count(search_item);
    auto iter = authors.find(search_item);
    while(entries){
	std::cout << iter->second << std::endl;
	++iter;
	--entries;
    }

    //Search 2
    for(auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item); beg != end; ++beg)
	std::cout << beg->second << std::endl;

    //Search 3
    for(auto pos = authors.equal_range(search_item); pos.first != pos.second; ++pos.first)
	std::cout << pos.first->second << std::endl;
    */

    //Search and deleted
    std::string search_item("Alen de Botton");
    if(authors.erase(search_item) > 1)
	std::cout << "Deleted elem" << std::endl;


    auto beg = authors.begin();
    while(beg != authors.end()){
	std::cout << beg->first << " " << beg->second << std::endl;
	++beg;
    }


    return 0;
}