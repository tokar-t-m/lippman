#include <iostream>
#include <string>

std::string PrefSuf(std::string name, const std::string& pref, const std::string& suf);

int main(int argc, char *argv[]){
    std::string str{"Over"};
    std::string str2 = PrefSuf(str, "Mr.", "III");
    std::cout << str << "\n" << str2 << std::endl;
    return 0;
}

std::string PrefSuf(std::string name, const std::string& pref, const std::string& suf){
    std::string tmp = pref + " ";
    name.insert(0, tmp);
    tmp = " " + suf;
    name.append(tmp);
    return name;
}