//============================================================================
// Name        : Week10-TreeRemove.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Remove tree in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int l, m, count = 0;
	cin >> l >> m;
	int rail[m][2], ans[l + 1];
	for (int i = 0; i <= l; i++) ans[i] = 0;
	for (int i = 0; i < m; i++) { cin >> rail[i][0] >> rail[i][1]; }
	for (int i = 0; i < m; i++)
	{
		for (int j = rail[i][0]; j <= rail[i][1]; j++)
		{ if (ans[j] == 0) ans[j] = 1; }
	}
	for (int i = 0; i <= l; i++)
		if (ans[i] == 0) count++;
	cout << count << endl;
	return 0;
}
