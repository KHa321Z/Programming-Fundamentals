#include <iostream>

using namespace std;

bool palindrome(char checkString[]) {

    for (int i = 0; i < strlen(checkString) / 2; i++)
        if (checkString[i] != checkString[strlen(checkString) - i - 1])
            return false;

    return true;

}

int main()
{

    bool isPalindrome = true;
    int size;
    char strings[10][11] = {};

    cout << "Enter Number of Strings (<= 10): ";
    cin >> size;
    cin.ignore();
    cout << endl;

    for (int i = 0; i < size; i++)
        cout << "Enter String (<= 10 characters): ", cin.getline(strings[i], 10);
    
    for (int i = 0; i < size; i++)
        isPalindrome = isPalindrome && palindrome(strings[i]);

    cout << endl;
    cout << ((isPalindrome) ? "Yes" : "No");
    cout << endl;

    return 0;

}