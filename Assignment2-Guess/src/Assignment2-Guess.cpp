//============================================================================
// Name        : Assignment2-Guess.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate to 1 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 1)
		{
			cout << n << "*3+1=" << n * 3 + 1 << endl;
			n = n * 3 + 1;
		}
		else
		{
			cout << n << "/2=" << n / 2 << endl;
			n /= 2;
		}
	}
	cout << "End" << endl;
	return 0;
}
