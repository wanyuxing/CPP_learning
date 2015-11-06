//============================================================================
// Name        : Assignment5-StringCount.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : String in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char a[501];
	int ans[26] = {0};
	cin.getline(a, 501);
	for (int i = 0; i <= 500; i++)
	{
		if (a[i] == '\0') break;
		if (a[i] >= 65 && a[i] <= 90) ans[a[i] - 65]++;
		else if (a[i] >= 97 && a[i] <= 122) ans[a[i] - 97]++;
	}
	int largest = 0;
	for (int i = 0; i < 26; i++)
		if (ans[i] > largest) largest = ans[i];
	int second = 0;
	for (int i = 0; i < 26; i++)
	{
		if (ans[i] != largest && ans[i] > second)
			second = ans[i];
	}
	int final;
	for (int i = 0; i < 500; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			if (ans[a[i] - 65] == second)
			{
				final = a[i] - 65;
				break;
			}
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			if (ans[a[i] - 97] == second)
			{
				final = a[i] - 97;
				break;
			}
		}
	}
	cout << char(final + 65) << '+' << char(final + 97) << ':' << ans[final] << endl;
	return 0;
}
