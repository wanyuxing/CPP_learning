//============================================================================
// Name        : Week6-OddEvenGap.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find the largest gap between even number and odd number in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <limits>
using namespace std;

int main() {
	int a[6]; // store 6 integers containing at least one odd and one even
	for (int i = 0; i < 6; i++) cin >> a[i]; // read data
	int oddLrg = numeric_limits<int>::min();
	int evenSml = numeric_limits<int>::max();
	for (int i = 0; i < 6; i++)
	{
		if (a[i] % 2) { if (a[i] > oddLrg) oddLrg = a[i]; }
		else { if (a[i] < evenSml) evenSml = a[i]; }
	}
	cout << abs(oddLrg - evenSml) << endl;
	return 0;
}
