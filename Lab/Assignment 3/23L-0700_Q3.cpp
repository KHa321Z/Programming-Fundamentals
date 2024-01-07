#include <iostream>
using namespace std;

int num1, num2;
float result;

int main()
{

	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;

	result = num1 / num2;

	cout << endl;
	cout << "Result = " << result;
	cout << endl;

	return 0;

};