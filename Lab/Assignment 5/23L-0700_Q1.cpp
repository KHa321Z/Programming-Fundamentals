#include <iostream>
using namespace std;

int num, bigger, smaller;
int counter;

int main ()
{
	
	for (int i = 0; i < 3; i++) {

		cout << "Enter a Number: ";
		cin >> num;

		if (num % 2 == 0)
			counter++;
		else
			counter--;

		if (i == 0)
			bigger = num, smaller = num;

		if (bigger < num)
			bigger = num;

		if (smaller > num)
			smaller = num;

	}
	
	if (counter > 0)
		cout << endl << bigger;

	else
		cout << endl <<smaller;

	return 0;

}
