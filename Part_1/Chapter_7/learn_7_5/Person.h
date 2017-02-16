#include <string>

struct Person{
    std::string name;
    std::string adress;

    std::string get_name() const;
    std::string get_adress() const;
};