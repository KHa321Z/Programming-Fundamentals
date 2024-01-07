#include <iostream>
using namespace std;

int code;

int main()
{
	
	cout << "Enter Item Code: ";
	cin >> code;

	if (code < 12)
		cout << "Invalid Code";

	else if (code <= 40)
		cout << "Location is Lahore";

	else if (code <= 50)
		cout << "Location is Islamabad";

	else if (code <= 70)
		cout << "Location is Karachi";

	else
		cout << "Invalid Code";

	cout << endl;

	return 0;

};