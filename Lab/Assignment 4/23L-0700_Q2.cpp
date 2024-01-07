#include <iostream>
using namespace std;

int withdraw, balance;

int main () 
{
	
	cout << "Enter Account Balance: ";
	cin >> balance;

	while (balance <= 0) {


		cout << endl << "Invalid Balance!"  
			<< endl << "Please Enter Account Balance Again: ";
		cin >> balance;

	};

	cout << endl << "Enter Amount to Withdraw: ";
	cin >> withdraw;

	while (withdraw <= 0) {

		cout << endl << "Error!"
			<< endl << "Please Enter your Withdraw Amount Again: ";
		cin >> withdraw;

	};

	if (withdraw <= balance) {

		balance -= withdraw;
		cout << endl << "The Amount was deducted Successfully!"
			<< endl << "Your Current Balance is " << balance 
			<< endl;

	} else
		cout << endl << "Error! Your Balance is Insufficient" << endl;

	return 0;

};