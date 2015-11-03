//============================================================================
// Name        : Assignment3-EnumerateMatrix.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Wark through the matrx in C++, Ansi-style
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
	for (int i = 0; i < m + n; i++)
	{
		int k = min(i, n - 1);
		while (k >= 0)
		{
			int j = i - k;
			if (j > m - 1) break;
			cout << *(*(a + j) + k) << endl;
			k--;
		}
	}
	return 0;
}
