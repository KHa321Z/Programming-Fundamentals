#include <iostream>

using namespace std;

void Upper_half(int A[][10], int size) {

    cout << "Upper Half:" << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            if (j >= i)
                cout << A[i][j] << " ";
            else
                cout << "  ";

}

int main()
{

    int size;
    int sampleArray[10][10] = {};

    cout << "Enter Size of Array: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            cout << "Enter Element[" << i << "][" << j << "]: ", cin >> sampleArray[i][j];

    cout << endl << endl;
    cout << "The Matrix is:" << endl;

    for (int i = 0; i < size; i++, cout << endl)
        for (int j = 0; j < size; j++)
            cout << sampleArray[i][j] << "\t";

    cout << endl;
    Upper_half(sampleArray, size);
    cout << endl << endl;

	return 0;

}