#include <iostream>
using namespace std;

int num1, num2;
char op;

int main()
{

	cout << "WELCOME TO MENU BASED CALCULATOR" << endl
		<< "TO EXIT INPUT 0 IN BOTH INTEGERS" << endl << endl;

	do {

		if (op == '+')
			cout << endl << "Your Result is " << num1 + num2 << endl << endl;

		else if (op == '-')
			cout << endl << "Your Result is " << num1 - num2 << endl << endl;

		else if (op == '*')
			cout << endl << "Your Result is " << num1 * num2 << endl << endl;

		else if (op == '/')
			cout << endl << "Your Result is " << num1 / num2 << endl << endl;

		cout << "Enter 1st Number: ";
		cin >> num1;

		cout << "Enter Operator: ";
		cin >> op;

		cout << "Enter 2nd Number: ";
		cin >> num2;

	} while (num1 != 0 && num2 != 0);

	return 0;

};