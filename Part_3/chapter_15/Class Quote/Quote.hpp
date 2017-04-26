#ifndef QUOTE
#define QUOTE

#include <string>

class Quote {
public:
	Quote() = default;
	Quote(const std::string &book, double sales_date): bookNo(book), price(sales_date) { }
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const { return n * price; }
	virtual ~Quote() = default;
private:
	std::string bookNo;
protected:
	double price = 0.0;
};
#endif


#ifndef BULK_QUOTE
#define BULK_QUOTE

class Bulk_quote: public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double p, std::size_t qty, double disc): Quote(book, p), min_qty(qty), discount(disc) { }
	double net_price(std::size_t cnt) const override { return (cnt >= min_qty) ? (cnt * (1 - discount) * price) : (cnt * price); }
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};

#endif

#ifndef LIMITED_QUOTE
#define LIMITED_QUOTE

class Limited_quote: public Quote {
public:
	Limited_quote() = default;
	Limited_quote(const std::string& book, double p, std::size_t f_lim, double disc): Quote(book, p), lim(f_lim), discount(disc) { }
	//double net_price(std::size_t cnt) const override { return  }
private:
	std::size_t lim = 0;
	double discount = 0.0;
};
#endif

//761