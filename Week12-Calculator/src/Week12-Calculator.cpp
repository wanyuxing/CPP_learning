//============================================================================
// Name        : Week12-Calculator.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Simple Calculator in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b;
	char c;
	cin >> a >> b >> c;
	if (c == '+') cout << a + b << endl;
	else if (c == '-') cout << a - b << endl;
	else if (c == '*') cout << a * b << endl;
	else if (c == '/')
	{
		if (b == 0) cout << "Divided by zero!" << endl;
		else cout << a / b << endl;
	}
	else cout << "Invalid operator!" << endl;
	return 0;
}
