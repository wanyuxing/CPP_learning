//============================================================================
// Name        : Week4-OddEven2.cpp
// Author      : Henry Wan
// Version     : 2
// Copyright   : Your copyright notice
// Description : OddEven sort in a faster way in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	// bubble sort
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
			// revised version of swapping under bubble sort
			bool leftIsEven = a[j - 1] % 2 == 0;
			bool rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j - 1] > a[j])) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
