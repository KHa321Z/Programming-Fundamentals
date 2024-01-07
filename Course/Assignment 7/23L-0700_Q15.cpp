#include <iostream>

using namespace std;

int main()
{

    int m, n;
    int i = 0, j = -1;
    int index = 0;
    int activeRow, activeCol;
    bool row = false, down = true, right = true;
    int matrix[25][25] = {};
    int output[25 * 25] = {};

    cout << "Enter Rows of Matrix (m): ";
    cin >> m;
    cout << "Enter Cols of Matrix (n): ";
    cin >> n;
    cout << endl;

    activeRow = m;
    activeCol = n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = i * n + (j + 1);

    while (index != (m * n)) {

        while ((!row && ((right && j < activeCol - 1) || (!right && j > (n - activeCol)))) || ((row && ((down && i < activeRow - 1) || (!down && i > (m - activeRow)))))) {

            (row) ? ((down) ? i++ : i--) : ((right) ? j++ : j--);
            output[index++] = matrix[i][j];

        }

        if (!row && !right)
            activeCol--;

        if (row && down)
            activeRow--;

        row = !row;
        (row) ? (right = !right) : (down = !down);

    }

    cout << "Input: [";

    for (int i = 0; i < m; i++) {

        if (i)
            cout << ", ";

        cout << "[";

        for (int j = 0; j < n; j++) {
            if (j)
                cout << ", ";

            cout << matrix[i][j];
        }

        cout << "]";

    }

    cout << "]" << endl;
    cout << "Output: [" << output[0];

    for (int i = 1; i < index; i++)
        cout << ", " << output[i];

    cout << "]";

    return 0;

}