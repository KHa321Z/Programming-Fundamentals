#include <iostream>
using namespace std;

int year;

int main()
{

	cout << "Enter a Year: ";
	cin >> year;
	cout << endl;

	if (year < 0)
		cout << "Invalid Year Entered!" << endl;

	else if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 4 == 0) && (year % 400 == 0)))
		cout << year << " is a Leap Year" << endl;

	else
		cout << year << " is not a Leap Year" << endl;

	return 0;

};