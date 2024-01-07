#include <iostream>
using namespace std;

char gender;
float bodyFat;
float weight, wristM, waistM, hipM, forearmM;
float A1, A2, A3, A4, A5, B;

int main()
{

	cout << "Enter Gender (M/F): ";
	cin >> gender;
	cout << endl;

	if (gender == 'M' || gender == 'm') {

		cout << "Body Weight (lbs): ";
		cin >> weight;
		cout << "Wrist Measurement (inches): ";
		cin >> wristM;
		cout << endl;

		A1 = (weight * 1.082) + 9.442;
		A2 = wristM * 4.15;

		B = A1 - A2;

		bodyFat = weight - B;

		cout << "Body Fat Calculation:" << endl;
		cout << "Body Fat: " << bodyFat << " pounds" << endl;
		cout << "Body Fat Percentage: " << bodyFat * 100 / weight << "%" << endl;

	} else if (gender == 'F' || gender == 'f') {

		cout << "Body Weight (lbs): ";
		cin >> weight;
		cout << "Wrist Measurement (inches): ";
		cin >> wristM;
		cout << "Waist Measurement (inches): ";
		cin >> waistM;
		cout << "Hip Measurement (inches): ";
		cin >> hipM;
		cout << "Forearm Measurement (inches): ";
		cin >> forearmM;
		cout << endl;

		A1 = (weight * 0.732) + 8.987;
		A2 = wristM / 3.140;
		A3 = waistM * 0.157;
		A4 = hipM * 0.249;
		A5 = forearmM * 0.434;

		B = A1 + A2 - A3 - A4 + A5;

		bodyFat = weight - B;

		cout << "Body Fat Calculation:" << endl;
		cout << "Body Fat: " << bodyFat << " pounds" << endl;
		cout << "Body Fat Percentage: " << bodyFat * 100 / weight << "%" << endl;

	};

	return 0;

};