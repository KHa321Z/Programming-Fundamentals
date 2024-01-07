#include <iostream>
using namespace std;

int radius;

int main()
{

	cout << "Enter Radius of Circle: ";
	cin >> radius;
	cout << endl;

	if (radius >= 0)
		cout << "Area = " << 3.141 * radius * radius << endl;

	return 0;

};