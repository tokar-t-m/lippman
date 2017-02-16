#include <iostream>
#include <string>

struct Person{
    std::string name;
    std::string adress;

    std::string get_name() const;
    std::string get_adress() const;
};

std::istream& read(std::istream &is, Person&);
std::ostream& print(std::ostream &os, const Person&);