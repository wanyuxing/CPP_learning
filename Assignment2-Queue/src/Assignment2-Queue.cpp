//============================================================================
// Name        : Assignment2-Queue.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Queuing in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

array<int, 2> search(char a[], int n)
{
	array<int, 2> ans;
	ans[0] = ans[1] = -1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == '\0' || a[i] == ')')
		{ continue; }
		else
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] == '\0')
				{ continue; }
				else if (a[j] == '(')
				{ break; }
				else
				{
					ans[0] = i;
					ans[1] = j;
					return ans;
				}
			}
		 }
	 }
	 return ans;
}

int main() {
	char n[100] = {'\0'};
	int count = 0;
	cin.getline(n, 100);
	for (int i = 0; i < 100; i++)
	{
		if (n[i] == '\0') break;
		count++;
	}
	while (n[0] != '\0')
	{
		array<int, 2> pos;
		pos = search(n, count);
		cout << pos[0] << ' ' << pos[1] << endl;
		n[pos[0]] = '\0';
		n[pos[1]] = '\0';
	}
	return 0;
}
