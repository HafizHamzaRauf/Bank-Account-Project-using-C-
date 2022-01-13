#include  <iostream>
#include "Account.h"
using namespace std;
#include "String.h"
Account::Account(String type, double bal, double rate, int mn) :CustomerType(type)
{
	balance = bal;
	rate = interestRate;
	month = mn;
}
Account::Account() :CustomerType(" ")
{
	interestRate = 0;
	balance = 0;
	month = 1;
}
void Account::setBalance(double bal)
{
	balance = bal;
}
void Account::setCustomer(String tp)
{
	CustomerType = tp;
}
void Account::setinterestRate(double rt)
{
	interestRate = rt;
}
void Account::setMonth(int mn)
{
	month = mn;
}
String Account::getCustomer()const
{
	return CustomerType;
}
double  Account::getBalance()const
{
	return balance;
}
double Account::getInterestRate()const
{
	return interestRate;
}
int Account::getMonth()const
{
	return month;
}
void Account::deposit(double am)
{
	if (am > 0 && balance > 0 )
	{
		balance =balance +  am;
	}
}
void Account::withdraw(double am)
{
	if (am > 0 && (balance >= am))
	{
		balance -= am;
	}
}
double Account::calculateInterestRate()
{
	return 0;
}


