#include <iostream>
using namespace std;

const int SENTINEL = -1;
int num = 0, sum = 0;

int main()
{

	do {

		sum += num;
		
		cout << "Enter a Number: ";
		cin >> num;
		cout << endl;

	} while (num != SENTINEL);

	cout << "The Sum of all Numbers is " << sum << endl;

	return 0;

};