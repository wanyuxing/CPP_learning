//============================================================================
// Name        : Assignment1-BacteriumExperiment.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Bacterium Experiment in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a[n][4], total = 0, average;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
		a[i][3] = a[i][2] / a[i][1];
		total += a[i][3];
	}
	average = total / n;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][3] > a[j][3])
			{
				double temp1 = a[i][3];
				a[i][3] = a[j][3];
				a[j][3] = temp1;
				double temp2 = a[i][0];
				a[i][0] = a[j][0];
				a[j][0] = temp2;
			}
		}
	int countLarge = 0, countSmall = 0;
	for (int i = 0; i < n; i++)
	{ if (a[i][3] > average) countLarge++; }
	for (int i = 0; i < n; i++)
	{ if (a[i][3] < average) countSmall++; }
	cout << countLarge << endl;
	for (int i = n - countLarge; i < n; i++)
	{ if (a[i][3] > average) cout << a[i][0] << endl; }
	cout << countSmall << endl;
	for (int i = 0; i < countSmall; i++)
	{ if (a[i][3] < average) cout << a[i][0] << endl; }
	return 0;
}
