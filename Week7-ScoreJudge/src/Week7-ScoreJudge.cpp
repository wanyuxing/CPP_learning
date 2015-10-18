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
	cout << min((int) ceil((100 - n) / 5.0), 7) << endl;;
	return 0;
}
