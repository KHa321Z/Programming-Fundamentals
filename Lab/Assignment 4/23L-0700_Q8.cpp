#include <iostream>
using namespace std;

int score = 0;
char answer;

int main()
{

	cout << "WELCOME TO BASIC QUIZ" << endl;
	cout << "THERE WILL BE 5 QUESTIONS" << endl;
	cout << "ANSWER THEM WITH T/F" << endl;
	cout << "YOUR SCORE WILL BE CALCULATED ON HOW MANY YOU GET CORRECT" << endl;

	cout << endl << "QUESTION 1:" << endl;
	cout << "Is Lahore in Sindh: ";
	cin >> answer;

	if (answer == 'T' || answer == 't')
		score++;

	cout << endl << "QUESTION 2:" << endl;
	cout << "Is 0! == 0: ";
	cin >> answer;

	if (answer == 'F' || answer == 'f')
		score++;

	cout << endl << "QUESTION 3:" << endl;
	cout << "Is !!0 == false: ";
	cin >> answer;

	if (answer == 'T' || answer == 't')
		score++;

	cout << endl << "QUESTION 4:" << endl;
	cout << "There can be an ELSE statement without an IF statement: ";
	cin >> answer;

	if (answer == 'F' || answer == 'f')
		score++;

	cout << endl << "QUESTION 5:" << endl;
	cout << "Is 1 + 1 == 10: ";
	cin >> answer;

	if (answer == 'T' || answer == 't')
		score++;

	cout << endl << "Your Score is " << score << "/5" << endl;

	return 0;

};