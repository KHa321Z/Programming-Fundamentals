#include <iostream>
using namespace std;

int choice1, choice2;

int main()
{

	cout << "Enter First player's choice (1 for Paper, 2 for Rock, 3 for Scissors): ";
	cin >> choice1;
	cout << "Enter the first player's choice (1 for Paper, 2 for Rock, 3 for Scissors): ";
	cin >> choice2;

	if ((choice1 == 1 && choice2 == 2) || (choice1 == 2 && choice2 == 3) || (choice1 == 3 && choice2 == 1))
		cout << "Player 1 Wins!";

	else if ((choice1 == 2 && choice2 == 1) || (choice1 == 3 && choice2 == 2) || (choice1 == 1 && choice2 == 3))
		cout << "Player 2 Wins!";

	else if ((choice1 == choice2) && !(choice1 < 1 || choice1 > 3) && !(choice2 < 1 || choice2 > 3))
		cout << "This is a Draw!";

	else
		cout << "Incorrect Input Given!";

	cout << endl;

	return 0;

};