#include<iostream>

using namespace std;

int main()
{

	int i, startingNumber, endingNumber;
	bool comma = true;

	cout << "Enter Starting Number: ";
	cin >> startingNumber;
	cout << "Enter Ending Number: ";
	cin >> endingNumber;
	cout << endl;

	cout << "Prime Numbers are: ";

	for (; (startingNumber <= endingNumber); startingNumber++) {

		if (startingNumber < 2)
			continue;

		for (i = 2; (i * i) <= startingNumber; i++)
			if (startingNumber % i == 0)
				break;

		if ((startingNumber != 2) && (startingNumber % i == 0))
			continue;

		(comma) ? comma = false, cout << startingNumber : cout << ", " << startingNumber;

	}
	
	return 0;

}