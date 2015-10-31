//============================================================================
// Name        : Week12-LongestDist.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate the longest distance in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a[n][2], dis = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
			cin >> a[i][j];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			double newDist = sqrt(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
			if (newDist > dis) dis = newDist;
		}
	cout << fixed << setprecision(4) << dis << endl;
	return 0;
}
