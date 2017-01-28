#include <iostream>
#include <string>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &read(std::ostream&, const Sales_data&);
std::istream &print(std::istream&, Sales_data&);