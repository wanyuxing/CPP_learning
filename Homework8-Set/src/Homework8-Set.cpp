//============================================================================
// Name        : Homework8-Set.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Set in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	multiset<int> a;
	set<int> b;
	int n;
	cin >> n;
	while (n--)
	{
		string commend;
		cin >> commend;
		if (commend == "add"){
			int num;
			cin >> num;
			a.insert(num);
			b.insert(num);
			cout << a.count(num) << endl;
		}
		else if (commend == "del")
		{
			int num;
			cin >> num;
			cout << a.count(num) << endl;
			a.erase(num);
		}
		else if (commend == "ask")
		{
			int num;
			cin >> num;
			cout << (b.find(num) != b.end()) << ' ';
			cout << a.count(num) << endl;
		}
	}
	return 0;
}
