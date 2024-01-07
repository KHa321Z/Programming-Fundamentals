#include <iostream>

using namespace std;

int main()
{

	double x;
	int computations, sign = -1;
	long double power = 1, result = 0, factorial = 1;

	cout << "Enter the Value of x (in radians): ";
	cin >> x;
	cout << "Enter the Number of Computations: ";
	cin >> computations;
	cout << endl;

	result = x;
	power = x;

	for (int i = 1; i < computations; i++) {

		factorial *= (2 * i) * (2 * i + 1);
		power *= (x * x);

		result += (sign * power / factorial);
		sign *= -1;

	}

	if (computations > 0)
		cout << "sin (" << x << ") = " << result << endl;

	return 0;

}