//============================================================================
// Name        : Week5-OddEvenSum.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Add even numbers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int m, n, result = 0;
	cin >> m >> n;
	while (m <= n) {
		// Sum only the odd number
		if (m % 2 == 1)
			result += m;
		m++;
	}
	cout << result << endl;
	return 0;
}
