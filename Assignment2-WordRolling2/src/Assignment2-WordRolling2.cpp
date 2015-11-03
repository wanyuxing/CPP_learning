//============================================================================
// Name        : Assignment2-WordRolling2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Another solution in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverseWord(char arr[],int begin,int end)
{
	if (begin >= end) { return; }
	int tempBegin = begin;
	int tempEnd = begin;
	while ((!isalpha(arr[tempBegin]))&&(tempBegin<end))
	{
		tempBegin++;
		tempEnd ++;
	}

	while (isalpha(arr[tempEnd])) { tempEnd++; }

	begin = tempEnd;
	tempEnd--;

	while (tempBegin < tempEnd)
	{
		char temp = arr[tempBegin];
		arr[tempBegin] = arr[tempEnd];
		arr[tempEnd] = temp;
		tempBegin++;
		tempEnd--;
	}
	reverseWord(arr, begin, end);
}

int main() {
	char a[500] = {'\0'};
	cin.getline(a, 500);
	reverseWord(a, 0, 500);
	cout << a << endl;
	return 0;
}
