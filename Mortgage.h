#ifndef MORTGATE_H
#define MORTGATE_h
#include "Account.h"
using  namespace std;
class Mortgage :public Account
{
public:
	Mortgage(String, double, double, int);
	Mortgage();
	double  calculateInterestRate();
};

#endif // !MORTGATE_h
