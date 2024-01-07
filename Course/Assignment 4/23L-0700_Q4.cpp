#include <iostream>

using namespace std;

int main()
{

	int size;

	cout << "Enter a Number: ";
	cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			if (((i == 0) && (j == 0)) || ((i == 0) && (j == size - 1)) || ((i == size - 1) && (j == 0)) || ((i == size - 1) && (j == size - 1)))
				cout << "+";

			else if (i == 0)
				cout << "/\\";

			else if (i == size - 1)
				cout << "\\/";

			else if ((j == 0) || (j == size - 1))
				cout << "|";

			else
				cout << "  ";

		}

		cout << endl;

	}

	return 0;

}