#include <iostream>
#include <string>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
};