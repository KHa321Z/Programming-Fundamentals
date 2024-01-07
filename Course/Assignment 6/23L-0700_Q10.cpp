#include <iostream>
#include <string>

using namespace std;


int size1, size2;
int set1[50] = {};
int set2[50] = {};
int abscissa[2500] = {};
int ordinate[2500] = {};


void generatingCP() {

	int index = 0;

	for (int i = 0; i < size1; i++)
		for (int j = 0; j < size2; j++)
			abscissa[index] = set1[i], ordinate[index] = set2[j], index++;

}

void printingCP() {

	int index = size1 * size2;

	cout << "Cartesian Product:" << endl;
	cout << "{";

	for (int i = 0; i < index; i++)
		cout << "(" << abscissa[i] << ", " << ordinate[i] << ((i == index - 1) ? ")" : "), ");

	cout << "}";

}


int main()
{


	cout << "Enter Size of First Set: ";
	cin >> size1;
	cout << endl;

	if (size1 < 1 || size1 > 50) {
		cout << endl << "Invalid Size! Program Terminated!";
		return 0;
	}

	for (int i = 0; i < size1; i++) {

		cout << "Enter Set Elements: ";
		cin >> set1[i];

		for (int j = 0; j < i; j++)
			if (set1[i] == set1[j])
				i--, cout << "Repetition not Allowed!" << endl;
		
	}

	cout << endl;
	cout << "Enter Size of Second Set: ";
	cin >> size2;
	cout << endl;

	if (size2 < 0 || size2 > 50) {
		cout << endl << "Invalid Size! Program Terminated!";
		return 0;
	}

	for (int i = 0; i < size2; i++) {

		cout << "Enter Set Elements: ";
		cin >> set2[i];

		for (int j = 0; j < i; j++)
			if (set2[i] == set2[j])
				i--, cout << "Repetition not Allowed!" << endl;

	}

	cout << endl;
	cout << endl;

	generatingCP();
	printingCP();

	return 0;

}