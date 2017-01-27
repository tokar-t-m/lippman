#include <iostream>
#include <string>

std::string PrefSuf(std::string name, const std::string& pref, const std::string& suf);

int main(int argc, char *argv[]){
    std::string name{"Over"};
    std::cout << name << "\n" << PrefSuf(name, "Mr.", "III") << std::endl;

    return 0;
}

std::string PrefSuf(std::string name, const std::string& pref, const std::string& suf){
    std::string tmp = pref + " ";
    name.insert(0, tmp);
    tmp = " " + suf;
    name.insert(name.size(), tmp);
    return name;
}


