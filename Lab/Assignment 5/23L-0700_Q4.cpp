#include <iostream>
using namespace std;

int age, salary;

int main ()
{
	
	cout << "Enter your Age: ";
	cin >> age;
	cout << "Enter your Salary: ";
	cin >> salary;
	cout << endl;

	if (age <= 0 || salary < 0)
		return 0;

	else if ((age < 25 && salary > 5000) || (age > 40 && salary < 3000))
		cout << "Special Category";

	else
		cout << "You Basic";

	return 0;

}
