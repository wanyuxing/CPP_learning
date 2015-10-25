//============================================================================
// Name        : Week10-MoveCell.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Move cells rightward in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, k, cut;
	cin >> n >> k;
	cut = (n - k) % n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = cut; i < n; i++) cout << a[i] << ' ';
	for (int i = 0; i < cut; i++) cout << a[i] << ' ';
	cout << endl;
	return 0;
}
