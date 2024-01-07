#include <iostream>
#include <cstring>

using namespace std;

void replace(char stringArray[3][3], char searchWord[3], char replaceWord[3]) {

	int index;
	bool search;

	for (int i = 0; i < 3; i++) {
		index = i;
		search = true;

		for (int j = 0; j < 3; j++)
			if (stringArray[i][j] != searchWord[j])
				search = false;

		if (search)
			break;
	}

	if (search)
		for (int i = 0; i < 3; i++)
			stringArray[index][i] = replaceWord[i];

}

void reverseWord(char stringsArray[][100], int size) {

	for (int i = 0; i < size; i++, cout << endl)
		for (int j = 0; j < strlen(stringsArray[i]) / 2; j++)
			swap(stringsArray[i][j], stringsArray[i][strlen(stringsArray[i]) - j - 1]);

}

void printNames(char firstName[3][100], char lastName[3][100]) {

	cout << "Names are:" << endl;

	for (int i = 0; i < 3; i++)
		cout << firstName[i] << " " << lastName[i] << endl;

}

void concatNames(char names[3][100], char firstName[3][100], char lastName[3][100]) {

	for (int i = 0; i < 3; i++) {

		int index = 0;

		for (int j = 0; firstName[i][j] != '\0'; j++)
			names[i][index++] = firstName[i][j];

		names[i][index++] = ' ';

		for (int j = 0; lastName[i][j] != '\0'; j++)
			names[i][index++] = lastName[i][j];

	}

	cout << "Names are:" << endl;

	for (int i = 0; i < 3; i++, cout << endl)
		cout << names[i];

}

int main()
{

	int choice = 0;
	int Qn;

	do
	{
		cout << "Please Select QN: 1, 2, 3, 4, 5" << endl;
		cout << "QN: ";
		cin >> Qn;
		cout << endl << endl;

		if (Qn == 1) {

			int matA[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			int matB[3][3] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
			int matC[3][3] = {};

			cout << "Resultant Matrix:" << endl;

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					for (int k = 0; k < 3; k++)
						matC[i][j] += matA[i][k] * matB[k][j];

					cout << matC[i][j] << '\t';
				}

				cout << endl;
			}


		} else if (Qn == 2) {


			char words[3][3] = {};
			char searchWord[3] = {};
			char replaceWord[3] = {};

			for (int i = 0; i < 3; i++)
				cout << "Enter Word " << i + 1 << ": ", cin >> words[i];

			cout << endl;
			cout << "Enter Search Word: ";
			cin >> searchWord;
			cout << "Enter Replace Word: ";
			cin >> replaceWord;

			replace(words, searchWord, replaceWord);

			cout << endl << "The New Words are:" << endl;
			for (int i = 0; i < 3; i++, cout << endl)
				for (int j = 0; j < 3; j++)
					cout << words[i][j];


		} else if (Qn == 3) {


			char names[3][100] = {};
			char firstNames[3][100] = {};
			char lastNames[3][100] = {};

			for (int i = 0; i < 3; i++) {
				cout << "Name " << i + 1 << endl;
				cout << "First Name: ";
				cin >> firstNames[i];
				cout << "Last Name: ";
				cin >> lastNames[i];
				cout << endl;
			}

			cout << endl;
			printNames(firstNames, lastNames);
			cout << endl << endl;
			concatNames(names, firstNames, lastNames);
			cout << endl;


		} else if (Qn == 4) {


			int size = 0;
			char sentence[50][100] = {};

			cout << endl << "Enter Sentence: ";
			cin.ignore();

			while (cin.peek() != '\n')
				cin >> sentence[size++];

			reverseWord(sentence, size);

			cout << "Reverse Sentence: ";

			for (int i = 0; i < 5; i++)
				cout << sentence[i] << " ";

			cout << endl << endl;


		} else if (Qn == 5) {


			int index = 0;
			char wordArray[100][100] = {};

			cin.ignore();
			cout << "Enter String: ";
			while (cin.peek() != '\n')
				cin >> wordArray[index++];

			cout << endl << "The words are:" << endl;
			for (int i = 0; i < index; i++)
				cout << wordArray[i] << endl;


		} else {

			cout << "Wrong Question Number!" << endl << endl;

		}

		cout << endl;
		cout << "Press 1 to Re-run this Programme";
		cout << endl << "Press any other key to Exit: ";
		cin >> choice;
		cout << endl << endl;

	} while (choice == 1);

	return 0;

}
