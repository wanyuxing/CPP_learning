//============================================================================
// Name        : Assignment4-Patient.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Patients in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

struct patient
{
	char num[3];
	float rate;
};

int main() {
	int m;
	float threshold;
	cin >> m >> threshold;
	patient p[m];
	for (int i = 0; i < m; i++)
	{
		cin >> p[i].num >> p[i].rate;
	}
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
		{
			if (p[i].rate < p[j].rate)
			{
				patient temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	for (int i = 0; i < m; i++)
	{
		if (p[i].rate < threshold) break;
		cout << p[i].num << ' ' << fixed << setprecision(1) << p[i].rate << endl;
	}
	return 0;
}
