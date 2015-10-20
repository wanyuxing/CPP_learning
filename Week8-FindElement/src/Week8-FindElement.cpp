//============================================================================
// Name        : Week8-FindElement.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Find two elements suming up to k in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] + a[j] == k)
			{ cout << "yes" << endl; return 0; }
		}
	}
	cout << "no" << endl;
	return 0;
}
