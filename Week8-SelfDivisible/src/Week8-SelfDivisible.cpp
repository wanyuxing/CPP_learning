//============================================================================
// Name        : Week8-SelfDivisible.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : 21 % (2 + 1) = 0 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 10; i < n; i++)
	{ if (i % (i / 10 + i % 10) == 0) cout << i << endl; }
	return 0;
}
