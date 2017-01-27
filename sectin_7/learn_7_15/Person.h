#include <iostream>
#include <string>

struct Person{
    std::string name;
    std::string adress;

    Person() = default;
    Person(const std::string &n, const std::string &a) : name(n), adress(a) { }
    Person(std::istream &is);
    std::string get_name() const;
    std::string get_adress() const;
};

std::istream& read(std::istream &is, Person&);
std::ostream& print(std::ostream &os, const Person&);