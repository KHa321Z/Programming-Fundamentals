#include <iostream>
using namespace std;

int marks;

int main()
{

	cout << "Enter Marks: ";
	cin >> marks;
	cout << endl;

	if (marks > 100 || marks < 0)
		cout << "Error! INPUT is invalid" << endl;

	else if (marks >= 90)
		cout << "Your Grade is A" << endl;

	else if (marks >= 80)
		cout << "Your Grade is B" << endl;

	else if (marks >= 70)
		cout << "Your Grade is C" << endl;

	else if (marks >= 60)
		cout << "Your Grade is D" << endl;

	else if (marks >= 0)
		cout << "Your Grade is F" << endl;

	return 0;

};