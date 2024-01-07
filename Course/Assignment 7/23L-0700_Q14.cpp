#include <iostream>

using namespace std;

void concatenation(char originalString[10][11], char concatenatedString[][11]) {

    int index;

    for (int i = 0; i < 10; i++) {

        index = 0;

        for (int j = 0; j < 10; j++)
            if (originalString[j][i] != '\0')
                concatenatedString[i][index++] = originalString[j][i];
    
    }

}

int main()
{

    int size;
    char oldStrings[10][11] = {};
    char newStrings[10][11] = {};

    cout << "Enter Number of Strings (<= 10): ";
    cin >> size;
    cin.ignore();
    cout << endl;

    for (int i = 0; i < size; i++)
        cout << "Enter String (<= 10 characters): ", cin.getline(oldStrings[i], 11);
    
    concatenation(oldStrings, newStrings);

    cout << endl;
    cout << "After Concatenation:" << endl;

    for (int i = 0; i < 10; i++)
        cout << newStrings[i] << endl;

    return 0;

}