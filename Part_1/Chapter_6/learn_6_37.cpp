#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::cbegin;
using std::cend;


auto func(auto mas) -> auto {
    return mas;
}



int main(int argc, char *argv[]){
    int mas[5] = {1,2,3,4,5};
    auto mas2 = func(&mas);
    auto beg = cbegin(mas2), end = cend(mas2);
    while(beg != end)
	cout << *beg++ << " ";
    cout << endl;
    return 0;
}