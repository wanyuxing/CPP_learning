//============================================================================
// Name        : Assignment1-Tomorrow.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Tomorrow never know? in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

bool leapYear (int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 == 0)
			return true;
		else if (year % 100 == 0)
			return false;
		else
			return true;
	}
	return false;
}

int main() {
	const int monthList[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	if (month == 12 && day == 31)
	{
		year++;
		month = day = 1;
	}
	else
	{
		if (month == 2)
		{
			if (day == 29)
			{
				month = 3;
				day = 1;
			}
			else if (day == 28)
			{
				if (leapYear(year))
				{ day++; }
				else
				{
					month++;
					day = 1;
				}
			}
			else
			{ day++; }
		}
		else if (day == monthList[month - 1])
		{
			month++;
			day = 1;
		}
		else
		{ day++; }
	}
	printf("%d-%02d-%02d\n", year, month, day);
	return 0;
}
