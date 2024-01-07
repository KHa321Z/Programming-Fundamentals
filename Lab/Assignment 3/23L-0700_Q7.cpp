#include <iostream>
using namespace std;

int limit;

int main()
{

	cout << "Enter Last Number to Multiply 2 with: ";
	cin >> limit;
	cout << endl;

	for (int i = 0; i <= limit; i++)
		cout << "2 x " << i << " = " << 2 * i << endl;

	return 0;

};