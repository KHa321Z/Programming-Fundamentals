#include <iostream>

using namespace std;

int main()
{

    int size;
    int matrix[11][11] = {};

    do {

        cout << "Enter Size of Matrix: ";
        cin >> size;

        if (size % 2 != 1)
            cout << "Incorrect Input! Enter Odd Size!" << endl;

    } while (size % 2 != 1);

    cout << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            cout << "Enter Element[" << i << "][" << j << "]: ", cin >> matrix[i][j];

    cout << endl;
    cout << "Middle Row: " << matrix[size / 2][0];

    for (int i = 1; i < size; i++)
        cout << ", " << matrix[size / 2][i];

    cout << endl;
    cout << "Middle Column: " << matrix[0][size / 2];

    for (int i = 1; i < size; i++)
        cout << ", " << matrix[i][size / 2];

    cout << endl;

    return 0;

}