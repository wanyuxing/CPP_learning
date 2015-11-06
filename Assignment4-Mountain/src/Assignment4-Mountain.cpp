//============================================================================
// Name        : Assignment4-Mountain.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Print out mountain in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1])
						cout << i << ' ' << j << endl;
				}
				else if (j == n - 1)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1])
						cout << i << ' ' << j << endl;
				}
				else
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
						cout << i << ' ' << j << endl;
				}
			}
			else if (i == m - 1)
			{
				if (j == 0)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1])
						cout << i << ' ' << j << endl;
				}
				else if (j == n - 1)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
						cout << i << ' ' << j << endl;
				}
				else
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
						cout << i << ' ' << j << endl;
				}
			}
			else
			{
				if (j == 0)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i + 1][j])
						cout << i << ' ' << j << endl;
				}
				else if (j == n - 1)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j])
						cout << i << ' ' << j << endl;
				}
				else
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i + 1][j])
						cout << i << ' ' << j << endl;
				}
			}
		}
	return 0;
}
