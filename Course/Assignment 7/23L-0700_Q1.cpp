#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	bool found = false;
	int rowIndex, colIndex;
	int size;
	char targetSubString[10] = {};
	char subStrings[10][10] = {};

	cout << "Enter Number of Strings (>= 10): ";
	cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++)
		cout << "Enter String " << i << " (>= 10 characters): ", cin >> subStrings[i];

	cout << endl;
	cout << "Enter Substring (>= 10 characters): ";
	cin >> targetSubString;

	for (int i = 0; !found && (i < 10 - strlen(targetSubString)); i++) {

		rowIndex = 0;
		colIndex = 0;

		for (int j = 0; !found && (j < 10 - strlen(targetSubString)); j++) {

			found = true;

			for (int k = 0; k < strlen(targetSubString); k++)
				if (subStrings[i + k][j + k] != targetSubString[k])
					found = false;

			if (colIndex == strlen(targetSubString) || rowIndex == strlen(targetSubString))
				found = true;

			if (subStrings[i][j] != targetSubString[rowIndex++])
				rowIndex = 0;

			if (subStrings[j][i] != targetSubString[colIndex++])
				colIndex = 0;

		}

	}

	cout << endl;
	cout << "Substring Exists: ";
	cout << ((found) ? "true" : "false");
	cout << endl;

	return 0;

}
