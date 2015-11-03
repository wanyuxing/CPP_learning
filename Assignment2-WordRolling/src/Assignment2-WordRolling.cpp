//============================================================================
// Name        : Assignment2-WordRolling.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Rolling the word in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void revert(char a[], int n)
{
	if (n == 1)
	{ cout << a[0]; }
	else
	{
		cout << a[n - 1];
		revert(a, n - 1);
	}
}

int main() {
	char a[501] = {'\0'};
	int count = 0;
	cin.getline(a, 501);
	for (int i = 0; i < 501; i++)
	{
		if (a[i] == '\0')
		{
			char *to = new char[count];
			strncpy(to, a + i - count, count);
			revert(to, count + 1);
			break;
		}
		if (a[i] == ' ' || a[i] == '\t')
		{
			if (count != 0)
			{
				char *to = new char[count];
				strncpy(to, a + i - count, count);
				revert(to, count + 1);
			}
			count = 0;
			cout << a[i];
		}
		else
		{ count++; }
	}
	cout << '\0';
	return 0;
}
