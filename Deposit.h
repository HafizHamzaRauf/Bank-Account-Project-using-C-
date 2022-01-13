#ifndef DEPOSIT_H
#define DEPOSIT_H
class Deposit :public Account
{
private:
public:
	Deposit(String, double, double, int);
	Deposit();
	virtual double calculateInterestRate();
};
#endif // !DEPOSIT_H

