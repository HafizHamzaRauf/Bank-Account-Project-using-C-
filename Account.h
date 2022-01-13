#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "String.h"
class Account
{
	String CustomerType;
	double  balance;
	double interestRate;
	int month;
public:
	Account(String, double, double, int);
	Account();
	void setMonth(int);
	void setBalance(double);
	void setinterestRate(double);
	void setCustomer(String);
	String getCustomer()const;
	double getBalance()const;
	double getInterestRate()const;
	int getMonth()const;
	void withdraw(double);
	void deposit(double);
	virtual double calculateInterestRate();

};
#endif // !ACCOUNT_H

