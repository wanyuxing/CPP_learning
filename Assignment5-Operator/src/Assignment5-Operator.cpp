//============================================================================
// Name        : Assignment5-Operator.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Operator in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[3];
	char b;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
		if (i != 2)
			cin >> b;
	}
	if (a[0] + a[1] == a[2]) cout << '+' << endl;
	else if (a[0] - a[1] == a[2]) cout << '-' << endl;
	else if (a[0] * a[1] == a[2]) cout << '*' << endl;
	else if (a[0] / a[1] == a[2]) cout << '/' << endl;
	else if (a[0] % a[1] == a[2]) cout << '%' << endl;
	else cout << "error" << endl;
	return 0;
}
