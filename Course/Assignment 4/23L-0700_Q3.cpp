#include <iostream>

using namespace std;

int main()
{

	int num;
	int i = 1, j = i + 1;

	cout << "Enter a Number: ";
	cin >> num;

	cout << endl;
	cout << "Unique Combinations are:";
	cout << endl;

	for (; i < (num - i - j); i++)
		for (j = i + 1; j < (num - i - j); j++)
			cout << i << " + " << j << " + " << (num - i - j) << " = " << i + j + (num - i - j) << endl;

	return 0;

}