#include <iostream>

using namespace std;

int main()
{

	int inputArray[100] = {};
	int outputArray[100] = {};
	int size, count = 0, index = 0;
	int frequency[100] = {};

	cout << "Enter Size of Array: ";
	cin >> size;
	cout << endl;

	if (size < 1 || size > 100) {
		cout << "Invalid Size! \nProgram Terminated!";
		return 0;
	}

	int tempSize = size;

	for (int i = 0; i < size; i++) {
		cout << "Enter Element " << i << ": ";
		cin >> inputArray[i];
	}

	cout << endl;
	cout << endl;
	cout << "Input Array: [" << inputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << inputArray[i];

	cout << "]" << endl << endl;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - 1; j++)
			if (inputArray[j] > inputArray[j + 1]) {

				int temp = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = temp;

			}

	for (int i = 0; i < tempSize; i++)
		for (int j = i; j <= tempSize; j++)
			if (inputArray[i] == inputArray[j] && j != tempSize)
				count++;

			else {

				frequency[i] = count;
				count = 0;

				for (int k = i + 1; k < tempSize - (j - i - 1); k++)
					inputArray[k] = inputArray[(k - 1) + j - i];

				tempSize -= j - i - 1;

				break;

			}

	for (int i = 0; i < tempSize; i++)
		for (int j = 0; j < tempSize - 1; j++)
			if (frequency[j] < frequency[j + 1]) {

				int temp1 = frequency[j];
				frequency[j] = frequency[j + 1];
				frequency[j + 1] = temp1;

				int temp2 = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = temp2;

			}

	for (int i = 0; i < tempSize; i++)
		for (int j = 0; j < frequency[i]; j++)
			outputArray[index++] = inputArray[i];


	cout << "Output Array: [" << outputArray[0];

	for (int i = 1; i < size; i++)
		cout << ", " << outputArray[i];

	cout << "]" << endl;

	return 0;

}
