#include <iostream>

using namespace std;

int main()
{

    int m, n;
    int matrix[25][25] = {};
    int transpose[25][25] = {};

    cout << "Enter Rows of Matrix (m): ";
    cin >> m;
    cout << "Enter Cols of Matrix (n): ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Matrix: ", cin >> matrix[i][j];

    cout << endl;
    cout << "Matrix:" << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << '\t';

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    cout << endl;
    cout << "Transpose:" << endl;
    
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << transpose[i][j] << '\t';

    return 0;

}