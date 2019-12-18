// PRG410-371.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
	double netBalance, payment, d1, d2;
	double interestRate;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the net balance: ";
	cin >> netBalance;
	cout << endl;

	cout << "Enter the number of days in the billing cycle: ";
	cin >> d1;
	cout << endl;

	cout << "Enter the payment amount: ";
	cin >> payment;
	cout << endl;

	cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> d2;
	cout << endl;

	cout << "Enter the interest rate per month: ";
	cin >> interestRate;
	cout << endl;

	cout << "The interest on the unpaid balance is: "
		<< (netBalance * d1 - payment * d2) / d1 * interestRate
		<< endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
