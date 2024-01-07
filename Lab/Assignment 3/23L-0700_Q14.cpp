// Implement a C++ calculator program that takes an arithmetic expression as input (e.g., "5 + 2 * 3") and evaluates it, considering operator precedence (multiplication and division before addition and subtraction).

#include <iostream>
#include <string>

using namespace std;

float number_extracter(string exp)
{

	float number = 0;

	for (int j = exp.length() - 1; j >= 0; j--)
		number += (exp[j] - '0') * pow(10, exp.length() - j - 1);

	return (number);

};

string expression;
float numbers[100];
char ops[100];
int counter = 0;
int breakPoint = 0;
int arrayCounter = 0;

int main ()
{

	cout << "Enter arithmetic expression: ";
	getline(cin, expression);
	cout << endl;

	for (int i = 0; i < expression.length(); i++)
	{

		if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
		{

			ops[arrayCounter] = expression[i];
			arrayCounter++;

			breakPoint = i + 1;

		} else if (expression[i] == ' ') {

			if (!(expression[i - 1] == '+' || expression[i - 1] == '-' || expression[i - 1] == '*' || expression[i - 1] == '/'))
				numbers[arrayCounter] = number_extracter(expression.substr(breakPoint, i - breakPoint));

			breakPoint = i + 1;

		};

	};

	// takes the last number
	numbers[arrayCounter] = number_extracter(expression.substr(breakPoint, expression.length() - breakPoint));


	for (int i = 0; i < arrayCounter; i++)
	{

		if (ops[i] == '*') {

			numbers[i + 1] *= numbers[i];
			numbers[i] = -1;

		} else if (ops[i] == '/') {
			
			numbers[i + 1] = numbers[i] / numbers[i + 1];
			numbers[i] = -1;
		
		};

	};

	for (int i = 0; i <= arrayCounter; i++) {
	
		if (numbers[i] == -1)
			counter++;

		else {

			numbers[i - counter] = numbers[i];
			ops[i - counter] = ops[i];

		};
	
	};

	arrayCounter -= counter;

	for (int i = 0; i < arrayCounter; i++)
	{

		if (ops[i] == '+') {

			numbers[i + 1] += numbers[i];
			numbers[i] = -1;

		}
		else if (ops[i] == '-') {

			numbers[i + 1] = numbers[i] - numbers[i + 1];
			numbers[i] = -1;

		};

	};

	counter = 0;

	for (int i = 0; i <= arrayCounter; i++) {

		if (numbers[i] == -1)
			counter++;

		else {

			numbers[i - counter] = numbers[i];
			ops[i - counter] = ops[i];

		};

	};

	cout << "The Result of the Expression is" << endl;
	cout << expression << " = " << numbers[0] << endl;

	return 0;

};