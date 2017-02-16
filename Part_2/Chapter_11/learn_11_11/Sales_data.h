#ifndef SALES_DATA
#define SALES_DATA

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs);
    public:	
	Sales_data(std::string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) { }
	Sales_data() : Sales_data("", 0, 0) { }
	Sales_data(std::string s) : Sales_data(s, 0, 0) { }
	Sales_data(std::istream &is) : Sales_data() { read(is, *this); }
	
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &rhs);
    private:
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::ostream &print(std::ostream &os, const Sales_data &item);
std::istream &read(std::istream &is, Sales_data &item);
bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs);
#endif