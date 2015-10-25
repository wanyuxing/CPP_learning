//============================================================================
// Name        : Week10-SumAlpha.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate the number of alphabetic in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char a[80];
	int na = 0, ne = 0,  ni = 0, no = 0, nu = 0;
	cin.getline(a, 80);
	for (int i = 0; i < 80; i++)
	{
		if (a[i] == '\0') break;
		else if (a[i] == 'a') na++;
		else if (a[i] == 'e') ne++;
		else if (a[i] == 'i') ni++;
		else if (a[i] == 'o') no++;
		else if (a[i] == 'u') nu++;
	}
	cout << na << ' ' << ne << ' '<< ni << ' '<< no << ' '<< nu << endl;
	return 0;
}
