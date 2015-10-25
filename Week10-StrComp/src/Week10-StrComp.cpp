//============================================================================
// Name        : Week10-StrComp.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Compare string in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

char convert(char);

int main() {
	char a[80], b[80], ans = 'w';
	cin.getline(a, 80);
	cin.getline(b, 80);
	for (int i = 0; i < 80; i++)
	{
		if (a[i] == '\0' || b[i] == '\0')
		{
			if (a[i] != '\0') { ans = '>'; break; }
			else if (b[i] != '\0') { ans = '<'; break; }
			else { ans = '='; break; }
		}
		else
		{
			if (convert(a[i]) > convert(b[i])) { ans = '>'; break; }
			if (convert(a[i]) < convert(b[i])) { ans = '<'; break; }
			continue;
		}
	}
	cout << ans << endl;
	return 0;
}

char convert(char i)
{
	if (i < 97) return i + 32;
	else return i;
}
