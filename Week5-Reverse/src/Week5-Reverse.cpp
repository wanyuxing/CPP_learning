//============================================================================
// Name        : Week5-Reverse.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Reverse the input in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int a[100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (n--) {
		cout << a[n];
		if (n > 0) cout << " ";
	}
	return 0;
}
