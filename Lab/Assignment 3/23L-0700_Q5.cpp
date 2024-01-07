#include <iostream>
using namespace std;

float num1, num2;
char op;

int main()
{

	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter Arithmetic Operator (+, -, /, *): ";
	cin >> op;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	cout << endl;

	if (op == '+')
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	else if (op == '-')
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

	else if (op == '*')
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

	else if (op == '/')
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	return 0;

};