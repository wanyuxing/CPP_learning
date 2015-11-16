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
	for (int i = 0; i < n; i++)
	{
		int id, power;
		cin >> id >> power;
		a[power] = id;
		b[id] = power;
		ans[id] = (a.lower_bound(b[id])-1)->first;
	}
	for (map<int, int>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		cout << it->first << ' ' << it->second << endl;
	}
	return 0;
}
