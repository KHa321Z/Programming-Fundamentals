#include <iostream>

using namespace std;

int main()
{

    int m, n;
    int col = 0, min, max, index = 0;
    int matrix[25][25] = {};
    int output[25 * 25] = {};

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

    for (int i = 0; i < m; i++) {

        min = matrix[i][0];

        for (int j = 0; j < n; j++)
            if (matrix[i][j] < min)
                min = matrix[i][j], col = j;

        max = matrix[0][col];

        for (int k = 0; k < m; k++)
            if (matrix[k][col] > max)
                max = matrix[k][col];

        if (min == max)
            output[index++] = min;

    }

    cout << endl;
    cout << "Lucky Numbers: ";

    for (int i = 0; i < index; i++)
        cout << output[i] << " ";

    return 0;

}