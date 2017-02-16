#include <iostream>
#include <string>
#include "Person.h"

std::string Person::get_name() const{
    return name;
}

std::string Person::get_adress() const{
    return adress;
}

std::istream& read(std::istream &is, Person &item){
    is >> item.name >> item.adress;
    return is;
}

std::ostream& print(std::ostream &os, const Person &item){
    os << item.name << " " << item.adress;
    return os;
}