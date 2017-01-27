#include <string>
using std::string;

#include <iostream>
using std::istream; using std::ostream;

#include "Person.h"

Person::Person(istream &is){
    read(is, *this);
}

string Person::get_name() const {
    return name;
}

string Person::get_adress() const {
    return adress;
}

istream &read(istream &is, Person &item){
    is >> item.name >> item.adress;
    return is;
}

ostream &print(ostream &os, const Person &item){
    os << item.name << " " << item.adress;
    return os;
}
