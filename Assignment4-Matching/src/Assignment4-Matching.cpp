//============================================================================
// Name        : Assignment4-Matching.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Matching in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n][256], enter[1];
	cin.getline(enter, 1);
	for (int i = 0; i < n; i++)
	{ cin.getline(a[i], 256); }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 256; j++)
		{
			if (a[i][j] == 'A') { cout << 'T'; }
			else if (a[i][j] == 'T') { cout << 'A'; }
			else if (a[i][j] == 'C') { cout << 'G'; }
			else if (a[i][j] == 'G') { cout << 'C'; }
			else { cout << '\0' << endl; break;}
		}
	}
	return 0;
}
