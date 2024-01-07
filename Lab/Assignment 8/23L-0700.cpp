#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int modulo(int, int);

double toCelcius(double);
double toFahrenheit(double);

void getArray(int[]);
void getArray(char[]);
void printArray(int[]);
void printArray(char[]);
void swapFunction(double&, double&);

int findEven(int[]);

double area(double, double);


int binarySearch(int dataArray[], int find, int start = 0, int end = 10) {

    if (end < start)
        return -1;

    int mid = (start + end) / 2;

    if (find == dataArray[mid])
        return (mid);

    else if (find < dataArray[mid])
        return (binarySearch(dataArray, find, start, mid - 1));

    else if (find > dataArray[mid])
        return (binarySearch(dataArray, find, mid + 1, end));

}


int main()
{
	
    int choice = 0;
    int Qn;

    do
    {
        cout << "Please Select QN: 1, 2, 3, 4, 5, 6, 7, 8" << endl;
        cout << "QN: ";
        cin >> Qn;
        cout << endl << endl;
        
        if (Qn == 1) {


            char choice2;
            int a, b;

            cout << "WELCOME TO CALCULATOR";

            do {

                cout << endl;
                cout << endl;
                cout << endl;
                cout << "\t 1. Addition (+)" << endl;
                cout << "\t 2. Subtraction (-)" << endl;
                cout << "\t 3. Multiplication (*)" << endl;
                cout << "\t 4. Division (/)" << endl;
                cout << "\t 5. Modulo (%)" << endl;
                cout << "\t 6. Exit" << endl;
                cout << endl;
                cout << "Enter Choice: ";
                cin >> choice2;

                if (choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != '4' && choice2 != '5' && choice2 != '6') {
                    cout << endl << "Invalid Choice";
                    continue;
                }

                if (choice2 != '6') {

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
                    (b == 0) ? cout << "Error! Denominator cannot be 0!" : cout << "Result: " << division(a, b);

                else if (choice2 == '5')
                    cout << "Result: " << modulo(a, b);

                else if (choice2 == '6')
                    cout << endl << "Thank You for Using the CALCULATOR" << endl;

            } while (choice2 != '6');

            cout << endl << endl;


        } else if (Qn == 2) {


            double result;
            double temperature;
            int t;

            cout << "Welcome To Temperature Convertor\n";
            cout << "Enter 1 to Convert and anything Else to Print Chart: ";
            cin >> t;
            cout << endl;

            if (t == 1) {

                cout << "Enter 1 to Change Calcius to Farenheit And 2 to do Otherwise: ";
                cin >> t;

                while (t != 1 && t != 2) {
                    cout << "Enter a valid Option ";
                    cin >> t;
                }

                if (t == 1) {

                    cout << endl;
                    cout << "Enter Temperature in Celsius: ";
                    cin >> temperature;
                    result = toCelcius(temperature);
                    cout << temperature << "C is equal to " << result << "F";
                    cout << endl << endl;

                } else if (t == 2) {

                    cout << endl;
                    cout << "Enter Temperature in Fahrenheit: ";
                    cin >> temperature;
                    result = toFahrenheit(temperature);
                    cout << temperature << "F is equal to " << result << "C";
                    cout << endl << endl;

                }

            } else {

                cout << "Farhenheit\t|\tCelcius\t\t\t\tCelcius\t\t|\tFarhenheit" << endl;

                for (int i = 32; i <= 212; i++)
                    cout << i << "\t\t|\t" << toFahrenheit(i) << "\t\t\t\t" << i-32 << "\t\t|\t" << toCelcius(i - 32) << endl;

                cout << endl;

            }

        
        } else if (Qn == 3) {


            int integerArr[10] = {};

            getArray(integerArr);

            cout << endl;
            cout << "Total Number of Even Numbers: " << findEven(integerArr);
            cout << endl << endl;

        
        } else if (Qn == 4) {

        
            int integerArr[10];

            getArray(integerArr);

            cout << endl;
            cout << endl;
            cout << "Input: ";
            printArray(integerArr);
            cout << endl;

            for (int i = 0; i < 10; i++)
                for (int j = 0; j < 10 - i - 1; j++)
                    if (integerArr[j] < integerArr[j + 1])
                        swap(integerArr[j], integerArr[j + 1]);

            cout << "Output: ";
            printArray(integerArr);
            cout << endl << endl;


        } else if (Qn == 5) {
        

            char characterArr[10];

            getArray(characterArr);

            cout << endl;
            cout << endl;
            cout << "Input: ";
            printArray(characterArr);
            cout << endl;

            for (int i = 0; i < 10; i++)
                for (int j = 0; j < 10 - i - 1; j++)
                    if (characterArr[j] > characterArr[j + 1])
                        swap(characterArr[j], characterArr[j + 1]);

            cout << "Output: ";
            printArray(characterArr);
            cout << endl << endl;


        } else if (Qn == 6) {
            

            double length, width;

            cout << "Enter Length of Rectangle: ";
            cin >> length;
            cout << "Enter Width of Rectangle: ";
            cin >> width;
            cout << endl;
            cout << "Area = " << area(length, width);
            cout << endl << endl;


        } else if (Qn == 7) {
        

            double a, b;
            
            cout << "Enter Value a: ";
            cin >> a;
            cout << "Enter Value b: ";
            cin >> b;

            swapFunction(a, b);

            cout << endl;
            cout << "Value of a: " << a << endl;
            cout << "Value of b: " << b << endl;
            cout << endl;


        } else if (Qn == 8) {
        

            int num, index;
            int dataArray[10] = {};

            getArray(dataArray);

            cout << endl;
            cout << "Enter Number to Search: ";
            cin >> num;
            cout << endl;
            
            index = binarySearch(dataArray, num);

            (index == -1) ? cout << "Not Found!" : cout << "Number is at Index " << index;

            cout << endl << endl;
        

        }  else {
        
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

int addition(int a, int b) {
    return (a + b);
}

int subtraction(int a, int b) {
    return (a - b);
}

int multiplication(int a, int b) {
    return (a * b);
}

int division(int a, int b) {
    return (a / b);
}

int modulo(int a, int b) {
    return (a % b);
}

double toCelcius(double fahrenheit) {
    return (9.0 / 5.0 * fahrenheit + 32);
}

double toFahrenheit(double celcius) {
    return (5.0 / 9.0 * (celcius - 32));
}

void getArray(int inputArray[]) {

    for (int i = 0; i < 10; i++) {
        cout << "Enter Array Element[" << i << "]: ";
        cin >> inputArray[i];
    }

}

void getArray(char inputArray[]) {

    for (int i = 0; i < 10; i++) {
        cout << "Enter Array Element[" << i << "]: ";
        cin >> inputArray[i];
    }

}

void printArray(int inputArray[]) {

    for (int i = 0; i < 10; i++)
        cout << inputArray[i] << " ";

}

void printArray(char inputArray[]) {

    for (int i = 0; i < 10; i++)
        cout << inputArray[i] << " ";

}

void swapFunction(double& a, double& b) {

    double temp = a;
    a = b;
    b = temp;

}

int findEven(int inputArray[]) {

    int count = 0;

    for (int i = 0; i < 10; i++)
        if (inputArray[i] % 2 == 0)
            count++;

    return (count);

}

double area(double l, double w) {
    return (l * w);
}
