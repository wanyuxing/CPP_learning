//============================================================================
// Name        : Homework9-MyString.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : MyString in C++, Ansi-style
//============================================================================

#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class MyString{
public:
	string st;
	MyString(string a = ""): st(a) {};
	MyString(const char* a): st(string(a)){};
	MyString(const MyString& a): st(a.st) {};
	friend ostream& operator<<(ostream& o, MyString& a) { o<<a.st; return o;}
	MyString& operator+(const string& a) { st += a; return *this; }
	void operator=(const MyString& a) { st = a.st; }
	MyString operator+(MyString& a) { MyString ans; ans.st = st + a.st; return ans; }
	char& operator[](int n) { return st[n]; }
	void operator+=(string a) { st += a; }
	bool operator<(MyString& a){ return st < a.st; }
	bool operator>(MyString& a){ return st > a.st; }
	bool operator==(MyString& a){ return st == a.st; }
	string operator()(int a, int b) { return st.substr(a, b); }
};
string operator+(char* a, MyString& b) { return string(a) + b.st; }

int CompareString( const void * e1, const void * e2)
{
        MyString * s1 = (MyString * ) e1;
        MyString * s2 = (MyString * ) e2;
        if( * s1 < *s2 )
                 return -1;
        else if( *s1 == *s2)
                 return 0;
        else if( *s1 > *s2 )
                 return 1;
}
int main()
{
        MyString s1("abcd-"),s2,s3("efgh-"),s4(s1);
        MyString SArray[4] = {"big","me","about","take"};
        cout << "1. " << s1 << s2 << s3<< s4<< endl;
        s4 = s3;
        s3 = s1 + s3;
        cout << "2. " << s1 << endl;
        cout << "3. " << s2 << endl;
        cout << "4. " << s3 << endl;
        cout << "5. " << s4 << endl;
        cout << "6. " << s1[2] << endl;
        s2 = s1;
        s1 = "ijkl-";
        s1[2] = 'A' ;
        cout << "7. " << s2 << endl;
        cout << "8. " << s1 << endl;
        s1 += "mnop";
        cout << "9. " << s1 << endl;
        s4 = "qrst-" + s2;
        cout << "10. " << s4 << endl;
        s1 = s2 + s4 + " uvw " + "xyz";
        cout << "11. " << s1 << endl;
        qsort(SArray,4,sizeof(MyString),CompareString);
        for( int i = 0;i < 4;i ++ )
        cout << SArray[i] << endl;
        cout << s1(0,4) << endl;
        cout << s1(5,10) << endl;
        return 0;
}
