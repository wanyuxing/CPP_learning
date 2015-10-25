//============================================================================
// Name        : Week10-MidNumber.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate the mid in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

void findMid(int, int);

int main() {
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if (n % 2 == 1) cout << a[n / 2] << endl;
		else cout << (a[n / 2] + a[n / 2 - 1]) / 2 << endl;
	}
	return 0;
}
