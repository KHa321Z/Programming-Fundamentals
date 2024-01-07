#include <iostream>

using namespace std;

void print(int printingArray[], int size) {

	for (int i = 0; i < size; i++)
		cout << printingArray[i] << " ";

}

int leader(int l[], int n[], int size) {

	int index = 0;

	for (int i = 0; i < size; i++) {
		
		bool leader = true;

		for (int j = i + 1; j < size; j++)
			if (n[i] <= n[j])
				leader = false;

		if (leader)
			l[index++] = n[i];

	}

	return (index);

}


int main()
{

	int size = 0;
	int numbers[20] = {};
	int leaders[20] = {};

	for (; size < 20; size++) {

		cout << "Enter Integer: ";
		cin >> numbers[size];

		if (numbers[size] == -99) {
			numbers[size] = 0;
			break;
		}

	}

	int size2 = leader(leaders, numbers, size);
	
	cout << endl << endl;
	cout << "Input: ";
	print(numbers, size);
	cout << endl;
	cout << "Output: ";
	print(leaders, size2);

	return 0;

}