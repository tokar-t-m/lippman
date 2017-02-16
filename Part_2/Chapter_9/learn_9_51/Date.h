#ifndef DATE
#define DATE

#include <string>
#include <sstream>

class Date{
    private:
	unsigned month, day, year;
    public:
	Date() = default;
	Date(std::string str){
	    std::string delimetr{",/"};
	    std::string date = str;
	    std::string::size_type pos = 0;
	    while((pos = date.find_first_of(delimetr, pos)) != std::string::npos){
		date.replace(pos, 1, " ");
		++pos;
	    }
	    std::istringstream mem(date);
	    std::string word;
	    mem >> word, month = stoul(word);
	    mem >> word, day = stoul(word);
	    mem >> word, year = stoul(word);
	}
	void print(){
	    std::cout << month << "/" << day << "/" << year <<std::endl;
	}
};
#endif