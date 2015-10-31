//============================================================================
// Name        : Week12-Divide357.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Divide by 3, 5, 7 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	while (cin >> a)
	{
		if (a % 3 == 0) cout << 3;
		if (a % 5 == 0)
			{
				if (a % 3 == 0) cout << ' ' << 5;
				else cout << 5;
			}
		if (a % 7 == 0)
			{
				if (a % 5 == 0 || a % 3 == 0) cout << ' ' << 7;
				else cout << 7;
			}
		if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0) cout << 'n';
		cout << endl;
	}
	return 0;
}
