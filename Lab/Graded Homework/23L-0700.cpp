#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const int ROLL_NO = 700;

double power(double n, int p = 2) {

    double result = 1;

    for (int i = 0; i < abs(p); i++)
        result *= n;

    if (p < 0)
        result = 1 / result;

    return (result);

}

double addition(double a, double b) {
    return (ROLL_NO + (a + b));
}

double subtraction(double a, double b) {
    return (ROLL_NO + (a - b));
}

double multiplication(double a, double b) {
    return (ROLL_NO + (a * b));
}

double division(double a, double b) {
    return (ROLL_NO + (a / b));
}

void fibonacchiSeries(int n) {

    for (int a = 0, b = 1, i = 0; i < n; b += a, a = b - a, i++)
        cout << a << " ";

    cout << endl;

}

void calculateGrade(int marks, char& grade) {

    if (marks > 80)
        grade = 'A';
    else if (marks > 65)
        grade = 'B';
    else if (marks > 50)
        grade = 'C';
    else
        grade = 'F';

}

void printDiagonal(int side) {

    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++)
            (i == j && j % 3 != 0) ? cout << j : cout << " ";

        cout << endl;
    }

    cout << endl;

}

void uniqueSetter(int size, int inputArray[]) {

    int index = 0;
    int uniqueArray[100] = {};

    for (int i = 0; i < size; i++) {
        cout << "Enter Element[" << i << "]: ";
        cin >> inputArray[i];
    }


    for (int i = 0, j; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i != j && inputArray[i] == inputArray[j])
                break;
        }

        if (inputArray[i] != inputArray[j])
            uniqueArray[index++] = inputArray[i];
    }


    cout << endl << endl;
    cout << "Original Array: ";

    for (int i = 0; i < size; i++)
        cout << inputArray[i] << " ";

    cout << endl;

    cout << "Unique Elements: ";

    for (int j = 0; j < index; j++)
        cout << uniqueArray[j] << " ";

    cout << endl;

}

void rotateArray(int dataArray[], int size, int index) {

    int outputArray[100] = {};

    cout << "Input Array: [" << dataArray[0];

    for (int i = 1; i < size; i++)
        cout << ", " << dataArray[i];

    cout << "]" << endl;

    for (int i = 0; i < size; i++) {
        outputArray[i] = dataArray[(i + index) % size];
    }


    cout << "Output: [" << outputArray[0];

    for (int i = 1; i < size; i++)
        cout << ", " << outputArray[i];

    cout << "]" << endl;

}

void reverseString(char inputString[]) {

    int start = 0, end;

    for (int index = 0; inputString[index] != '\0'; index++)

        if (inputString[index] == ' ' || inputString[index + 1] == '\0') {

            end = (inputString[index + 1] == '\0') ? index + 1 : index;

            for (int i = 0; (start + i) < (start + end) / 2; i++) {
                char temp = inputString[start + i]; 
                inputString[start + i] = inputString[end - i - 1]; 
                inputString[end - i - 1] = temp;
            }

            start = index + 1;

        }

    cout << "Output String: ";

    for (int i = 0; inputString[i] != '\0'; i++)
        cout << inputString[i];

    cout << endl;

}

int search(int arr[], int size, int num) {

    int index = -1;

    for (int i = 0; i < size; i++)
        if (arr[i] == num) {
            index = i;
            break;
        }

    return (index);

}

bool palindromeString(char arr[], int size) {

    for (int i = 0; i < size / 2; i++)
        if (tolower(arr[i]) != tolower(arr[size - i - 1]))
            return (false);

    return (true);

}

int main()
{
	
    int choice = 0;
    int Qn;

    do
    {
        cout << "Please Select QN: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10" << endl;
        cout << "QN: ";
        cin >> Qn;
        cout << endl << endl;
        
        if (Qn == 1) {


            double n, result;
            int p = 2;
        
            cout << "Enter Base Number: ";
            cin >> n;
            cin.ignore();
            cout << "Enter Exponent (Default is 2): ";

            if (cin.peek() == '\n')
                result = power(n);
            else if (cin >> p)
                result = power(n, p);

            cout << endl; 
            cout << n << " raised to the power " << p << " is: " << result;
            cout << endl << endl;


        } else if (Qn == 2) {


            char choice2;
            double a, b;

            cout << "WELCOME TO CALCULATOR";

            do {

                cout << endl;
                cout << endl;
                cout << endl;
                cout << "\t 1. Addition" << endl;
                cout << "\t 2. Subtraction" << endl;
                cout << "\t 3. Multiplication" << endl;
                cout << "\t 4. Division" << endl;
                cout << "\t 5. Exit" << endl;
                cout << endl;
                cout << "Enter Choice: ";
                cin >> choice2;

                if (choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != '4' && choice2 != '5') {
                    cout << endl << "Invalid Choice";
                    continue;
                }

                if (choice2 != '5') {

                    cout << endl;
                    cout << "Enter First Number: ";
                    cin >> a;
                    cout << "Enter Second Number: ";
                    cin >> b;

                }

                if (choice2 == '1')
                    cout << "Result: " << addition(a, b);

                else if (choice2 == '2')
                    cout << "Result: " << subtraction(a, b);

                else if (choice2 == '3')
                    cout << "Result: " << multiplication(a, b);

                else if (choice2 == '4')
                    cout << "Result: " << division(a, b);

                else if (choice2 == '5')
                    cout << endl << "Thank You for Using the CALCULATOR" << endl;

            } while (choice2 != '5');

            cout << endl << endl;

        
        } else if (Qn == 3) {


            int number;
        
            cout << "First 10 Fibonacchi Numbers:" << endl;
            fibonacchiSeries(10);
            cout << endl << endl;
            cout << "First 15 Fibonacchi Numbers:" << endl;
            fibonacchiSeries(15);
            cout << endl << endl;
            cout << endl;
            cout << "Enter a Non-Negative Number: ";
            cin >> number;

            if (number < 0)
                cout << endl << "Invalid Input!" << endl;
            else
                cout << "First " << number << " Fibonacchi Numbers:" << endl, fibonacchiSeries(number);

            cout << endl;

        
        } else if (Qn == 4) {

        
            int marks;
            char grade;

            do {
            
                cout << "Enter Marks (or -1 to Exit): ";
                cin >> marks;

                if (marks < -1 || marks > 100)
                    cout << "Invalid Marks! Please Enter Again!";
                else if (marks != -1)
                    calculateGrade(marks, grade), cout << "Grade: " << grade;

                cout << endl;

            } while (marks != -1);


        } else if (Qn == 5) {
        

            int length;

            cout << "Enter the Number of Rows/Columns: ";
            cin >> length;
            cout << endl;
            
            if (length > 0)
                printDiagonal(length);
            else
                cout << "Invalid Input!" << endl;;


        } else if (Qn == 6) {
            

            int size, index = 0;
            bool unique = true;
            int nums1[100] = {};
            int nums2[100] = {};

            cout << "Enter Number of Elements (Max: 100): ";
            cin >> size;
            cout << endl << endl;

            if (size > 0 && size < 101)
                uniqueSetter(size, nums1);
            else
                cout << "Invalid Size of Array!" << endl;

            cout << endl;


        } else if (Qn == 7) {
        

            int inputArray[100] = { 0 };
            int outputArray[100] = { 0 };
            int size;
            int index;

            cout << "Enter Size of Array: ";
            cin >> size;
            cout << endl;

            if (size < 1 || size > 100)
                cout << "Invalid Size!" << endl << "Program Terminated!" << endl;

            else {

                for (int i = 0; i < size; i++) {
                    cout << "Enter Element " << i << ": ";
                    cin >> inputArray[i];
                }

                cout << endl;

                do {

                    cout << "Enter Rotation Index: ";
                    cin >> index;

                    if (index < 0)
                        cout << "Invaild Input! Please Enter Non-Negative Number!" << endl;

                } while (index < 0);

                cout << endl;

                rotateArray(inputArray, size, index);

                cout << endl;

            }


        } else if (Qn == 8) {
        

            char stringArray[100] = {};

            cout << "Enter String (< 100 characters): ";
            cin.ignore();
            cin.getline(stringArray, 100);

            reverseString(stringArray);
        

        } else if (Qn == 9) {


            int inputArray[100];
            int size, number, index;
        
            cout << "Enter Size of Array: ";
            cin >> size;
            cout << endl;

            if (size < 1 || size > 100)
                cout << "Invalid Size!" << endl << "Program Terminated!" << endl;

            else {

                for (int i = 0; i < size; i++) {
                    cout << "Enter Element " << i << ": ";
                    cin >> inputArray[i];
                }

                cout << endl;
                cout << "Enter Number to Search: ";
                cin >> number;

                index = search(inputArray, size, number);

                if (index == -1)
                    cout << "The Value " << number << " is not present in Array!";
                else
                    cout << "The Value " << number << " is present at index " << index;

                cout << endl << endl;

            }


        } else if (Qn == 10) {
        

            int size = 0;
            char character;
            char inputArray[100] = {};

            cout << "Enter Array (< 100 characters): ";
            cin.ignore();

            do {

                character = cin.get();
                
                if (character != '\n')
                    inputArray[size++] = character;

            } while (character != '\n');

            cout << "The Input String ";

            for (int i = 0; i < size; i++)
                cout << inputArray[i];

            if (palindromeString(inputArray, size))
                cout << " is a Palindrome";
            else
                cout << " is not a Palindrome";

            cout << endl << endl;


        } else {
        
            cout << "Wrong Question Number!" << endl << endl;

        }

        cout << endl;
        cout << "Press 1 to Re-run this Programme";
        cout << endl << "Press any other key to Exit: ";
        cin >> choice;
        cout << endl << endl;

    } while (choice == 1);

	return 0;

}
