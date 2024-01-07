#include <iostream>

using namespace std;

int main()
{

	int inputArray[100] = { 0 };
	int outputArray[100] = { 0 };
	int size;
	int index;

	cout << "Enter Size of Array: ";
	cin >> size;
	cout << endl;

	if (size < 1 || size > 100) {
		cout << "Invalid Size! \nProgram Terminated!";
		return 0;
	}

	for (int i = 0; i < size; i++) {
		cout << "Enter Element " << i << ": ";
		cin >> inputArray[i];
	}

	cout << endl;

	do {

		cout << "Enter Rotation Index: ";
		cin >> index;

		if (index < 0)
			cout << "Invaild Input! Please Enter Non-Negative Number!" << endl;

	} while (index < 0);

	cout << endl;

	cout << "Input Array: [" << inputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << inputArray[i];

	cout << "]" << endl;

	for (int i = 0; i < size; i++) {
		outputArray[i] = inputArray[(i + index) % size];
	}


	cout << "Output Array: [" << outputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << outputArray[i];

	cout << "]" << endl;

	return 0;

}