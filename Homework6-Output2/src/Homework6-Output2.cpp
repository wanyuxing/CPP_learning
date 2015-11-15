//============================================================================
// Name        : Homework6-Output2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Output2 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	cin >>  a;
	cout << hex << a << endl;
	cout.fill('0');
	cout << dec << setw(10) << a << endl;
}
