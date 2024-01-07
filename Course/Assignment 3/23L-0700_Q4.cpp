#include <iostream>
using namespace std;

int num;
int counter = 0;

int main()
{

	cout << "Enter a Positive Integer: ";
	cin >> num;
	cout << endl;

	if (num < 1) {
		cout << "Invalid Input" << endl;
		return 0;
	};

	for (; num != 1; counter++)

		if (num % 2 == 0)
			num /= 2;

		else
			num = num * 3 + 1;

	cout << "It took " << counter << " steps to reach 1" << endl;

	return 0;

};