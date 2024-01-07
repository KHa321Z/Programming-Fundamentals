#include <iostream>
using namespace std;

int num, sum = 0;

int main()
{

	cout << "Enter a Number: ";
	cin >> num;
	cout << endl;

	for (; num > 0; sum += num % 10, num /= 10);

	cout << "Sum = " << sum << endl;

	return 0;

}
