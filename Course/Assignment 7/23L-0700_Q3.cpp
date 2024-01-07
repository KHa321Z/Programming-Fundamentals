#include <iostream>

using namespace std;

int main()
{

    int m, n, k;
    int grid[25][25] = {};
    int transpose[25][25] = {};

    cout << "Enter Shift Integer (k): ";
    cin >> k;
    cout << "Enter Rows of Grid (m): ";
    cin >> m;
    cout << "Enter Cols of Grid (n): ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << "Enter Element[" << i << "][" << j << "] of Grid: ", cin >> grid[i][j];

    cout << endl;
    cout << "Grid:" << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << '\t';

    for (int rep = 0; rep < k; rep++) {

        int temp = grid[m - 1][n - 1];

        for (int i = m - 1; i >= 0; i--)
            for (int j = n - 1; j >= 0; j--)
                if (i || j)
                    grid[i][j] = grid[(i * n + j - 1) / n][(i * n + j - 1) % n];

        grid[0][0] = temp;

    }


    cout << endl;
    cout << "After Shifting:" << endl;

    for (int i = 0; i < m; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << '\t';


    return 0;

}