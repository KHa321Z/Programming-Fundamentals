#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{

    srand(time(0));

    int choice = 0;
    int Qn;

    do
    {
        cout << "Please Select QN: 1, 2, 3, 4, 5, 6" << endl;
        cout << "QN: ";
        cin >> Qn;
        cout << endl << endl;
        
        if (Qn == 1) {


            int number;
            int numOfOdd = 0, numOfEven = 0;
            fstream numbers, oddNumbers, evenNumbers;

            numbers.open("Numbers.txt", ios::out);

            for (int i = 0; i < 100; i++)
                numbers << rand() % 1000 << endl;

            numbers.close();

            numbers.open("Numbers.txt", ios::in);
            oddNumbers.open("odd.txt", ios::out);
            evenNumbers.open("even.txt", ios::out);

            while (numbers >> number)
                if (number % 2 == 0)
                    evenNumbers << number << endl, numOfEven++;
                else 
                    oddNumbers << number << endl, numOfOdd++;

            numbers.close();
            oddNumbers.close();
            evenNumbers.close();

            cout << "Number of Even Numbers: " << numOfEven;
            cout << endl;
            cout << "Number of Odd Numbers: " << numOfOdd;
            cout << endl << endl;
            

        } else if (Qn == 2) {


            char option;
            char inputSentence[100] = {};
            fstream input, encrypt, decrypt;

            input.open("input.txt", ios::out);
            input << "Najam sheraz, the singer, is an intelligent boy.";
            input.close();

            cout << "Choose Option:" << endl;
            cout << "1. Encrypt Data" << endl;
            cout << "2. Decrypt Data" << endl << endl;
            cout << "Option: ";
            cin >> option;
            cout << endl;

            if (option == '1') {
                
                input.open("input.txt", ios::in);
                input.getline(inputSentence, 100);
                input.close();

                for (int i = 0; inputSentence[i] != '\0'; i++)
                    inputSentence[i]++;

                cout << "Encrypted Array:" << endl;
                cout << inputSentence;

                encrypt.open("encrypt.txt", ios::out);
                encrypt << inputSentence;
                encrypt.close();

            } else if (option == '2') {

                encrypt.open("encrypt.txt", ios::in);

                if (encrypt.is_open()) {

                    encrypt.getline(inputSentence, 100);
                    encrypt.close();

                    for (int i = 0; inputSentence[i] != '\0'; i++)
                        inputSentence[i]--;

                    cout << "Decrypted Array:" << endl;
                    cout << inputSentence;

                    decrypt.open("decrypt.txt", ios::out);
                    decrypt << inputSentence;
                    decrypt.close();

                }
                else
                    cout << "Please Encrypt Data First!";

            } else
                cout << "Invalid Option!";

            cout << endl << endl;

        
        } else if (Qn == 3) {


            int buyChoice, index = 0;
            float totalPrice = 0;
            int itemCode[10] = {}; 
            int itemQuantity[10] = {};
            char name[10][20] = {};
            int quantity[10] = {};
            float price[10] = {};
            fstream inventory;

            inventory.open("inventory.txt", ios::in);

            if (!inventory.is_open()) {

                inventory.close();
                inventory.open("inventory.txt", ios::out);

                inventory << "Apple 25 3.5" << endl;
                inventory << "Orange 20 5.7" << endl;
                inventory << "Banana 50 2.5" << endl;
                inventory << "Papaya 23 10" << endl;
                inventory << "Lychee 35 1" << endl;
                inventory << "Olive 56 2" << endl;
                inventory << "Strawberry 125 3.5" << endl;
                inventory << "Raspberry 18 1" << endl;
                inventory << "Date 90 1.2" << endl;
                inventory << "Mango 40 15" << endl;
                
                inventory.close();
                inventory.open("inventory.txt", ios::in);

            }

            cout << "Code\t" << "Name\t\t" << "Quantity\t" << "Price Per Unit" << endl;

            for (int i = 0; i < 10; i++) {

                inventory >> name[i];
                inventory >> quantity[i];
                inventory >> price[i];

                cout << i + 1 << '\t' << name[i] << "\t"; 

                if (strlen(name[i]) < 8)
                    cout << '\t';

                cout << quantity[i] << "\t\t" << price[i] << endl;

            }

            inventory.close();

            do {

                cout << endl;
                cout << "Enter Code of Item: ";
                cin >> itemCode[index];
                cout << "Enter Quantity of Item: ";
                cin >> itemQuantity[index++];
                cout << endl;

                cout << "Would you like to Buy Something Else?" << endl;
                cout << "Enter 1 if Yes: ";
                cin >> buyChoice;

            } while (buyChoice == 1);

            cout << endl;
            cout << "Bill:" << endl;
            cout << "Name\t\t" << "Quantity\t" << "Price Per Unit" << endl;

            for (int i = 0; i < index; i++) {

                cout << name[itemCode[i] - 1] << '\t';

                if (strlen(name[itemCode[i] - 1]) < 8)
                    cout << '\t';

                cout << itemQuantity[i] << "\t\t" << price[itemCode[i] - 1] << endl;

                totalPrice += itemQuantity[i] * price[itemCode[i] - 1];
                quantity[itemCode[i] - 1] -= itemQuantity[i];

            }

            cout << "Total Bill: Rs" << totalPrice;
            cout << endl << endl;

            inventory.open("inventory.txt", ios::out);

            for (int i = 0; i < 10; i++)
                inventory << name[i] << ' ' << quantity[i] << ' ' << price[i] << endl;

        
        }
        else if (Qn == 4) {


            int i = 0, j = 0;
            int length, indexForRow = 0, indexForCol = 0;
            bool foundInRow = false, foundInCol = false;
            char word[10] = {};
            char puzzle[10][11] = {};

            cout << "Enter Puzzle:" << endl;
            cin.ignore();

            for (int i = 0; i < 10; i++)
                cin.getline(puzzle[i], 10);

            cout << endl;
            cout << "Enter Word to Search: ";
            cin >> word;
            cout << endl;

            length = strlen(word);

            for (; !(foundInRow || foundInCol) && (i < 10); i++)
                for (j = 0; !(foundInRow || foundInCol) && (j < 10); j++) {

                    if (indexForRow == length)
                        foundInRow = true;

                    else if (indexForCol == length)
                        foundInCol = true;

                    if (puzzle[i][j] != word[indexForRow++])
                        indexForRow = 0;

                    if (puzzle[j][i] != word[indexForCol++])
                        indexForCol = 0;

                }

            if (foundInRow)
                cout << "Found!" << endl << "Word was found at " << i - 1 << ", " << j - length - 1 << " in rightward direction!";

            else if (foundInCol)
                cout << "Found!" << endl << "Word was found at " << j - length - 1 << ", " << i - 1 << " in downward direction!";

            else
                cout << "Word was not Found!";

            cout << endl << endl;


        } else if (Qn == 5) {
        

            int matrix[4][4] = {};
            fstream matrixFile;

            matrixFile.open("Data.txt", ios::in);

            if (!matrixFile.is_open()) {

                matrixFile.close();
                matrixFile.open("Data.txt", ios::out);

                for (int i = 0; i < 4; i++, matrixFile << endl)
                    for (int j = 0; j < 4; j++)
                        matrixFile << rand() % 10 << " ";

                matrixFile.close();
                matrixFile.open("Data.txt", ios::in);

            }

            cout << "Original Matrix:" << endl;

            for (int i = 0; i < 4; i++, cout << endl)
                for (int j = 0; j < 4; j++)
                    matrixFile >> matrix[i][j], cout << matrix[i][j] << " ";

            matrixFile.close();
            matrixFile.open("Data.txt", ios::out);

            for (int i = 0; i < 4; i++)
                for (int j = i; j < 4; j++)
                    swap(matrix[i][j], matrix[j][i]);

            cout << endl;
            cout << "Transpose Matrix:";
            cout << endl;

            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++)
                    matrixFile << matrix[i][j] << " ", cout << matrix[i][j] << " ";

                matrixFile << endl;
                cout << endl;
            }

            matrixFile.close();
            cout << endl;


        } else if (Qn == 6) {
            

            bool unique1 = true, unique2 = true;
            char arryR1[6][6] = {};
            char arryR2[6][6] = {};
            fstream record1, record2, unique;

            unique.open("Output.txt", ios::app);
            record1.open("record1.txt", ios::in);
            record2.open("record2.txt", ios::in);

            if (!record1.is_open()) {

                record1.close();
                record1.open("record1.txt", ios::out);

                for (int i = 0; i < 6; i++, record1 << endl)
                    for (int j = 0; j < 6; j++)
                        record1 << char(rand() % (123 - 97) + 97);

                record1.close();
                record1.open("record1.txt", ios::in);

            }

            if (!record2.is_open()) {

                record2.close();
                record2.open("record2.txt", ios::out);

                for (int i = 0; i < 6; i++, record2 << endl)
                    for (int j = 0; j < 6; j++)
                        record2 << char(rand() % (123 - 97) + 97);

                record2.close();
                record2.open("record2.txt", ios::in);

            }

            for (int i = 0; i < 6; i++)
                for (int j = 0; j < 6; j++)
                    record1 >> arryR1[i][j], record2 >> arryR2[i][j];

            cout << "Unique Elements:" << endl;

            for (int i = 0; i < 6; i++)
                for (int j = 0; j < 6; j++) {

                    unique1 = true;
                    unique2 = true;

                    for (int x = 0; x < 6; x++)
                        for (int y = 0; y < 6; y++) {
                            if (arryR1[i][j] == arryR2[x][y])
                                unique1 = false;

                            if (arryR2[i][j] == arryR1[x][y])
                                unique2 = false;
                        }

                    if (unique1)
                        unique << arryR1[i][j] << " ", cout << arryR1[i][j] << " ";

                    if (unique2)
                        unique << arryR2[i][j] << " ", cout << arryR2[i][j] << " ";

                }

            unique.close();
            record1.close();
            record2.close();

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
