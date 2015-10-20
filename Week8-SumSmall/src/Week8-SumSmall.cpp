//============================================================================
// Name        : Week8-SumSmall.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Sum all numbers smaller than the first one in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[6];
	int ans = 0;
	for (int i = 0; i < 6; i++) cin >> a[i];
	for (int i = 1; i < 6; i++) if (a[i] < a[0]) ans += a[i];
	cout << ans << endl;
	return 0;
}
