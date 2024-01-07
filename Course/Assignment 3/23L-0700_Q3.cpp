#include <iostream>
using namespace std;

int num1, num2;

int main()
{

	cout << "Enter 1st Number of Pair: ";
	cin >> num1;
	cout << "Enter 2nd Number of Pair: ";
	cin >> num2;

	if ((num1 == 1 || num2 == 1) || (abs(num1 - num2) != 2)) {
		cout << "NO" << endl;
		return 0;
	};

	for (int i = 2; ((i * i) <= num1 || (i * i) <= num2); i++)
		if (num1 % i == 0 || num2 % i == 0) {
			cout << "NO" << endl;
			return 0;
		};

	cout << "YES" << endl;

	return 0;

};