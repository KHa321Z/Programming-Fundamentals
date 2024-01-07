#include <iostream>

using namespace std;

void count(int n) {

	int digit, even = 0, odd = 0;

	while (n > 0) {

		digit = n % 10;
		(digit % 2 == 0) ? even++ : odd++;
		n /= 10;

	}


	cout << "Odd Digits = " << odd << endl;
	cout << "Even Digits = " << even << endl;

}

int reverse(int n) {

	int r = 0;

	while (n > 0)
		r = (r * 10) + (n % 10), n /= 10;

	return r;

}

int main()
{

	int number;

	cout << "Enter a Non-Negative Number: ";
	cin >> number;
	cout << endl;

	if (number >= 0) {

		count(number);

		cout << endl;
		cout << "Reverse of " << number << " = " << reverse(number);

	}

	return 0;

}
