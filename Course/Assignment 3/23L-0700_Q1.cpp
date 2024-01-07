#include <iostream>

using namespace std;

int sumOfFactors1 = 0;
int sumOfFactors2 = 0;
int num1, num2;

int main()
{

	cout << "Enter 1st Number of Pair: ";
	cin >> num1;
	cout << "Enter 2nd Number of Pair: ";
	cin >> num2;

	for (int i = 1; (i <= num1 / 2 || i <= num2 / 2); i++) {

		if (i < num1 && num1 % i == 0)
			sumOfFactors1 += i;

		if (i < num2 && num2 % i == 0)
			sumOfFactors2 += i;

	};

	if (sumOfFactors1 == num2 && sumOfFactors2 == num1)
		cout << "YES" << endl;

	else
		cout << "NO" << endl;

	return 0;

};
