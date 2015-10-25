//============================================================================
// Name        : Week10-LongestWord.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Get the longest word in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char a[500];
	cin.getline(a, 500);
	int ans = 0, count = 0, pos = 0;
	for (int i = 0; i < 500; i++)
	{
		if (a[i] != ' ' && a[i] != '.') count++;
		else if (a[i] == '.') { if (count > ans) { ans = count; pos = i; } break; }
		else {if (count > ans) { ans = count; pos = i; } count = 0;}
	}
	for (int i = pos - ans; i < pos; i++) cout << a[i];
	cout << endl;
	return 0;
}
