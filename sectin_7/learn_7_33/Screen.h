#ifndef SCREEN
#define SCREEN

#include <string>
#include <iostream>

class Screen {
    public:
	friend class Window_mgr;
	//friend void Window_mgr::clear(ScreenIndex i);
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) : hight(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c) : hight(ht), width(wd), contents(ht * wd, c) { }
	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	Screen &set(char c);
	Screen &set(pos r, pos col, char ch);
	Screen& display(std::ostream &os) { do_display(os); return *this; }
	const Screen& display(std::ostream &os) const { do_display(os); return *this; }
	pos size() const;
	void some_member() const;
    private:
	pos cursor = 0;
	pos hight = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
	mutable size_t access_ctr;
};

#endif