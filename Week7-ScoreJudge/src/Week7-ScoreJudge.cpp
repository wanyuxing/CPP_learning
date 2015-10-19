//============================================================================
// Name        : Week7-ScoreJudge.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Score Judge in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int n; // record the score
	cin  >> n;
	if (n == 100) cout << 1 << endl;
	else if (n >=80) cout << min((int) ceil((100 - n) / 5.0), 7) << endl;
	else if (n >= 70) cout << 5 << endl;
	else if (n >= 60) cout << 6 << endl;
	else cout << 7 << endl;
	return 0;
}
