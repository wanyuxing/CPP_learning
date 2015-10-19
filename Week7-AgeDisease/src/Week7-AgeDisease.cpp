//============================================================================
// Name        : Week7-AgeDisease.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Relationship between age and disease in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n; // the number of patients
	cin >> n;
	int age[n], count[4]; // record the age of patients
	float rate[4];
	for (int i = 0; i < 4; i++) count[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> age[i];
		if (age[i] <= 18) count[0]++;
		else if (age[i] <= 35) count[1]++;
		else if (age[i] <= 60) count[2]++;
		else count[3]++;
	}
	int total = 0;
	for (int i = 0; i < 4; i++) total += count[i];
	for (int i = 0; i < 4; i++) rate[i] = 100.0 * count[i] / total;
	cout << "1-18: " << fixed << setprecision(2) << rate[0] << '%' << endl;
	cout << "19-35: " << fixed << setprecision(2) << rate[1] << '%' << endl;
	cout << "36-60: " << fixed << setprecision(2) << rate[2] << '%' << endl;
	cout << "60-: " << fixed << setprecision(2) << rate[3] << '%' << endl;
	return 0;
}
