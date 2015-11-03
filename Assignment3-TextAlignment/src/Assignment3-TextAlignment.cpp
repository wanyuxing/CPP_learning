//============================================================================
// Name        : Assignment3-TextAlignment.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Text Alignment in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	char temp;
	scanf("%c", &temp);
	while (scanf("%c", &temp) != EOF)
	{
		if (count == 0 && temp == ' ')
		{ continue; }
		else if (count == 79)
		{
			if (temp == ' ')
			{ continue; }
			else
			{
				printf("%c\n", temp);
				count = 0;
			}
		}
		else
		{
			printf("%c", temp);
			count++;
		}
	}
	return 0;
}
