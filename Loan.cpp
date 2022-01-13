#include <iostream>
#include "String.h"
#include "Account.h"
#include "Loan.h"
using namespace std;
Loan::Loan(String mn, double bal, double rt, int  n) :Account(mn, bal, rt, n)
{

}
Loan::Loan() : Account()
{

}
double Loan :: calculateInterestRate()
{
	if (getCustomer() == "individual")
	{
		if (getMonth() <= 3)
		{
			return 0;
		}
		else
		{
			return (getBalance() + (1 + getInterestRate() * (double)getMonth()));
		}
	}
	else if (getCustomer() == "company")
	{
		if (getMonth() <= 2)
		{
			return 0;
		}
		else
		{
			return (getBalance() + (1 + getInterestRate() * (int)getMonth()));
		}
	}
	else
	{
		return 0;
	}
}