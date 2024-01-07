#include <iostream>

using namespace std;

int main()
{

	int inputArray[100] = { 0 };
	int outputArray[100] = { 0 };
	int size;
	
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
	cout << endl;
	cout << "Input Array: [" << inputArray[0];
	
	for (int i = 1; i < size; i++)
		cout << ", " << inputArray[i];
	
	cout << "]" << endl;
	
	for (int i = 0; i < size; i++) {

		if (i - 2 >= 0)
			outputArray[i] = inputArray[i - 2];
		else
			outputArray[i] = inputArray[size + i - 2];

		if (i + 2 <= size - 1)
			outputArray[i] *= inputArray[i + 2];
		else
			outputArray[i] *= inputArray[i + 2 - size];

	}
	
	
	cout << "Output Array: [" << outputArray[0];
	
	for (int i = 1; i < size; i++)
		cout << ", " << outputArray[i];
	
	cout << "]" << endl;
	
	return 0;

}