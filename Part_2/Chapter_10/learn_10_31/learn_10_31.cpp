#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main(int argc, char *argv[]){
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> ivec;
    copy(in, eof, back_inserter(ivec));
    sort(ivec.begin(), ivec.end());
    std::ostream_iterator<int> out(std::cout, " ");
    unique_copy(ivec.begin(), ivec.end(), out);
    std::cout << std::endl;
    return 0;
}