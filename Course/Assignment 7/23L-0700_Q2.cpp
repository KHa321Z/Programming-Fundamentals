#include <iostream>

using namespace std;

int main()
{

    int size1, size2;
    bool unique;
    int nums1[100][2] = {};
    int nums2[100][2] = {};
    int output[100][2] = {};

    cout << "Enter Size of Nums1: ";
    cin >> size1;
    cout << endl;

    for (int i = 0; i < size1; i++)
        cout << "Enter Id and Value for Nums1[" << i << "]: ", cin >> nums1[i][0] >> nums1[i][1];

    cout << endl;
    cout << "Enter Size of Nums2: ";
    cin >> size2;
    cout << endl;

    for (int i = 0; i < size2; i++)
        cout << "Enter Id and Value for Nums2[" << i << "]: ", cin >> nums2[i][0] >> nums2[i][1];

    for (int i = 0; i < size1; i++)
        output[i][0] = nums1[i][0], output[i][1] = nums1[i][1];

    for (int i = 0; i < size2; i++) {

        unique = true;

        for (int j = 0; j < size1; j++)
            if (nums2[i][0] == output[j][0])
                output[j][1] += nums2[i][1], unique = false;

        if (unique)
            output[size1][0] = nums2[i][0], output[size1++][1] = nums2[i][1];

    }

    for (int i = 0; i < size1 - 1; i++)
        for (int j = 0; j < size1 - i - 1; j++)
            if (output[j][0] > output[j + 1][0])
                swap(output[j], output[j + 1]);

    cout << endl << endl;
    cout << "Output: [";

    for (int i = 0; i < size1; i++) {

        if (i)
            cout << ", ";

        cout << "[";

        for (int j = 0; j < 2; j++) {
            if (j)
                cout << ", ";

            cout << output[i][j];
        }

        cout << "]";

    }

    cout << "]";

    return 0;

}