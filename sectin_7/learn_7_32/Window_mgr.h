#ifndef WINDOW_MGR
#define WINDOW_MGR

#include "Screen.h"
#include <vector>
#include <string>

class Window_mgr {
    public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
    private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};

#endif