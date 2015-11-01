//============================================================================
// Name        : Testing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int bottle, cap, empty;
	cap = empty = bottle = n / 2;
	while (cap >= 4 || empty >= 2)
	{
		int new_bottle = cap / 4 + empty / 2;
		cap %= 4;
		empty %= 2;
		cap += new_bottle;
		empty += new_bottle;
		bottle += new_bottle;
	}
	cout << bottle << endl;
	return 0;
}
