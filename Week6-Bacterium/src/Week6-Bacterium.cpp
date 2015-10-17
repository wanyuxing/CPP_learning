//============================================================================
// Name        : Week6-Bacterium.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Bacterium evolving in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n; // n is the number of bacterium
	// id records the bacterium, rate is the growth rate
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i]  = (double)final / initial;
	}

	// sort the bacterium
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (rate[j + 1] > rate[j]) {
				int tmpId = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmpId;
				double tmpRate = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmpRate;
			}
		}
	}

	// record the largest discrepancy
	double maxDiff = 0;
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++) {
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff) {
			maxDiff = diff;
			maxDiffIndex = i;
		}
	}

	// output the id of bacterium with the largest growth rate
	cout << maxDiffIndex + 1 << endl;
	for (int i = maxDiffIndex; i >= 0; i--) {
		cout << id[i] << endl;
	}

	// output the id of bacterium with the smallest growth rate
	cout << n - maxDiffIndex - 1 << endl;
		for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
			cout << id[i] << endl;
		}
	return 0;
}
