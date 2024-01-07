#include <iostream>

using namespace std;

int main()
{

	int inputArray[100] = { 0 };
	int outputArray[100] = { 0 };
	int size;

	cout << "Enter Size of Arrays: ";
	cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << "Enter Element " << i << " of Array 1: ";
		cin >> inputArray[i];
	}

	if (size < 1 || size > 100) {
		cout << "Invalid Size! \nProgram Terminated!";
		return 0;
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << "Enter Element " << i << " of Array 2: ";
		cin >> outputArray[i];
	}

	cout << endl;
	cout << "Array1: [" << inputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << inputArray[i];
	
	cout << "]" << endl;

	cout << "Array1: [" << outputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << outputArray[i];

	cout << "]" << endl << endl;

	for (int i = 0; i < size; i++)

		if (inputArray[i] != outputArray[size - (i + 1)]) {

			cout << "Array1 is not reverse of Array2";
			return 0;

		}

	cout << "Array1 is reverse of Array2";

	return 0;

}