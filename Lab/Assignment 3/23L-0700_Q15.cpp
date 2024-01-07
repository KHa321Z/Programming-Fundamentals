#include <iostream>
using namespace std;

float a, b, c, s;
float area;

int main()
{

	cout << "Enter Length of 1st Side = a = ";
	cin >> a;
	cout << "Enter Length of 2nd Side = b = ";
	cin >> b;
	cout << "Enter Length of 3rd Side = c = ";
	cin >> c;
	cout << endl;

	if ((a > 0 && b > 0 && c > 0) && ((a + b > c) && (a + c > b) && (b + c > a))) {
	
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));

		cout << "Area of Triangle = " << area;
		cout << endl;

	} else
		cout << "Invalid Lengths Entered!" << endl;

	return 0;

};