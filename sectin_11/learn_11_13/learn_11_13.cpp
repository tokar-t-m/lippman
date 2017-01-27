#include <iostream>
#include <utility>

int main(int argc, char *argv[]){
    std::pair<size_t, size_t> st_p2{1, 2};
    std::pair<size_t, size_t> st_p(1, 2);
    std::pair<size_t, size_t> st_p3 = std::make_pair(1, 2);
    return 0;
}