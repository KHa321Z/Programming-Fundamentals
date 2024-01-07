#include <iostream>
using namespace std;

int year;

int main ()
{
	
	cout << "Enter a Year: ";
	cin >> year;
	cout << endl;

	if (year < 0)
		return 0;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0))
		cout << year << " is a Leap Year";

	else 
		cout << year << " is not a Leap Year";

	return 0;

}
