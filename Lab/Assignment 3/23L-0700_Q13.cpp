#include <iostream>
using namespace std;

char alphabet;

int main()
{

	cout << "Enter an Alphabet: ";
	cin >> alphabet;
	cout << endl;

	if (alphabet >= 65 && alphabet <= 90)
		cout << "The Modified Alphabet is: " << (char)(alphabet + 32) << endl;

	else if (alphabet >= 97 && alphabet <= 122)
		cout << "The Modified Alphabet is: " << (char)(alphabet - 32) << endl;

	return 0;

};