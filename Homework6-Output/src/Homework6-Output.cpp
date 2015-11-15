//============================================================================
// Name        : Homework6-Output.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Output in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a;
	cin >> a;
	cout << fixed << setprecision(5) << a << endl;
	cout << scientific << setprecision(7) << a << endl;
}
