#include <iostream>
using namespace std;

float num;
float sum = 0;

int main()
{

	for (int i = 0; i < 5; i++) {
	
		cout << "Enter a Number: ";
		cin >> num;

		sum += num;
	
	};

	cout << endl;
	cout << "Average = " << sum / 5;
	cout << endl;

	return 0;

};