#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int choice = 0;
    char Qn;

    int number, factorial, ch;
    int num1, num2, res;
    int table, length;
    int fl, rooms, occupiedRooms = 0, totalRooms = 0;
    int startingPoint;
    int n, result = 0;
	int n1;
	float sum = 0;

    do
    {
        cout << "Please Enter QN: 1, 2, 3, 4, 5, 6, 7, 8, 9\t";
        cin >> Qn;
        switch (Qn)
        {
        case '1':

            cout << endl;
            cout << "The Square Root of First 25 Odd Integers are: ";
            cout << endl;

            for (int i = 0; i < 25; i++)
                cout << "Square Root of " << i * 2 + 1 << ": " << sqrt(i * 2 + 1) << endl;

            break;

        case '2':

            ch = 1;

            while (ch == 1) {

                if (!ch)
                    break;

                factorial = 1;

                cout << endl;
                cout << "Enter Number whose Factorial is to be Calculated: ";
                cin >> number;

                for (; number > 1; factorial *= number--);

                (number < 0) ? cout << "Invalid Input" : cout << "Factorial = " << factorial;

                cout << endl << endl;
                cout << "Would you like to Calculate Factorial Again (Enter 1 if YES, 0 if NOT): ";
                cin >> ch;
                cout << endl;

            }

            break;

        case '3':

            cout << endl;
            cout << "Enter the Base Number: ";
            cin >> num1;
            cout << "Enter the Exponent: ";
            cin >> num2;

            res = 1;
            
            do
                res *= num1;
            while (--num2 > 0);

            cout << "The Result is: " << res;
            cout << endl;
            
            break;

        case '4':
            
            cout << endl;
            cout << "Enter the Table Number: ";
            cin >> table;
            cout << "Enter the Length of the Table: ";
            cin >> length;

            for (int i = 1; i <= length; i++)
                cout << table << " x " << i << " = " << table * i << endl;

            break;

        case '5':
            
            cout << endl;
            cout << "Enter the Number of Floors: ";
            cin >> fl;
            cout << endl;

            for (int i = 1; i <= fl; i++) {

                if (i == 13)
                    continue;

                cout << "Enter Rooms for Floor " << i << ": ";
                cin >> rooms;

                totalRooms += rooms;

                cout << "Enter Occupied Rooms  for Floor " << i << ": ";
                cin >> rooms;

                occupiedRooms += rooms;

            }

            cout << endl;
            cout << endl << "Total Rooms in Hotel: " << totalRooms ;
            cout << endl << "Occupied Rooms in Hotel: " << occupiedRooms;
            cout << endl << "Unoccupied Rooms in Hotel: " << totalRooms - occupiedRooms;
            cout << endl << "Percentage of Occupied Rooms: " << occupiedRooms / (float)totalRooms * 100 << "%";
            cout << endl;

            break;

        case '6':
            
            cout << endl;
            cout << "Enter Starting Number: ";
            cin >> startingPoint;
            cout << endl;

            for (; startingPoint > 0; startingPoint--, cout << endl)
                for (int i = 0; i < startingPoint; i++)
                    cout << startingPoint << " ";

            break;

        case '7':
            
            cout << endl;
            cout << "Enter a Positive Integer: ";
            cin >> n;

            for (int i = 1; i <= n; result += (i * i), i++)
                (i == n) ? (cout << i << "^2 = ") : (cout << i << "^2 + ");

			cout << result;
			cout << endl;

            break;

		case '8':

			cout << endl;
			cout << "Enter a Positive Integer: ";
			cin >> n1;

			cout << "Series: ";
			
			for (int i = 1; i <= n1; sum += (1.0 / (i * 2)), i++)
				(i == n1) ? (cout << "1/" << i * 2) : (cout << "1/" << i * 2 <<  " + ");

			cout << endl;
			cout << "Sum = " << sum;
			cout << endl;

			break;

		case '9':

			cout << endl;
			cout << "a)" << endl;
			cout << 4 << endl;
			cout << 5 << endl;
			cout << 6 << endl;

			cout << endl;
			cout << "b)" << endl;
			cout << -1 << endl;

			break;

        default:
            cout << "Wrong Input \n";

        }

        cout << "\nPress 1 if you want to ReRun this programe\n Press any other key to exit";
        cin >> choice;

    } while (choice == 1);

    system("pause");

    return 0;
    
}
