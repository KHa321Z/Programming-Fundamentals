#include <iostream>

using namespace std;

bool compare(char string1[], char string2[], int currIndex = 0) {

    if (currIndex == 11)
        return false;

    else if (string1[currIndex] == string2[currIndex])
        return compare(string1, string2, currIndex + 1);

    else if (string1[currIndex] > string2[currIndex])
        return true;

    else
        return false;

}

int main()
{

    int size;
    char strings[10][11] = {};

    cout << "Enter Number of Strings (<= 10): ";
    cin >> size;
    cin.ignore();
    cout << endl;

    for (int i = 0; i < size; i++)
        cout << "Enter String (<= 10 characters): ", cin.getline(strings[i], 10);

    cout << endl;
    cout << "Unsorted Array: {\"" << strings[0] << "\"";

    for (int i = 1; i < size; i++)
        cout << ", \"" << strings[i] << "\"";

    cout << "}";

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (compare(strings[j], strings[j + 1]))
                swap(strings[j], strings[j + 1]);

    cout << endl;
    cout << "Sorted Array: {\"" << strings[0] << "\"";

    for (int i = 1; i < size; i++)
        cout << ", \"" << strings[i] << "\"";

    cout << "}";
    cout << endl;

    return 0;

}