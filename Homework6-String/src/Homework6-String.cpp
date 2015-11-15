//============================================================================
// Name        : Homework6-String.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : String Manipulation in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string *a;
int n;

inline int getInt();
inline string getString();

inline int myFind()
{
	string S;
	int N;
	S = getString();
	N = getInt();
	return a[N-1].find(S, 0);
}

inline int myRfind()
{
	string S;
	int N;
	S = getString();
	N = getInt();
	return a[N-1].rfind(S, a[N-1].length() - 1);
}

inline int getInt()
{
	string commend;
	cin >> commend;
	if (commend == "find") return myFind();
	else if (commend == "rfind") return myRfind();
	else return atoi(commend.c_str());
}

inline string myCopy()
{
	int N = getInt();
	int X = getInt();
	int L = getInt();
	return a[N-1].substr(X, L);
}

inline string myAdd()
{
	string S1 = getString(), S2 = getString();
	bool number = true;
	if (S1.length() > 5 || S2.length() > 5) number = false;
	if (number)
	{
		for (int i = 0; i < S1.length() - 1; i++)
			if (S1[i] < '0' || S1[i] > '9') { number = false; break; }
		for (int i = 0; i < S2.length() - 1; i++)
			if (S2[i] < '0' || S2[i] > '9') { number = false; break; }
	}
	if (number) { return to_string(atoi(S1.c_str()) + atoi(S2.c_str())); }
	return S1 + S2;
}

inline string getString()
{
	string commend;
	cin >> commend;
	if (commend == "copy") return myCopy();
	else if (commend == "add") return myAdd();
	else return commend;
}

inline void reset()
{
	string S;
	S = getString();
	int N = getInt();
	a[N-1] = S;
}

inline void print()
{
	int N = getInt();
	cout << a[N-1] << endl;
}

inline void printAll()
{ for (int i = 0; i < n; i++) cout << a[i] << endl; }

inline void myInsert()
{
	string S;
	S = getString();
	int N = getInt();
	int X = getInt();
	a[N - 1].insert(X, S, 0, S.size());
}

int main(){
	cin >> n;
	a = new string[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	string commend;
	while (cin >> commend)
	{
		if (commend == "over") break;
		else if (commend == "find") cout << myFind() << endl;
		else if (commend == "copy") cout << myCopy() << endl;
		else if (commend == "add") cout << myAdd() << endl;
		else if (commend == "rfind") cout << myRfind() << endl;
		else if (commend == "insert") myInsert();
		else if (commend == "reset") reset();
		else if (commend == "print") print();
		else if (commend == "printall") printAll();
	}
	delete[] a;
	return 0;
}
