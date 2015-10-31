//============================================================================
// Name        : Week12-YearJudge.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate Leap Year in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a % 4 == 0)
		if (a % 100 == 0 && a % 400 != 0)
		{ cout << 'N' << endl; }
		else if (a % 3200 == 0)
		{ cout << 'N' << endl; }
		else
		{ cout << 'Y' << endl; }
	else cout << 'N' << endl;
	return 0;
}
