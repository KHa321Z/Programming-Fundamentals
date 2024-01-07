#include <iostream>
using namespace std;

int num, sum = 0, product = 1;

int main()
{

	cout << "Enter your Number: ";
	cin >> num;
	cout << endl;

	if (num > 999999 || num < 100000)
		return 0;
	
	for (; num > 0; sum += num % 10, product *= num % 10, num /= 10);

	cout << "Sum = " << sum << endl;
	cout << "Product = " << product << endl;

	return 0;

}
