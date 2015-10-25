//============================================================================
// Name        : Week10-AbnormalCell.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Detect the number of abnormal cells in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			if (a[i][j] <= a[i - 1][j] - 50 && a[i][j] <= a[i][j - 1] - 50
					&& a[i][j] <= a[i + 1][j] - 50 && a[i][j] <= a[i][j + 1] - 50)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
