#include <iostream>
using namespace std;

int num, rev = 0;

int main()
{

	cout << "Enter a Number: ";
	cin >> num;
	cout << endl;

	for (int tempNum = num; tempNum > 0; rev = (rev * 10) + tempNum % 10, tempNum /= 10);

	if (num == rev)
		cout << num << " is a Palindrome" << endl;

	else
		cout << num << " is not a Palindrome" << endl;

	return 0;

}
