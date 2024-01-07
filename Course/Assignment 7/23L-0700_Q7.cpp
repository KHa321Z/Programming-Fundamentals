#include <iostream>

using namespace std;

int main()
{

    int size;
    int sum = 0;
    int matrix[25][25] = {};

    cout << "Enter Size of Matrix: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix: ", cin >> matrix[i][j];

    cout << endl;
    cout << "Matrix:" << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            cout << matrix[i][j] << '\t';

    for (int i = 0; i < size; i++)
        if (i == size - i - 1)
            sum += matrix[i][i];
        else
            sum += matrix[i][i] + matrix[i][size - i - 1];

    cout << endl;
    cout << "Sum = " << sum;

    return 0;

}