#include <iostream>

using namespace std;

int main()
{

    int size;
    int m, n;
    int oneDimensionalArray[25 * 25] = {};
    int twoDimensionalArray[25][25] = {};

    cout << "Enter Size of 1d Array: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++)
        cout << "Enter Element[" << i << "] of 2d Array: ", cin >> oneDimensionalArray[i];

    cout << endl;
    cout << "Enter Rows of 2d Array (m): ";
    cin >> m;
    cout << "Enter Cols of 2d Array (n): ";
    cin >> n;
    cout << endl;

    if (size > m * n)
        cout << "2d Array: []";

    else {

        for (int i = 0; i < size; i++)
            twoDimensionalArray[i / n][i % n] = oneDimensionalArray[i];

        cout << "2d Array: [";

        for (int i = 0; i < m; i++) {

            if (i)
                cout << ", ";

            cout << "[";

            for (int j = 0; j < n; j++) {
                if (j)
                    cout << ", ";

                cout << twoDimensionalArray[i][j];
            }

            cout << "]";

        }

        cout << "]";

    }


    return 0;

}