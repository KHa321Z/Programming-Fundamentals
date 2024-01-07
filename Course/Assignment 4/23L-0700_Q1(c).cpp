#include <iostream>

using namespace std;

int main()
{

	int height, base, mid;
	int startingValue, k, value;

	cout << "Enter Number of Terms: ";
	cin >> height;
	cout << endl;

	base = 4 * height - 3;
	mid = base / 2;

	for (int i = 0; i < height; i++) {

		startingValue = mid - (2 * i);
		k = 0;
		value = 1;

		for (int j = 0; j < base; j++) {
			
			if (startingValue == j) {
				cout << value;
				if (i != k)
					value = value * (i - k) / (k + 1), k++, startingValue += 4;
			}
			else if (!(j == (startingValue - 1) && (value > 9)))
				cout << " ";
			
		}

		cout << endl;

	}

	return 0;

}