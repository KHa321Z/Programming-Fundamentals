#include <iostream>
#include <string>

using namespace std;

void bubbleSort(int dataArray[], int size) {

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - 1 - i; j++)
			if (dataArray[j] > dataArray[j + 1])
				swap(dataArray[j], dataArray[j + 1]);

}


int main()
{

	int size;
	int arr[100] = {};

	cout << "Enter Size of Array: ";
	cin >> size;
	cout << endl;

	if (size < 1 || size > 100) {
		cout << "Invalid Size! Program Terminated!";
		return 0;
	}

	for (int i = 0; i < size; i++) {
		cout << "Enter Array Element[" << i << "]: ";
		cin >> arr[i];
	}

	bubbleSort(arr, size);

	cout << endl;
	cout << "Median = ";
	(size % 2 != 0) ? cout << arr[size / 2] : cout << (arr[size / 2] + arr[size / 2 - 1]) / 2.0;

	return 0;

}