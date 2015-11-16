//============================================================================
// Name        : Homework8-Fill2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Filling 2 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
template <class T>
class CMyistream_iterator
{
	T a;
	istream &is;
public:
	CMyistream_iterator(istream &input): is(input) { is >> a; }
	T operator*() { return a; }
	CMyistream_iterator& operator++(int){ is >> a; return *this;}
};

int main()
{
    CMyistream_iterator<int> inputInt(cin);
    int n1,n2,n3;
    n1 = * inputInt;
    int tmp = * inputInt;
    cout << tmp << endl;
    inputInt ++;
    n2 = * inputInt;
    inputInt ++;
    n3 = * inputInt;
    cout << n1 << "," << n2<< "," << n3 << endl;
    CMyistream_iterator<string> inputStr(cin);
    string s1,s2;
    s1 = * inputStr;
    inputStr ++;
    s2 = * inputStr;
    cout << s1 << "," << s2 << endl;
    return 0;
}
