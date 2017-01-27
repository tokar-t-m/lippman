#include "Screen.h"

inline Screen& Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline void Screen::some_member() const {
    ++access_ctr;
}