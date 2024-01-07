#include <iostream>

using namespace std;

int main()
{

	int h;

	cout << "Enter Height of Pattern: ";
	cin >> h;
	cout << endl;

	int height = (h / 2 + 1) / 2;
	int base = 2 * height - 1;
	int height2 = base;
	int mid = base / 2;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < base; j++)
			(j >= (mid - i) && j <= (mid + i)) ? cout << "* " : cout << "  ";

		cout << endl;

	}

	for (int i = 0; i < height2; i++) {
		for (int j = 0; j < height2; j++)
			((i <= height2 / 2 && (j <= i || j >= (height2 - i - 1))) || (i > height2 / 2 && (j <= (height2 - i - 1) || j >= i))) ? cout << "* " : cout << "  ";

		cout << endl;

	}

	for (int i = height - 1; i >= 0; i--) {
		for (int j = 0; j < base; j++)
			(j >= (mid - i) && j <= (mid + i)) ? cout << "* " : cout << "  ";

		cout << endl;

	}

	return 0;

}
