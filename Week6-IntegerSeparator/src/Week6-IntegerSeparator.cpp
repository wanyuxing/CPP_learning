//============================================================================
// Name        : Week6-IntegerSeparator.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Separate an integer digit by digit in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = log10(n); i >= 0; i--) cout << (n / (int) pow(10, i)) % 10 << endl;
	return 0;
}
