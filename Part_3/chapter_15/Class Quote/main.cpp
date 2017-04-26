#include <iostream>
#include "Quote.hpp"

double print_total(std::ostream &os, const Quote &item, size_t n);


int main(int rgc, char **argv){
	Quote basic("book1", 1.1);
	print_total(std::cout, basic, 20);
	Bulk_quote bulk("book2", 1.1, 5, 0.2);
	print_total(std::cout, bulk, 20);
	Limited_quote limQuote;
	return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n){
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}