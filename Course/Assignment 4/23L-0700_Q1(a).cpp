#include <iostream>

using namespace std;

int main()
{

    int height, repetition;

    cout << "Enter Height of Pattern: ";
    cin >> height;
    cout << "Enter Repetition of Pattern: ";
    cin >> repetition;
    cout << endl;

    if (height % 2 == 0)
        height++;

    for (int i = 0; i < height; i++) {

        for (int rep = 1; rep <= repetition; rep++) {

            for (int j = 0; j < height; j++)
                ((i == 0 || i == height - 1) || (i == j || i == height - (j + 1))) ? cout << "* " : cout << "  ";

            if (rep != repetition)
                (i == 0 || i == height - 1) ? cout << "* " : cout << "  ";

        }

        cout << endl;

    }

    return 0;

}
