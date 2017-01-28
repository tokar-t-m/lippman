#ifndef ACCOUNT
#define ACCOUNT
#include <string>
class Account {
    public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
    private:
	std::string owber;
	double amount;
	static double interestRate;
	static double initRate();
};
#endif