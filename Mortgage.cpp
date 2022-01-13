#include <iostream>
#include "String.h"
#include "Account.h"
#include "Mortgage.h"
using namespace std;
Mortgage::Mortgage(String name, double bal, double rt, int mn) :
	Account(name, bal, rt, mn)
{

}
Mortgage::Mortgage() : Account()
{

}
double Mortgage::calculateInterestRate()
{
	if (getCustomer() == "individual")
	{
		if (getMonth()<=6)
		{
			return 0;
		}
		else
		{
			return (getBalance() + (1 + getInterestRate() * ((double)getMonth())));
		}
	}
	else if (getCustomer() == "company")
	{
		if (getMonth() <= 12)
		{
			return (getBalance() + (1 + 0.5 * ((double)getMonth())));

		}
		else
		{
			return (getBalance() + (1 + getInterestRate() * ((double)getMonth())));

		}
	}
	else
	{
		return 0;

	}
}
