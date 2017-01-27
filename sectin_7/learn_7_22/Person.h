#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

class Person {
    friend std::istream &read(std::istream &is, Person &item);
    friend std::ostream &print(std::ostream &os, const Person &item);
    public:
	Person() = default;
	Person(const std::string &n, const std::string &a):
	       name(n), adress(a) { }
	Person(std::istream &is);
	std::string get_name() const;
	std::string get_adress() const;
    private:
	std::string name;
	std::string adress;
};

std::istream &read(std::istream &is, Person &item);
std::ostream &print(std::ostream &os, const Person &item);
#endif