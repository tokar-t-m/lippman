#include <vector>
#include <list>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::vector<int>::iterator, int> test1;
    std::map<std::list<int>::iterator, int> test2;
    return 0;
}