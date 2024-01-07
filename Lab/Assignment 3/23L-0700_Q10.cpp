#include <iostream>
using namespace std;

int num;

int main()
{

	cout << "Enter a Number: ";
	cin >> num;
	cout << endl;

	if (num % 2 == 0)
		cout << num << " is an Even Number" << endl;

	else
		cout << num << " is an Odd Number" << endl;

	return 0;

};