#include <iostream>
using namespace std;

int n;

int main ()
{
	
	cout << "Enter Ending Number: ";
	cin >> n;

	if (n < 1)
		return 0;

	cout << endl;
	cout << "0";

	for (int i = 1, a = 1, b = 1; i < n; i++, b += a, a = b - a)
		cout << ", " << a;

	return 0;

}
