#include <iostream>

using namespace std;

bool isPrime(int n) {

	if (n < 2)
		return (false);
	
	for (int i = 2; (i * i) <= n; i++)
		if (n % i == 0)
			return (false);
	
	return (true);

}

bool isSemiPrime(int n) {

	if (n < 4)
		return (false);
	
	for (int i = 2; (i * i) <= n; i++)
		if (n % i == 0)
			return (isPrime(i) && isPrime(n / i));
			
	return (false);

}

int main()
{

	int number;
	
	cout << "Enter a Positive Number: ";
	cin >> number;

	if (isSemiPrime(number))
		cout << number << " is Semi-Prime";
	else
		cout << number << " is not Semi-Prime";

	return 0;

}