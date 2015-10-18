//============================================================================
// Name        : Week7-FindNumber.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find the Kth largest number in a list in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, k, point;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	while (k > 0)
	{
		int largest = 0;
		for (int i = 0; i < n; i++)
		{
			largest = max(largest, a[i]);
			if (largest == a[i]) point = i;
		}
		if (k == 1) break;
		k--;
		a[point] = 0;
	}
	cout << a[point] << endl;
	return 0;
}
