#include <iostream>
using namespace std;
#include "Account.h"
#include "Mortgage.h"
#include "Deposit.h"
#include "Loan.h"
#include "String.h"
int main()

{
	Account* p = new Loan("individual", 100,2,14);
	cout << p->calculateInterestRate();

	return 0;
}