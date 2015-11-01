//============================================================================
// Name        : Assignment1-FindNext.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find position in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == i)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << 'N' << endl;
	return 0;
}
