#include <iostream>
using namespace std;

int number, counter = 1, factorial = 1;

int main()
{

	cout << "Enter a Number: ";
	cin >> number;
	cout << endl;

	while (counter <= number) {

		factorial *= counter;
		counter++;

	};

	cout << "Factorial of " << number << " is " << factorial << endl;
	
	return 0;

};
