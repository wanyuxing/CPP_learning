//============================================================================
// Name        : Assignment5-LargePoint.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find the large points in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][2];
	for (int i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][0] > a[j][0])
			{
				int temp[2];
				temp[0] = a[i][0];
				temp[1] = a[i][1];
				a[i][0] = a[j][0];
				a[i][1] = a[j][1];
				a[j][0] = temp[0];
				a[j][1] = temp[1];
			}
		}
	bool first = true;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (j != i)
			{
				if ((a[i][0] <= a[j][0]) && (a[i][1] <= a[j][1]))
				{
					flag = false;
					break;
				}
			}
		}
		if (first == false) cout << ',';
		if (flag == true)
		{
			cout << '(' << a[i][0] << ',' << a[i][1] << ')';
			first = false;
		}
	}
	return 0;
}
