//============================================================================
// Name        : Week8-RiderWalk.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Rider and Walker in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] / 3.0 + 50 > a[i] / 1.2) cout << "Walk" << endl;
		else if (a[i] / 3.0 + 50 == a[i] / 1.2) cout << "All" << endl;
		else cout << "Bike" << endl;
	}
	return 0;
}
