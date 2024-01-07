#include <iostream>
using namespace std;

bool flag = true;
int number, counter = 2;

int main()
{

	cout << "Enter a Number: ";
	cin >> number;
	cout << endl;

	if (number == 1) {

		cout << number << " is neither Prime nor Composite";
		return 0;

	};

	for (; (number % counter != 0) || (number != counter); counter++);

	if (number == counter)
		cout << number << " is a Prime Number";

	else
		cout << number << " is not a Prime Number";

	return 0;

};