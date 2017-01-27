#ifndef SALES_DATA
#define SALES_DATA

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend std::istream &read(std::istream &is, Sales_data &item);
    public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p):
		   bookNo(s), units_sold(n), revenue(p * n) { }
	Sales_data(std::istream &is);
	
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
#endif