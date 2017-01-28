#ifndef SCREEN
#define SCREEN

#include <string>

class Screen {
    public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) : hight(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c) : hight(ht), width(wd), contents(ht * wd, c) { }
	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	void some_member() const;
    private:
	pos cursor = 0;
	pos hight = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;
};
#endif