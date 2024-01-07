#include <iostream>

using namespace std;

int main()
{

    int m, n;
    int matrixA[10][10] = {};
    int matrixB[10][10] = {};

    cout << "Enter Rows of both Matrices (m): ";
    cin >> m;
    cout << "Enter Cols of both Matrices (n): ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix A: ", cin >> matrixA[i][j];

    cout << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix B: ", cin >> matrixB[i][j];

    cout << endl;
    cout << "The Resultant Matrix is:" << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << (matrixA[i][j] + matrixB[i][j]) << "\t";

    return 0;

}