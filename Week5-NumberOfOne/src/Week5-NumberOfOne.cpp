//============================================================================
// Name        : Week5-NumberOfOne.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Count the number of One in binary expression in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, ans = 0;
		cin >> x;
		while (x > 0) {
			ans += x % 2;
			x /= 2;
		}
		cout << ans << endl;
	}
	return 0;
}
