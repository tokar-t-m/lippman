#include <iostream>
using std::istream; using std::ostream;

#include "Sales_data.h"

inline double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream& read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2){
    return sd1.bookNo.size() < sd2.bookNo.size();
}