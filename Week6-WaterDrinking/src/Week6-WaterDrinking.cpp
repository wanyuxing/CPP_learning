//============================================================================
// Name        : Week6-WaterDrinking.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Water Drinking in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int h, r; // the height and radius of a bucket
	int const TOTAL = 20000;
	cin >> h >> r;
	cout << (int) ceil(TOTAL / M_PI / pow(r, 2) / h) << endl;
	return 0;
}
