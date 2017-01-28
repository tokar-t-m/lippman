#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using std::cin;

size_t count_calls(){
    static size_t  ctr = 0;
    return ctr++;
}

int main(int argc, char *argv[]){
    cout << "One calls: " << count_calls() << endl;
    cout << "Other calls: " << count_calls() << endl;;
    for(size_t i = 0; i < 9; ++i)
	cout << "Other calls: " << count_calls() << endl;
    return 0;
}