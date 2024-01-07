#include <iostream>
#include <cstring>

using namespace std;

long long int toBinary (int number) {

	long long int binary = 0;
	long long int placer = 1;

	while (number > 0)
	{
		binary += (number % 2) * placer;
		placer *= 10;
		number /= 2;
	}

	return (binary);

}

long long int toOctal (int number) {

	long long int octal = 0;
	long long int placer = 1;

	while (number > 0)
	{
		octal += (number % 8) * placer;
		placer *= 10;
		number /= 8;
	}

	return (octal);

}

int main()
{

	int decimal;

	cout << "Enter Decimal Number: ";
	cin >> decimal;
	cout << endl;
	cout << "Binary Equivalent of " << decimal << " = " << toBinary(decimal) << endl;
	cout << "Octal Equivalent of " << decimal << " = " << toOctal(decimal);

	return 0;

}