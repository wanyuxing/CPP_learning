//============================================================================
// Name        : Week7-CNY.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : CNY Payment in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int hun = n / 100, fif = (n / 50) % 2 , two = (n % 50) / 20, ten = ((n - fif * 50) / 10) % 2, fiv = (n / 5) % 2, one = n % 5;
	cout << hun << endl << fif << endl << two << endl << ten << endl << fiv << endl << one << endl;
	return 0;
}
