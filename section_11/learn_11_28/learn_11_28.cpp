#include <string>
#include <vector>
#include <map>

int main(int argc, char *argv[]){
    std::map<std::string, std::vector<int>> svimap{
    {"str", {1,2,3}}
    };
    //auto map_it = svimap.find("str");
    std::map<std::string, std::vector<int>>::const_iterator map_it = svimap.find("str");
    return 0;
}