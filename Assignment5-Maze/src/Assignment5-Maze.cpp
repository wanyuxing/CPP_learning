//============================================================================
// Name        : Assignment5-Maze.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find the shortest path in maze in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m, pos[2];
	cin >> n >> m;
	char a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 'T')
			{
				pos[0] = i;
				pos[1] = j;
			}
		}
	int count = 0;
	while (a[pos[0]][pos[1]] == 'T')
	{
		char copy[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				copy[i][j] = a[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (copy[i][j] == 'S')
				{
					if (j + 1 < m)
					{ if (copy[i][j + 1] == '.' || copy[i][j + 1] == 'T') a[i][j + 1] = 'S'; }
					if (j - 1 >= 0)
					{ if (copy[i][j - 1] == '.' || copy[i][j - 1] == 'T') a[i][j - 1] = 'S'; }
					if (i + 1 < n)
					{ if (copy[i + 1][j] == '.' || copy[i + 1][j] == 'T') a[i + 1][j] = 'S'; }
					if (i - 1 >= 0)
					{ if (copy[i - 1][j] == '.' || copy[i - 1][j] == 'T') a[i - 1][j] = 'S'; }
				}
			}
		count++;
	}
	cout << count << endl;
	return 0;
}
