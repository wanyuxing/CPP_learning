//============================================================================
// Name        : Assignment3-CalculateMatrix.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate the boundary of a matrix in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	int ans[k];
	for (int i = 0; i < k; i++)
	{
		int m, n, count = 0;
		cin >> m >> n;
		int a[m][n];
		for (int j = 0; j < m; j++)
			for (int h = 0; h < n; h++)
				cin >> a[j][h];
		for (int j = 0; j < m; j++)
		{
			if (j == 0 || j == m - 1)
			{
				for (int h = 0; h < n; h++)
				{ count += *(*(a + j) + h); }
			}
			else
			{
				count += **(a + j);
				count += *(*(a + j) + n - 1);
			}
		}
		ans[i] = count;
	}
	for (int i = 0; i < k; i++) cout << ans[i] << endl;
	return 0;
}
