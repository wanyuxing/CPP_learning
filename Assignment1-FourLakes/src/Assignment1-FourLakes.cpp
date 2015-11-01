//============================================================================
// Name        : Assignment1-FourLakes.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Ranking the lakes in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int match(int a[], int b[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == b[i])
			count++;
	return count;
}

int main() {
	int a[4] = {3, 1, 2, 4}, b[4] = {2, 4, 3, 1}, c[4] = {0, 3, 0, 4},
			d[4] = {1, 3, 4, 2};
	int a1, b2, c3, d4;
	for (a1 = 1; a1 < 5; a1++)
	{
		for (b2 = 1; b2 < 5; b2++)
		{
			if (b2 != a1)
			{
				for (c3 = 1; c3 < 5; c3++)
				{
					if (c3 != a1 && c3 != b2)
					{
						d4 = 10 - a1 - b2 - c3;
						if (((a[0] == a1) + (a[1] == b2) + (a[2] == c3) + (a[3] == d4) == 1) &&
								((b[0] == a1) + (b[1] == b2) + (b[2] == c3) + (b[3] == d4) == 1) &&
								((c[0] == a1) + (c[1] == b2) + (c[2] == c3) + (c[3] == d4) == 1) &&
								((d[0] == a1) + (d[1] == b2) + (d[2] == c3) + (d[3] == d4) == 1))
								{
									cout << a1 << endl;
									cout << b2 << endl;
									cout << c3 << endl;
									cout << d4 << endl;
									return 0;
								}
					}
				}
			}
		}
	}
	return 0;
}
