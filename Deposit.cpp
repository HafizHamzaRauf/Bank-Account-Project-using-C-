#include <iostream>
#include "String.h"
#include "Account.h"
#include "Deposit.h"
using  namespace std;
Deposit::Deposit(String st, double bal, double rt, int mn) :Account(st, bal, rt, mn)
{
	
}
Deposit::Deposit() : Account()
{


}
double  Deposit::calculateInterestRate()
{
	if (getBalance ()> 0 && getBalance() < 1000)
	{
		return  0;
	}
	else
	{
		double result;
		result = getBalance() * (1 + getInterestRate() * ((double)getMonth()));
		return result;
	}

}