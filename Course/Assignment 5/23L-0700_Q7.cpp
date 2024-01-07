#include <iostream>

using namespace std;

int main()
{

	int inputArray[200] = { 0 };
	int outputArray[100] = { 0 };
	int size, count = 0, index = 0;
	int frequency[100] = { 0 };
	int maxFreq;

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

	for (int i = 1, j = 0; i <= 10; i++) {

		for (j = 0; j < tempSize; j++)
			if (inputArray[j] == i)
				break;

		if (inputArray[j] != i && j == tempSize)
			inputArray[tempSize] = i, frequency[tempSize++] = 0;

	}

	for (int i = 0; i < tempSize; i++)
		for (int j = 0; j < tempSize - 1; j++)
			if (inputArray[j] > inputArray[j + 1]) {

				int temp1 = frequency[j];
				frequency[j] = frequency[j + 1];
				frequency[j + 1] = temp1;

				int temp2 = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = temp2;

			}

	maxFreq = frequency[0];

	for (int i = 0; i < 10; i++)
		if (maxFreq < frequency[i])
			maxFreq = frequency[i];


	cout << "Number Array: [" << inputArray[0];

	for (int i = 1; i < tempSize; i++)
		cout << ", " << inputArray[i];

	cout << "]" << endl;

	cout << "Frequency Array: [" << frequency[0];

	for (int i = 1; i < tempSize; i++)
		cout << ", " << frequency[i];

	cout << "]" << endl;

	cout << endl;
	cout << "Histogram: (Y-Axis: Frequency)";
	cout << endl;
	cout << endl;

	for (int i = maxFreq; i >= 0; i--) {
		
		cout << "\t";

		for (int j = 0; j < 10; j++)
			((i == 0) ? cout << "   " << inputArray[j] : ((frequency[j] >= (i)) ? cout << "   *" : cout << "    "));

		cout << endl;

	}

	return 0;

}