//============================================================================
// Name        : Homework7-List.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : List in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <list>
#include <map>
using namespace std;

map<int, list<int> > a;

void myNew(){
	int id;
	cin >> id;
	a.insert(make_pair(id, list<int>()));
}

void myAdd(){
	int id, num;
	cin >> id >> num;
	a[id].push_back(num);
	a[id].sort();
}

void myOut(){
	int id;
	cin >> id;
	for (list<int>::iterator pt = a[id].begin(); pt != a[id].end(); pt++)
		cout << *pt << ' ';
	cout << endl;
}

void myMerge(){
	int id1, id2;
	cin >> id1 >> id2;
	a[id1].merge(a[id2]);
}

void myUniq(){
	int id;
	cin >> id;
	a[id].unique();
}

int main() {
	int n;
	cin >> n;
	while (n > 0)
	{
		string commend;
		cin >> commend;
		if (commend == "new") myNew();
		else if (commend == "add") myAdd();
		else if (commend == "out") myOut();
		else if (commend == "merge") myMerge();
		else if (commend == "unique") myUniq();
		n--;
	}
	return 0;
}
