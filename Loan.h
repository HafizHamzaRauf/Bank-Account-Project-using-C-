#ifndef LOAN_H
#define LOAN_H
#include "Account.h"
class Loan :public Account
{
public:
	Loan(String, double, double, int);
	Loan();
	virtual double calculateInterestRate();
};

#endif // !LOAN_h

