#include <iostream>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, size_t> word_count;
    //auto map_it = word_count.cbegin();
    std::map<std::string, size_t>::const_iterator map_it = word_count.cbegin();
    return 0;
}