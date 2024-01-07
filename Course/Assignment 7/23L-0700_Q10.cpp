#include <iostream>

using namespace std;

int main()
{

    int sum;
    int n, l, m;
    int matrixA[10][10] = {};
    int matrixB[10][10] = {};

    cout << "Enter Row of Matrix A: ";
    cin >> n;
    cout << "Enter Col of Matrix A and Row of Matrix B: ";
    cin >> l;
    cout << "Enter Col of Matrix B: ";
    cin >> m;
    cout << endl;

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < l; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix A: ", cin >> matrixA[i][j];

    cout << endl;

    for (int i = 0; i < l; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix B: ", cin >> matrixB[i][j];

    cout << endl;
    cout << "The Resultant Matrix is:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            sum = 0;

            for (int k = 0; k < l; k++)
                sum += matrixA[i][k] * matrixB[k][j];

            cout << sum << "\t";

        }

        cout << endl;

    }

    return 0;

}