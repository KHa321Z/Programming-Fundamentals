#include <iostream>

using namespace std;

int main()
{

	int num1[100] = { 0 };
	int num2[100] = { 0 };
	int result[200] = { 0 };
	char digit, choice = ' ', choice2 = ' ';
	int size1 = 0, size2 = 0, size3 = 0;
	int sum = 0, diff = 0, product = 0, carry = 0, index = 0;
	bool shift, flag, bigger1;

	cout << "Enter First Number (add a non-digit at the end): ";

	while (true) {

		cin >> digit;

		if (digit < 48 || digit > 57)
			break;

		num1[size1++] = digit - '0';

	}

	cout << "Enter Second Number (add a non-digit at the end): ";

	while (true) {

		cin >> digit;

		if (digit < 48 || digit > 57)
			break;

		num2[size2++] = digit - '0';

	}

	while (choice != 'Q' && choice != 'q') {

		index = 0;
		carry = 0;
		shift = false;
		flag = false;
		bigger1 = true;


		cout << endl;
		cout << endl;

		if (size1 > 0) {

			cout << "First Number: [" << num1[0];

			for (int i = 1; i < size1; i++)
				cout << ", " << num1[i];

			cout << "]" << endl;

		}
		else cout << "First Number: []" << endl;

		if (size2 > 0) {

			cout << "Second Number: [" << num2[0];

			for (int i = 1; i < size2; i++)
				cout << ", " << num2[i];

			cout << "]" << endl;

		}
		else cout << "Second Number: []" << endl;

		cout << endl;
		cout << "Enter Respective Character for given Operation:" << endl;
		cout << "\t Press E for Equality of Numbers" << endl;
		cout << "\t Press A for Addition of Numbers" << endl;
		cout << "\t Press S for Subtraction of Numbers" << endl;
		cout << "\t Press M for Multiplication of Numbers" << endl;
		cout << "\t Press Q to Quit" << endl;
		cout << endl;
		cout << "Enter your Choice: ";
		cin >> choice;
		cout << endl;
		cout << endl;

		switch (choice) {

		case 'E':
		case 'e':
			if (size1 != size2)
				flag = true;

			else 
				for (int i = 0; i < size1; i++)
					if (num1[i] != num2[i])
						flag = true;

			cout << "Equality:" << endl;

			for (int i = 0; i < size1; i++)
				cout << num1[i];

			cout << ((flag) ? " != " : " == ");

			for (int i = 0; i < size2; i++)
				cout << num2[i];

			cout << endl;

			break;

		case 'A':
		case 'a':
			size3 = (size1 > size2) ? size1 + 1 : size2 + 1;

			for (int i = 1; i <= size3; i++) {

				sum = (((size1 - i) >= 0) ? num1[size1 - i] : 0) + (((size2 - i) >= 0) ? num2[size2 - i] : 0) + carry;
				result[size3 - i] = sum % 10;
				carry = sum / 10;

			}

			if (result[0] == 0) {
				size3--;
				for (int i = 0; i < size3; i++)
					result[i] = result[i + 1];
			}

			cout << "Resultant Array = [" << result[0];

			for (int i = 1; i < size3; i++)
				cout << ", " << result[i];

			cout << "]" << endl << endl;

			cout << "Sum:" << endl;

			for (int i = 0; i < size1; i++)
				cout << num1[i];

			cout << " + ";

			for (int i = 0; i < size2; i++)
				cout << num2[i];

			cout << " = ";

			for (int i = 0; i < size3; i++)
				cout << result[i];

			cout << endl;
			
			break;

		case 'S':
		case 's':
			if (size1 < size2)
				bigger1 = false;

			else if (size1 == size2)
				for (int i = 0; i < size1; i++)
					if (num1[i] < num2[i])
						bigger1 = false;

			do {

				cout << "Select Option:" << endl;
				cout << "\t 1. A - B" << endl;
				cout << "\t 2. B - A" << endl;
				cout << endl;
				cout << "Option: ";
				cin >> choice2;
				cout << endl;

				if ((choice2 == '1' && bigger1) || choice2 == '2' && bigger1) {

					size3 = size1;

					for (int i = 1; i <= size3; i++) {

						diff = (((size1 - i) >= 0) ? num1[size1 - i] : 0) - (((size2 - i) >= 0) ? num2[size2 - i] : 0) - carry;
						(diff < 0) ? diff += 10, carry = 1 : carry = 0;
						result[size3 - i] = diff;

					}

				} else if ((choice2 == '1' && !bigger1) || (choice2 == '2' && !bigger1)) {

					size3 = size2;

					for (int i = 1; i <= size3; i++) {

						diff = (((size2 - i) >= 0) ? num2[size2 - i] : 0) - (((size1 - i) >= 0) ? num1[size1 - i] : 0) - carry;
						(diff < 0) ? diff += 10, carry = 1 : carry = 0;
						result[size3 - i] = diff;

					}

				} else
					cout << "Invalid Option Chosen!" << endl;

			} while (choice2 != '1' && choice2 != '2');
			

			if (result[0] == 0)
				for (int i = 0; i < size3; i++)
					if (result[i] == 0 && !shift)
						index++;
					else
						shift = true, result[i - index] = result[i];

			size3 -= index;

			if ((choice2 == '1' && !bigger1) || (choice2 == '2' && bigger1))
				result[0] *= -1;

			cout << "Resultant Array = [" << result[0];

			for (int i = 1; i < size3; i++)
				cout << ", " << result[i];

			cout << "]" << endl << endl;

			cout << "Difference:" << endl;
			
			if (choice2 == '1') {

				for (int i = 0; i < size1; i++)
					cout << num1[i];

				cout << " - ";

				for (int i = 0; i < size2; i++)
					cout << num2[i];

			} else {

				for (int i = 0; i < size2; i++)
					cout << num2[i];

				cout << " - ";

				for (int i = 0; i < size1; i++)
					cout << num1[i];

			}

			cout << " = ";

			if (size3 == 0)
				cout << "0";

			else
				for (int i = 0; i < size3; i++)
					cout << result[i];

			cout << endl;

			break;

		case 'M':
		case 'm':
			size3 = size1 + size2;

			for (int i = 0; i < size3; i++)
				result[i] = 0;

			for (int j = 0; j < size2; j++)
				for (int i = 0; i < size1; i++) {

					product = num1[(size1 - 1) - i] * num2[(size2 - 1) - j] + carry;
					result[(size3 - 1) - j - i] += product % 10;
					carry = product / 10;

					if (i == size1 - 1)
						result[(size3 - 2) - j - i] = carry, carry = 0;

					if (result[(size3 - 1) - j - i] > 9)
						carry += result[(size3 - 1) - j - i] / 10, result[(size3 - 1) - j - i] %= 10;

				}

			if (result[0] == 0)
				for (int i = 0; i < size3; i++)
					if (result[i] == 0 && !shift)
						index++;
					else
						shift = true, result[i - index] = result[i];

			cout << "Resultant Array = [" << result[0];

			for (int i = 1; i < size3; i++)
				cout << ", " << result[i];

			cout << "]" << endl << endl;

			cout << "Product:" << endl;

			for (int i = 0; i < size1; i++)
				cout << num1[i];

			cout << " * ";

			for (int i = 0; i < size2; i++)
				cout << num2[i];

			cout << " = ";

			for (int i = 0; i < size3; i++)
				cout << result[i];

			cout << endl;

			break;

		case 'Q':
		case 'q':
			cout << "Thank for Using this Code!";
			break;

		default:
			cout << "Invalid Choice Inputted!";
			cout << "Enter Choice Again!";
			cout << endl;
			cout << endl;

		}

	}

	return 0;

}