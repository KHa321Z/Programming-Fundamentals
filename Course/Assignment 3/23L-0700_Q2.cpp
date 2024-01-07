#include <iostream>
using namespace std;

int num, a, b;

int main()
{

	cout << "Enter a Positive Integer: ";
	cin >> num;

	for (a = 0, b = 1; a < num; b += a, a = b - a);

	if (a == num)
		cout << "YES" << endl;

	else
		cout << "NO" << endl;

	return 0;

};