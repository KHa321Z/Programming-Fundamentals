#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {

    if (n == 0)
        return 1;

    return (n * factorial(n - 1));

}

float addition(float a, float b) {
    return (a + b);
}

float subtraction(float a, float b) {
    return (a - b);
}

float multiplication(float a, float b) {
    return (a * b);
}

float division(float a, float b) {
    return (a / b);
}

int main() {

    int choice = 0;
    char Qn;

    do
    {

        string text;
        int numbers[100] = {};
        int n;
        bool ascending = true, descending = true;
        const int n1 = 6;
        int nums[n1] = {};
        int nums2[n1 / 2] = {};
        int nums3[n1 / 2] = {};
        int numbers2[100] = {};
        int n2, specific;
        int NUMS[100] = {};
        int NUMS2[100] = {};
        int n3, index = 0;
        bool unique1;
        int nums7[100] = {};
        int nums8[100] = {};
        int nums9[100] = {};
        int common[100] = {};
        int N1, N2, N3, index1 = 0;
        int A1[10] = {};
        int A2[10] = {};
        int A3[10] = {};
        int size1, size2, size3 = 0;
        int factorialNumber;
        char choice2;
        float a, b;

        cout << "Please Enter Question No.(1-9): ";
        cin >> Qn;
        cout << endl << endl;

        switch (Qn)
        {

        case '1':

            cin.ignore();
            cout << "Input String: ";
            getline(cin, text);
            cout << endl;
            cout << "Output String: ";

            for (int i = text.length() - 1; i >= 0; i--)
                cout << text[i];

            break;

        case '2':

            cout << "Enter Number of Elements (Max: 100): ";
            cin >> n;
            cout << endl;

            if (n < 1 || n > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            for (int i = 0; i < n; i++) {
                cout << "Enter Element[" << i << "]: ";
                cin >> numbers[i];
            }

            cout << endl;

            for (int i = 0; i < n - 1; i++)
                if (numbers[i] < numbers[i + 1])
                    descending = false;
                else if (numbers[i] > numbers[i + 1])
                    ascending = false;

            if (!ascending && !descending)
                cout << "The Array is neither in Ascending nor in Descending Order";

            else if (ascending)
                cout << "The Array is in Ascending Order" << endl
                << "Largest Element: " << numbers[n - 1] << endl
                << "Second Largest Element: " << numbers[n - 2];

            else if (descending)
                cout << "The Array is in Descending Order" << endl
                << "Largest Element: " << numbers[0] << endl
                << "Second Largest Element: " << numbers[1];

            break;

        case '3':

            for (int i = 0; i < n1; i++) {
                cout << "Enter Element[" << i << "]: ";
                cin >> nums[i];
            }

            cout << endl << endl;
            cout << "Initial Array:";
            cout << endl;

            for (int i = 0; i < n1; i++)
                cout << nums[i] << " ";

            cout << endl << endl;
            cout << "After Splitting:";
            cout << endl;

            for (int i = 0; i < n1 / 2; i++)
                cout << (nums2[i] = nums[i]) << " ";

            cout << endl;

            for (int i = n1 / 2; i < n1; i++)
                cout << (nums3[i - n1 / 2] = nums[i]) << " ";

            break;

        case '4':

            cout << "Enter Number of Elements (Max: 100): ";
            cin >> n2;
            cout << endl;

            if (n2 < 1 || n2 > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            for (int i = 0; i < n2; i++) {
                cout << "Enter Element[" << i << "]: ";
                cin >> numbers2[i];
            }

            cout << "Enter Specific Number: ";
            cin >> specific;
            cout << endl;
            cout << "Array: ";

            for (int i = 0; i < n2; i++)
                cout << numbers2[i] << " ";

            cout << endl;
            cout << "Array Pairs Whose Sum = " << specific;

            for (int i = 0; i < n2; i++)
                for (int j = i + 1; j < n2; j++)
                    if (numbers2[i] + numbers2[j] == specific)
                        cout << endl << numbers2[i] << ", " << numbers2[j];

            break;

        case '5':

            cout << "Enter Number of Elements (Max: 100): ";
            cin >> n3;
            cout << endl << endl;

            if (n3 < 1 || n3 > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            for (int i = 0; i < n3; i++) {
                unique1 = true;
                cout << "Enter Element[" << i << "]: ";
                cin >> NUMS[i];

                for (int j = 0; j < index; j++)
                    if (NUMS[i] == NUMS2[j])
                        unique1 = false;

                if (unique1)
                    NUMS2[index++] = NUMS[i];
            }

            cout << endl << endl;
            cout << "Original Array: ";

            for (int i = 0; i < n3; i++)
                cout << NUMS[i] << " ";

            cout << endl;
            cout << "Unique Elements: ";

            for (int j = 0; j < index; j++)
                cout << NUMS2[j] << " ";

            break;

        case '6':

            cout << "Enter Number of Elements of Array1 (Max: 100): ";
            cin >> N1;

            if (N1 < 1 || N1 > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            cout << "Enter Elements of Array1: ";

            for (int i = 0; i < N1; i++) {
                cin >> nums7[i];
            }

            cout << endl;
            cout << "Enter Number of Elements of Array2 (Max: 100): ";
            cin >> N2;

            if (N2 < 1 || N2 > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            cout << "Enter Elements of Array2: ";

            for (int i = 0; i < N2; i++) {
                cin >> nums8[i];
            }

            cout << endl;
            cout << "Enter Number of Elements of Array3 (Max: 100): ";
            cin >> N3;

            if (N3 < 1 || N3 > 100) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            cout << "Enter Elements of Array3: ";

            for (int i = 0; i < N3; i++) {
                cin >> nums9[i];
            }

            cout << endl;
            cout << endl;
            cout << "Original Arrays: " << endl;
            cout << "Array1: ";

            for (int i = 0; i < N1; i++)
                cout << nums7[i] << " ";

            cout << endl;
            cout << "Array2: ";

            for (int i = 0; i < N2; i++)
                cout << nums8[i] << " ";

            cout << endl;
            cout << "Array3: ";

            for (int i = 0; i < N3; i++)
                cout << nums9[i] << " ";

            for (int i = 0; i < N1; i++)
                for (int j = 0; j < N2; j++)
                    for (int k = 0; k < N3; k++)
                        if (nums7[i] == nums8[j] && nums8[j] == nums9[k])
                            common[index1++] = nums7[i];

            cout << endl;
            cout << "Common Elements of the Sorted Arrays: ";

            for (int i = 0; i < index1; i++)
                cout << common[i] << " ";

            break;

        case '7':

            cout << "Enter Size of A1: ";
            cin >> size1;

            if (size1 < 1 || size1 > 10) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            cout << "Enter Elements of A1: ";

            for (int i = 0; i < size1; i++)
                cin >> A1[i];

            cout << "Enter Size of A2: ";
            cin >> size2;

            if (size2 < 1 || size2 > 10) {
                cout << "Invalid Size of Array!";
                return 0;
            }

            cout << "Enter Elements of A2: ";

            for (int i = 0; i < size2; i++)
                cin >> A2[i];


            for (int i = 0, j = 0; i < size1; j++) {

                if (A1[i] == A2[j] || A2[j] > A1[i] || (j == size2 && A1[i] > A2[j])) {
                    if (A2[j] > A1[i] || (j == size2 && A1[i] > A2[j]))
                        A3[size3++] = A1[i];
                    j = -1, i++;
                }
            }


            cout << endl;
            cout << "Arrays:" << endl;
            cout << "A1: ";

            for (int i = 0; i < size1; i++)
                cout << A1[i] << " ";

            cout << endl;
            cout << "A2: ";

            for (int i = 0; i < size2; i++)
                cout << A2[i] << " ";

            cout << endl;
            cout << "A3: ";

            for (int i = 0; i < size3; i++)
                cout << A3[i] << " ";

            break;

        case '8':

            cout << "Enter a Positive Number: ";
            cin >> factorialNumber;

            if (factorialNumber < 0)
                cout << "Invalid Input";

            else
                cout << "Factorial = " << factorial(factorialNumber);

            break;

        case '9':

            cout << "WELCOME TO CALCULATOR";
            cout << endl;
            cout << "\t 1. Addition" << endl;
            cout << "\t 2. Subtraction" << endl;
            cout << "\t 3. Multiplication" << endl;
            cout << "\t 4. Division" << endl;
            cout << "Enter Choice: ";
            cin >> choice2;

            if (choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != '4') {
                cout << "Invalid Choice";
                return 0;
            }

            cout << endl;
            cout << endl;
            cout << "Enter First Number: ";
            cin >> a;
            cout << "Enter Second Number: ";
            cin >> b;

            if (choice2 == '1')
                cout << a << " + " << b << " = " << addition(a, b);

            else if (choice2 == '2')
                cout << a << " - " << b << " = " << subtraction(a, b);

            else if (choice2 == '3')
                cout << a << " x " << b << " = " << multiplication(a, b);

            else if (choice2 == '4')
                cout << a << " / " << b << " = " << division(a, b);

            break;

        default:
            cout << "Wrong Input \n";

        }

        cout << endl << endl;
        cout << "Press 1 if you want to Rerun this programe" << endl << "Press any other key to exit: ";
        cin >> choice;
        cout << endl;

    } while (choice == 1);

    system("pause");

    return 0;

}
