//============================================================================
// Name        : Week8-BuyHouse.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Buy a house in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k)
	{
		int saving = n, house = 200, count = 1;
		double gap = house - saving, trend = 0.0;
		while (gap > 0 && trend >= 0)
		{
			saving += n;
			trend = n - house * k / 100.0;
			house *= (1 + k / 100.0);
			gap = house - saving;
			count++;
		}
		if (gap <= 0 && count <= 20) cout << count << endl;
		else cout << "Impossible" << endl;
	}
	return 0;
}
