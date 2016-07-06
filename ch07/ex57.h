/*
Write your own version of the Account class.
*/

#ifndef CH7_EX_57
#define CH7_EX_57

#include <string>
#include <iostream>
using namespace std;

class Account {
public:
	void calculate() { 
		amount += amount * interestRate; 
	}

	static double rate() {
		return interestRate;
	}

	static void rate(double);

private:
	std::string owner;
	double amount;
	static constexpr int period = 30;
	double daily_tbl[period];
	static double interestRate;
	static double initRate();
};

void Account::rate(double newRate) {
	interestRate = newRate;
}

double Account::initRate() {
	return 1.0;
}

double Account::interestRate = initRate();

#endif