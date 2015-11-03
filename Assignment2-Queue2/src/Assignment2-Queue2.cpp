//============================================================================
// Name        : Assignment2-Queue2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Another solutino in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char boy, temp;
	int num = 0, end = 0, pos[50];
	pos[0] = 0;
	scanf("%c", &boy);
	while (scanf("%c", &temp) != EOF)
	{
		if (temp == boy)
		{
			num++;
			end++;
			pos[num] = end;
		}
		else
		{
			end++;
			printf("%d %d\n",pos[num],end);
			num--;
		}
		if (num <= 0) break;
	}
	return 0;
}
