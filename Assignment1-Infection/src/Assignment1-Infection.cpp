//============================================================================
// Name        : Assignment1-Infection.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Infection in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> m;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
			{
				if (a[j][k] == '@')
				{
					if (j > 0)
					{ if (a[j - 1][k] != '#') {a[j - 1][k] = 'N';} }
					if (j < n - 1)
					{ if (a[j + 1][k] != '#') {a[j + 1][k] = 'N';} }
					if (k < n - 1)
					{ if (a[j][k + 1] != '#') {a[j][k + 1] = 'N';} }
					if (k > 0)
					{ if (a[j][k - 1] != '#') {a[j][k - 1] = 'N';} }
				}
			}
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if (a[j][k] == 'N') a[j][k] ='@';
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == '@') { count++; }
	cout << count << endl;
	return 0;
}
