#include <iostream>

using namespace std;

int main() {

	int setA[100] = { 0 };
	int setB[100] = { 0 };
	int setC[100] = { 0 };
	int sizeA, sizeB, sizeC;
	char choice = ' ', choice2 = ' ';
	bool flag;

	cout << "Enter Size of Array1: ";
	cin >> sizeA;
	cout << endl;

	if (sizeA < 0) {
		cout << "Invalid Size! Program Terminated!" << endl;
		return 0;
	}

	for (int i = 0; i < sizeA; i++) {
		cout << "Enter Element[" << i << "] of Set A: ";
		cin >> setA[i];

		for (int j = 0; j < i; j++)
			if (setA[i] == setA[j]) {
				cout << "Repetition of Elements not Allowed!" << endl;
				i--;
				break;
			}

	}

	cout << endl;
	cout << endl;
	cout << "Enter Size of Array2: ";
	cin >> sizeB;
	cout << endl;

	if (sizeB < 0) {
		cout << "Invalid Size! Program Terminated!" << endl;
		return 0;
	}

	for (int i = 0; i < sizeB; i++) {
		cout << "Enter Array2[" << i << "]: ";
		cin >> setB[i];

		for (int j = 0; j < i; j++)
			if (setB[i] == setB[j]) {
				cout << "Repetition of Elements not Allowed!" << endl;
				i--;
				break;
			}
	}

	for (int i = 0; i < sizeA || i < sizeB; i++)
		for (int j = 0; j < (sizeA - 1) || j < (sizeB - 1); j++) {
			if (j < (sizeA - 1) && setA[j] > setA[j + 1]) {

				int temp1 = setA[j];
				setA[j] = setA[j + 1];
				setA[j + 1] = temp1;

			}

			if (j < (sizeB - 1) && setB[j] > setB[j + 1]) {

				int temp2 = setB[j];
				setB[j] = setB[j + 1];
				setB[j + 1] = temp2;

			}
		}

	while (choice != 'Q' && choice != 'q') {

		sizeC = 0;
		flag = false;

		cout << endl;
		cout << endl;

		if (sizeA > 0) {

			cout << "Set A: {" << setA[0];

			for (int i = 1; i < sizeA; i++)
				cout << ", " << setA[i];

			cout << "}" << endl;

		}
		else cout << "Set A: {}" << endl;

		if (sizeB > 0) {

			cout << "Set B: {" << setB[0];

			for (int i = 1; i < sizeB; i++)
				cout << ", " << setB[i];

			cout << "}" << endl;

		}
		else cout << "Set B: {}" << endl;

		cout << endl;
		cout << "Enter Respective Character for given Operation:" << endl;
		cout << "\t Press U for Union of Sets" << endl;
		cout << "\t Press I for Intersection of Sets" << endl;
		cout << "\t Press S for Subtraction of Sets" << endl;
		cout << "\t Press E for Equality of Sets" << endl;
		cout << "\t Press D for Disjoint of Sets" << endl;
		cout << "\t Press P for Proper Subsets" << endl;
		cout << "\t Press Q to Quit" << endl;
		cout << endl;
		cout << "Enter your Choice: ";
		cin >> choice;
		cout << endl;
		cout << endl;

		switch (choice) {

			case 'U':
			case 'u':
				sizeC = sizeA;

				for (int i = 0; i < sizeA; i++)
					setC[i] = setA[i];

				for (int i = 0, j = 0; i < sizeB; i++) {
					for (j = 0; j < sizeA; j++)
						if (setB[i] == setA[j])
							break;

					if (setB[i] != setA[j - 1] && j == sizeA)
						setC[sizeC++] = setB[i];
				}

				if (sizeC > 0) {

					cout << "Resultant Set: [" << setC[0];

					for (int i = 1; i < sizeC; i++)
						cout << ", " << setC[i];

					cout << "]" << endl;

				}
				else cout << "Resultant Set: []" << endl;

				break;

			case 'I':
			case 'i':
				for (int i = 0, j = 0; i < sizeA; i++)
					for (j = 0; j < sizeB; j++)
						if (setA[i] == setB[j]) {
							setC[sizeC++] = setA[i];
							break;
						}

				if (sizeC > 0) {

					cout << "Resultant Set: [" << setC[0];

					for (int i = 1; i < sizeC; i++)
						cout << ", " << setC[i];

					cout << "]" << endl;

				}
				else cout << "Resultant Set: []" << endl;

				break;

			case 'S':
			case 's':
				do {

					cout << "Select Option:" << endl;
					cout << "\t 1. A - B" << endl;
					cout << "\t 2. B - A" << endl;
					cout << endl;
					cout << "Option: ";
					cin >> choice2;
					cout << endl;

					if (choice2 == '1')
						for (int i = 0, j = 0; i < sizeA; i++) {
							for (j = 0; j < sizeB; j++)
								if (setA[i] == setB[j])
									break;

							if (setA[i] != setB[j - 1] && j == sizeB)
								setC[sizeC++] = setA[i];
						}

					else if (choice2 == '2')
						for (int i = 0, j = 0; i < sizeB; i++) {
							for (j = 0; j < sizeA; j++)
								if (setB[i] == setA[j])
									break;

							if (setB[i] != setA[j - 1] && j == sizeA)
								setC[sizeC++] = setB[i];
						}

					else
						cout << "Invalid Option Chosen!" << endl;

				} while (choice2 != '1' && choice2 != '2');

				if (sizeC > 0) {

					cout << "Resultant Set: [" << setC[0];

					for (int i = 1; i < sizeC; i++)
						cout << ", " << setC[i];

					cout << "]" << endl;

				}
				else cout << "Resultant Set: []" << endl;

				break;

			case 'E':
			case 'e':
				if (sizeA != sizeB) {
					cout << "Set A != Set B" << endl;
					break;
				}

				for (int i = 0; i < sizeA; i++)
					if (setA[i] != setB[i]) {
						flag = true;
						cout << "Set A != Set B" << endl;
						break;
					}

				if (!flag)
					cout << "Set A == Set B" << endl;

				break;

			case 'D':
			case 'd':
				for (int i = 0; i < sizeA; i++)
					for (int j = 0; j < sizeB; j++)
						if (!flag && setA[i] == setB[j]) {
							flag = true;
							cout << "Set A and B are not Disjoint" << endl;
							break;
						}

				if (!flag)
					cout << "Set A and B are Disjoint" << endl;
				break;

			case 'P':
			case 'p':
				do {

					cout << "Select Option:" << endl;
					cout << "\t 1. B is a Subset of A" << endl;
					cout << "\t 2. A is a Subset of B" << endl;
					cout << endl;
					cout << "Option: ";
					cin >> choice2;
					cout << endl;

					if (choice2 == '1') {
					
						if (sizeA <= sizeB) {
							cout << "B is not a Proper Subset of A" << endl;
							break;
						}

						for (int i = 0, j = 0; i < sizeB; i++) {

							for (j = 0; j < sizeA; j++)
								if (setA[j] == setB[i])
									break;

							if (j == sizeB && setA[j] != setB[i]) {
								flag = true;
								break;
							}

						}

						cout << ((flag) ? "B is not a Proper Subset of A" : "B is a Proper Subset of A") << endl;
						break;

					} else if (choice2 == '2') {
					
						if (sizeB <= sizeA) {
							cout << "A is not a Proper Subset of B" << endl;
							break;
						}

						for (int i = 0, j = 0; i < sizeA; i++) {

							for (j = 0; j < sizeB; j++)
								if (setB[j] == setA[i])
									break;

							if (j == sizeA && setB[j] != setA[i])
								break;

						}

						cout << ((flag) ? "A is not a Proper Subset of B" : "A is a Proper Subset of B") << endl;
						break;
					
					} else
						cout << "Invalid Option Chosen!" << endl;

				} while (choice2 != '1' && choice2 != '2');

				break;

			case 'Q':
			case 'q':
				cout << "Thank for Using this Code!";
				break;

			default:
				cout << "Invalid Choice Inputted!";
				cout << "Enter Choice Again!";
				cout << endl;
				cout << endl;

		}

	}

	return 0;

}