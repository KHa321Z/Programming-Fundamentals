#include <iostream>

using namespace std;

int main()
{

	int inputArray[100] = { 0 };
	int outputArray[100] = { 0 };
	int size;
	int index = 0;

	cout << "Enter Size of Array: ";
	cin >> size;
	cout << endl;

	if (size < 1 || size > 100) {
		cout << "Invalid Size! \nProgram Terminated!";
		return 0;
	}

	for (int i = 0; i < size; i++)
		do {

			cout << "Enter Element " << i << ": ";
			cin >> inputArray[i];

			if (inputArray[i] < 1)
				cout << "Invalid Input! Enter Positive Integer!" << endl;

		} while (inputArray[i] < 1);

	cout << endl;
	cout << endl;
	cout << "Input Array: [" << inputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << inputArray[i];

	cout << "]" << endl;


	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - 1; j++)
			if (inputArray[j] < inputArray[j + 1]) {
				int temp = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = temp;
			}

	for (int i = 0; i < size; i++)
		if (i % 2 == 0)
			outputArray[i] = inputArray[index];
		else
			outputArray[i] = inputArray[(size - 1) - index], index++;


	cout << "Output Array: [" << outputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << outputArray[i];

	cout << "]" << endl;

	return 0;

}