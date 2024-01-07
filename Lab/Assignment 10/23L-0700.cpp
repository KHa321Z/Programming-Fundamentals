#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

const int size = 50;

int Trace(int data[][::size], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += data[i][i];

    return (sum);

}

int lookUpName(string nameArray[], string targetName, int size) {

    int index = 0;

    while (index < size)
        if (nameArray[index++] == targetName)
            return (index - 1);

    return -1;

}

void Upper_half(int A[][::size], int size) {

    cout << "Output Array:" << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            if (j >= i)
                cout << A[i][j] << " ";
            else
                cout << "  ";

}

void reverseString(char inputString[]) {

    int start = 0, end;

    for (int index = 0; inputString[index] != '\0'; index++)

        if (inputString[index] == ' ' || inputString[index + 1] == '\0') {

            end = (inputString[index + 1] == '\0') ? index + 1 : index;

            for (int i = 0; (start + i) < (start + end) / 2; i++)
                swap(inputString[start + i], inputString[end - i - 1]);

            start = index + 1;

        }

}

int countCharacters(char charArray[]) {

    int counter = 0;

    while (charArray[counter++] != '\0');

    return (counter - 1);

}

bool Exists(int data[][6], int pattern[][3]) {

    bool checking = false;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (data[i][j] == pattern[0][0] && (checking = true))
                for (int x = 0; x < 3 && checking; x++)
                    for (int y = 0; y < 3 && checking; y++)
                        if (data[i + x][j + y] != pattern[x][y])
                            checking = false;
                        else if (x == 2 && y == 2)
                            return true;

    return false;

}


int main()
{
	
    srand(time(0));

    int choice = 0;
    int Qn;

    do
    {
        cout << "Please Select QN: 1, 2, 3, 4, 5, 6, 7, 8, 9" << endl;
        cout << "QN: ";
        cin >> Qn;
        cout << endl << endl;
        
        if (Qn == 1) {


            int characters = 0, counter = 0;
            char charString[::size] = {};

            cout << "Enter String: ";
            cin.ignore();

            while (cin.peek() != '\n')
                charString[counter++] = std::cin.get();

            for (int i = 0; i < ::size && charString[i] != '\0'; i++)
                if (charString[i] != ' ')
                    characters++;

            cout << "Total Characters: " << characters;
            cout << endl << endl;
            

        } else if (Qn == 2) {


            int wordLength = 0, counter = 0, index = 0, minLength;
            char charString[::size] = {};
            int lengthArray[::size] = {};

            cout << "Enter String: ";
            cin.ignore();
            
            while (cin.peek() != '\n')
                charString[counter++] = std::cin.get();

            for (int i = 0; i < ::size; i++)
                if (charString[i] == '.' || charString[i] == ' ') {

                    lengthArray[index++] = wordLength;
                    wordLength = 0;

                    if (charString[i] == '.')
                        break;

                } else
                    wordLength++;


            minLength = lengthArray[0];

            cout << "Length of Words: ";

            for (int i = 0; i < index; i++)
                minLength = ((minLength > lengthArray[i]) ? lengthArray[i] : minLength), cout << lengthArray[i] << " ";

            cout << endl;
            cout << "Minimum Length: " << minLength;
            cout << endl << endl;

        
        } else if (Qn == 3) {


            char character;
            char charArray[::size] = {};

            cout << "Enter a Character: ";
            cin >> character;
            cout << "Enter a Sentence: ";
            cin.ignore();
            cin.getline(charArray, ::size);

            for (int i = 0; i < strlen(charArray); i++)
                if (charArray[i] == character) {
                    for (int j = i; j < strlen(charArray); j++)
                        charArray[j] = charArray[j + 1];

                    i--;
                }

            cout << endl;
            cout << "Updated Sentence: " << charArray;
            cout << endl << endl;

        
        } else if (Qn == 4) {

        
            int size;
            int matrix[::size][::size] = {};

            cout << "Enter Size of Square Matrix: ";
            cin >> size;
            cout << endl;

            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    cout << "Enter Element[" << i << "][" << j << "]: ", cin >> matrix[i][j];

            cout << endl;
            cout << "The Matrix is:" << endl;
            for (int i = 0; i < size; i++, cout << endl)
                for (int j = 0; j < size; j++)
                    cout << matrix[i][j] << "\t";

            cout << endl;
            cout << "Sum of Diagonal: " << Trace(matrix, size);
            cout << endl << endl;


        } else if (Qn == 5) {
        

            int size, index;
            string name;
            string names[::size] = {};
            int numbers[::size] = {};

            cout << "Enter Number of Contacts: ";
            cin >> size;
            cout << endl;

            for (int i = 0; i < size; i++) {

                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, names[i]);
                cout << "Enter Number: ";
                cin >> numbers[i];
                cout << endl;

            }

            cout << endl;
            cout << "Enter Name to Search: ";
            cin >> name;
            cout << endl;

            index = lookUpName(names, name, size);

            if (index != -1) {

                cout << "Contact was Found:" << endl;
                cout << "Name: " << names[index] << endl;
                cout << "Number: " << numbers[index] << endl;

            } else
                cout << "Contact was not Found!" << endl;

            cout << endl;


        } else if (Qn == 6) {
            

            int size;
            int sampleArray[::size][::size] = {};

            cout << "Enter Size of Array: ";
            cin >> size;
            cout << endl;
            cout << "Input Array:" << endl;

            for (int i = 0; i < size; i++, cout << endl)
                for (int j = 0; j < size; j++)
                    cout << (sampleArray[i][j] = rand() % 10) << " ";

            cout << endl;
            Upper_half(sampleArray, size);
            cout << endl << endl;


        } else if (Qn == 7) {
        

            int counter = 0;
            char stringArray[::size] = {};

            cout << "Enter String (< 50 characters): ";
            cin.ignore();
            
            while (cin.peek() != '\n' && counter < ::size)
                stringArray[counter++] = std::cin.get();

            reverseString(stringArray);

            cout << "Output String: ";

            for (int i = 0; i < counter; i++)
                cout << stringArray[i];

            cout << endl << endl;


        } else if (Qn == 8) {
        

            int counter = 0;
            char stringArray[::size] = {};

            cout << "Enter String (< 50 characters): ";
            cin.ignore();

            while (cin.peek() != '\n')
                stringArray[counter++] = std::cin.get();

            cout << endl;
            cout << "Number of Characters Entered: " << countCharacters(stringArray);
            cout << endl << endl;
        

        } else if (Qn == 9) {


            int dataArray[][6] = { 1, 2, 7, 8, 9, 6, 2, 2, 3, 4, 5, 6, 3, 2, 3, 4, 5, 6, 4, 2, 3, 4, 5, 6, 5, 2, 9, 8, 7, 6, 6, 2, 7, 4, 5, 6 };
            int testArray[][3] = { 3, 4, 5, 3, 4, 5, 3, 4, 5 };

            cout << "Data Matrix:" << endl;
            for (int i = 0; i < 6; i++, cout << endl)
                for (int j = 0; j < 6; j++)
                    cout << dataArray[i][j] << " ";

            cout << endl << "Test Matrix:" << endl;
            for (int i = 0; i < 3; i++, cout << endl)
                for (int j = 0; j < 3; j++)
                    cout << testArray[i][j] << " ";

            cout << endl;
            (Exists(dataArray, testArray)) ? cout << "3x3 Matrix Exists in Data" : cout << "3x3 Matrix does not Exists in Data";
            cout << endl << endl;


        } else {
        
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
