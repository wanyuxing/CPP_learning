//============================================================================
// Name        : Week12-StringInsert.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Insert a string in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char str[11], sub[4];
	cin.getline(str, 11, ' ');
	cin.getline(sub, 4, '\0');
	int pos = 0;
	for (int i = 0; i < 11; i++)
	{
		if (str[i] == '\0') break;
		else if (str[i] > str[pos]) pos = i;
	}
	for (int i = 0; i < pos + 1; i++) cout << str[i];
	cout << sub;
	for (int i = pos + 1; i < 11; i++)
	{
		if (str[i] == '\0') break;
		else cout << str[i];
	}
	cout << '\0' << endl;
	return 0;
}
