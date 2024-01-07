#include <iostream>

using namespace std;


int digitSeparator(int number, int index) {
	int d = pow(10, index);
	return (number / d) % 10;
}
 
void countSort(int inputArray[], int outputArray[], int keys[], int size) {

	int countArray[10] = {};

	for (int i = 0; i < size; i++)
		countArray[inputArray[i]]++;

	for (int i = 1; i < 10; i++)
		countArray[i] += countArray[i - 1];

	for (int i = size - 1; i >= 0; i--)
		outputArray[--countArray[inputArray[i]]] = keys[i];

}

void radixSort(int n[], int key[], int updatedKey[], int size) {

	int index = 0;
	int place = 10;
	bool kCompleted = false;

	for (int i = 0; i < size; i++)
		key[i] = i;

	while (!kCompleted) {

		kCompleted = true;
		int k[100] = {};

		for (int i = 0; i < size; i++) {
			
			if ((n[i] / place) != 0)
				kCompleted = false;
				
			k[i] = digitSeparator(n[key[i]], index);

		}

		countSort(k, updatedKey, key, size);

		for (int i = 0; i < size; i++)
			key[i] = updatedKey[i];

		index++;
		place *= 10;

	}

	for (int i = 0; i < size; i++)
		updatedKey[i] = n[key[i]];

}

int main()
{

	int size;
	int n[100] = {};
	int key[100] = {};
	int updatedKey[100] = {};

	cout << "Enter Number of Keys: ";
	cin >> size;

	cout << "Enter Keys: ";

	for (int i = 0; i < size; i++)
		cin >> n[i];

	radixSort(n, key, updatedKey, size);

	cout << endl;
	cout << "Sorted Keys: ";

	for (int i = 0; i < size; i++)
		cout << updatedKey[i] << " ";

	return 0;

}