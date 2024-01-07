#include <iostream>

using namespace std;

void selectionSort(int unsortedArray[], int size) {

	for (int i = 1; i < size; i++) {

		int current = unsortedArray[i];
		int j = i - 1;

		while (j >= 0 && unsortedArray[j] > current)
			unsortedArray[j + 1] = unsortedArray[j], j--;

		unsortedArray[j + 1] = current;

	}

}

bool binarySearch(int sortedArray[], int find, int end, int start = 0) {

	if (end < start)
		return 0;

	int mid = (start + end) / 2;

	if (find < sortedArray[mid])
		return (binarySearch(sortedArray, find, mid - 1, start));

	else if (find > sortedArray[mid])
		return (binarySearch(sortedArray, find, end, mid + 1));

	else
		return 1;

}

int main()
{

	int size, number;
	int sortedArray[100] = {};

	cout << "Enter Size of Array: ";
	cin >> size;

	if (size < 0 || size > 100) {
		cout << endl << "Invalid Size! Program Terminated!";
		return 0;
	}

	cout << "Enter Array Elements: ";

	for (int i = 0; i < size; i++)
		cin >> sortedArray[i];

	cout << "Enter Element to Search: ";
	cin >> number;

	selectionSort(sortedArray, size);

	cout << endl;
	cout << "Sorted Array: ";

	for (int i = 0; i < size; i++)
		cout << sortedArray[i] << " ";

	cout << endl;
	cout << number;
	(binarySearch(sortedArray, number, size)) ? cout << " is found in the array" : cout << " is not found in the array";

	return 0;

}