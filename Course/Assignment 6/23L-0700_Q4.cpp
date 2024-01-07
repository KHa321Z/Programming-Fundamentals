#include <iostream>
#include <string>

using namespace std;

bool timeValidator(int time[]) {

	if ((time[0] < 0 || time[0] > 23) || (time[1] < 0 || time[1] > 59) || (time[2] < 0 || time[2] > 59) || (time[3] < 0 || time[3] > 999))
		return false;

	return true;

}

bool timeStore(char time[], int timeArray[]) {

	int index = 0, placement = 10;

	for (int i = 0; i < 13 && time[i] != '\0'; i++) {

		if (time[i] == ':')
			index++;

		else if (time[i] < 48 || time[i] > 57)
			return false;

		else
			timeArray[index] = timeArray[index] * placement + (time[i] - '0');

	}

	if (index != 3)
		return false;

	return timeValidator(timeArray);

}

bool greaterTime(int time1[], int time2[], int& sTime, int& eTime) {

	sTime = (((time1[0] * 60) + time1[1]) * 60 + time1[2]) * 1000 + time1[3];
	eTime = (((time2[0] * 60) + time2[1]) * 60 + time2[2]) * 1000 + time2[3];

	if (sTime > eTime)
		return false;

	return true;

};

void timeDifference(int time1[], int sTime, int eTime) {

	eTime -= sTime;

	time1[0] = eTime / 3600000;

	eTime -= time1[0] * 3600000;
	time1[1] = eTime / 60000;

	eTime -= time1[1] * 60000;
	time1[2] = eTime / 1000;

	eTime -= time1[2] * 1000;
	time1[3] = eTime;

}


int main()
{

	char startTime[13] = {};
	char endTime[13] = {};
	int time1[4] = {};
	int time2[4] = {};

	int sTime, eTime;
	bool correctInput = true;


	cout << "Start Time (HH:MM:SS:MMS): ";
	cin.getline(startTime, 13);

	if (!cin)
		cin.clear(), correctInput = false;

	cout << "End Time (HH:MM:SS:MS): ";
	cin.getline(endTime, 13);

	if (!cin)
		cin.clear(), correctInput = false;

	if (!correctInput || !timeStore(startTime, time1) || !timeStore(endTime, time2)) {
		cout << endl << "Time Entered Incorrect! Program Terminated!";
		return 0;
	}

	if (!greaterTime(time1, time2, sTime, eTime)) {
		cout << endl << "Invalid Input! Ending Time < Starting Time";
		return 0;
	}

	timeDifference(time1, sTime, eTime);

	cout << endl << "Duration: " << time1[0] << ":" << time1[1] << ":" << time1[2] << ":" << time1[3];

	return 0;

}