//============================================================================
// Name        : Week6-AppleWorm.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Apple & Worm in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int n, rate, time; // n is the apple number, rate is the consuming rate
	cin >> n >> rate >> time;
	cout << max(n - (int) ceil((double) time / rate), 0) << endl;
	return 0;
}
