//============================================================================
// Name        : Assignment5-K3.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : K 3 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int m, k;
	cin >> m >> k;
	if (m % 19 == 0)
	{
		int count = 0;
		while (m > 0)
		{
			count += ((m % 10) == 3);
			m /= 10;
		}
		if (count == 3)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
