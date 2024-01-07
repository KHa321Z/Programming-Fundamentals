#include <iostream>
#include <string>

using namespace std;

int equilibriumIndex(int dataArray[]) {


	for (int i = 0; i < 10; i++) {

		bool changeSum = false;
		int beforeSum = 0, afterSum = 0;

		for (int j = 0; j < 100; j++)
			if (i == j)
				changeSum = true;
			else
				(!changeSum) ? beforeSum += dataArray[j] : afterSum += dataArray[j];

		if (beforeSum == afterSum)
			return (i);

	}

	return (-1);

}


int main()
{

	int index = 0;
	int dataArray[100] = {};

	do {

		cout << "Enter Array Element[" << index << "]: ";
		cin >> dataArray[index];

	} while (dataArray[index++] != -99 && index < 100);

	if (dataArray[index - 1] == -99)
		dataArray[index - 1] = 0;

	cout << endl;

	index = equilibriumIndex(dataArray);

	if (index == -1)
		cout << "There is no Equilibrium Index!" << endl;

	else
		cout << index << " is an Equilibrium Index!" << endl;


	return 0;

}