//============================================================================
// Name        : Week6-LargestScore.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Largest score in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, largest; // the number of scores, largest number
	cin >> n;
	int scores[n];
	for (int i = 0; i < n; i++) cin >> scores[i]; // read data
	largest = 0;
	for (int i = 0; i < n; i++) if (scores[i] > largest) largest = scores[i]; // find the largest
	cout << largest << endl;
	return 0;
}
