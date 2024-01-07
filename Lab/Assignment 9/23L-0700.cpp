#include <iostream>
#include <cstring>

using namespace std;


int vowelCounter(char strArray[]) {

    int counter = 0;

    for (int i = 0; strArray[i] != '\0'; i++)
        if (strArray[i] == 'a' || strArray[i] == 'A' || strArray[i] == 'e' || strArray[i] == 'E' || strArray[i] == 'i' || strArray[i] == 'I' || strArray[i] == 'o' || strArray[i] == 'O' || strArray[i] == 'u' || strArray[i] == 'U')
            counter++;

    return (counter);
}

bool palindromeChecker(char strArray[]) {

    for (int i = 0; i < (strlen(strArray) / 2); i++)
        if (strArray[i] != strArray[strlen(strArray) - i - 1])
            return 0;

    return 1;

}


int main()
{
	
    int choice = 0;
    int Qn;

    do
    {
        cout << "Please Select QN: 1, 2, 3, 4, 5, 6, 7, 8" << endl;
        cout << "QN: ";
        cin >> Qn;
        cout << endl << endl;
        
        if (Qn == 1) {


            int matrix[3][4] = {};
            int rowSum = 0;

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 4; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            cout << endl << endl;

            for (int i = 0; i < 3; i++) {
                
                cout << "[";

                for (int j = 0; j < 4; j++)
                    rowSum += matrix[i][j], cout << matrix[i][j] << ((j == 3) ? "" : "\t");

                cout << "]";
                cout << "\t\tSum of Row: " << rowSum << endl;

                rowSum = 0;
            }

            cout << endl;

        } else if (Qn == 2) {


            int matrix[3][4] = {};
            int largest;

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 4; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            cout << endl << endl;

            largest = matrix[0][0];

            for (int i = 0; i < 3; i++) {

                cout << "[";

                for (int j = 0; j < 4; j++) {
                    if (largest < matrix[i][j])
                        largest = matrix[i][j];
                    cout << matrix[i][j] << ((j == 3) ? "" : "\t");
                }

                cout << "]\n";

            }

            cout << endl << "Largest Number in Matrix: " << largest << endl;

        
        } else if (Qn == 3) {


            int matrix[3][3] = {};
            bool identityCheck = true;

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            cout << endl << endl;

            for (int i = 0; i < 3; i++) {

                cout << "[";

                for (int j = 0; j < 3; j++) {
                    if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
                        identityCheck = false;

                    cout << matrix[i][j] << ((j == 2) ? "" : "\t");
                }

                cout << "]" << endl;

            }

            (identityCheck) ? cout << "Matrix is an Identity Matrix" << endl : cout << "Matrix is not an Identity Matrix" << endl;

        
        } else if (Qn == 4) {

        
            int matrix[3][3] = {};
            bool search = false;
            int indexI, indexJ, number;

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            cout << endl << "Enter Number to Search: ";
            cin >> number;
            cout << endl << endl;

            for (int i = 0; i < 3; i++) {

                cout << "[";

                for (int j = 0; j < 3; j++) {
                    if (!search && matrix[i][j] == number)
                        search = false, indexI = i, indexJ = j;

                    cout << matrix[i][j] << ((j == 2) ? "" : "\t");
                }

                cout << "]" << endl;

            }

            cout << endl;

            if (search)
                cout << number << " is in the Matrix!" << endl << "It is present at Row " << indexI << " and Col " << indexJ << endl;
            else
                cout << number << " is not in the Matrix!" << endl;

            cout << endl;


        } else if (Qn == 5) {
        

            int matrix[3][3] = {};
            int diagonalSum = 0;

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            cout << endl << endl;

            for (int i = 0; i < 3; i++) {

                cout << "[";

                for (int j = 0; j < 3; j++) {
                    if (i == j)
                        diagonalSum += matrix[i][j];

                    cout << matrix[i][j] << ((j == 2) ? "" : "\t");
                }

                cout << "]" << endl;

            }

            cout << "Sum of Diagonal Elements: " << diagonalSum << endl << endl;


        } else if (Qn == 6) {
            

            int matrix[3][3] = {};

            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout << "Enter Element[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }

            for (int i = 0; i < 3; i++)
                for (int j = i; j < 3; j++)
                    swap(matrix[i][j], matrix[j][i]);

            cout << endl << endl;
            cout << "Transpose of Matrix:" << endl;

            for (int i = 0; i < 3; i++) {

                cout << "[";

                for (int j = 0; j < 3; j++)
                    cout << matrix[i][j] << ((j == 2) ? "" : "\t");

                cout << "]" << endl;

            }

            cout << endl << endl;


        } else if (Qn == 7) {
        

            char inputString[100];

            cin.ignore();
            cout << "Enter String: ";
            cin.getline(inputString, 100);
            cout << endl;
            cout << "Number of Vowels in String: " << vowelCounter(inputString);
            cout << endl << endl;


        } else if (Qn == 8) {
        

            char inputString[100];

            cin.ignore();
            cout << "Enter String: ";
            cin.getline(inputString, 100);
            cout << endl;

            if (palindromeChecker(inputString))
                cout << "The String is a Palindrome";
            else
                cout << "The String is not a Palindrome";

            cout << endl << endl;
        

        }  else {
        
            cout << "Wrong Question Number!" << endl << endl;

        }

        cout << endl;
        cout << "Press 1 to Re-run this Programme";
        cout << endl << "Press any other key to Exit: ";
        cin >> choice;
        cout << endl << endl;

    } while (choice == 1);

	return 0;

}
