//============================================================================
// Name        : Homework8-Fighting.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Fighting in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> a, b, ans;
	a[1000000000] = 1;
	b[1] = 1000000000;
	bool fst = true;
	while (n--)
	{
		int id, power;
		cin >> id >> power;
		a[power] = id;
		b[id] = power;
		if (fst) { ans[id] = 1; fst = false; continue; }
		map<int, int>::iterator low = a.lower_bound(b[id]);
		if (low != a.begin()) low--;
		map<int, int>::iterator high = a.upper_bound(b[id]);
		if (high != a.end())
		{ (power - low->first <= high->first - power)? ans[id] = low->second:ans[id] = high->second; }
		else { ans[id] = low->second;}
	}
	for (map<int, int>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		cout << it->first << ' ' << it->second << endl;
	}
	return 0;
}
