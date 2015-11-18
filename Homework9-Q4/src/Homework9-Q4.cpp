//============================================================================
// Name        : Homework9-Q4.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Square in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class CType{
public:
	int value;
	CType(): value(0) {};
	void setvalue(int n) { value = n; };
	int operator++(int) {
		int temp = value;
		value *= value;
		return temp;
	}
	friend ostream& operator<<(ostream& o, CType& c)
	{ o<<c.value; return o; }
};
int main(int argc, char* argv[]) {
	CType obj;
	int n;
	cin>>n;
	while ( n ) {
		obj.setvalue(n);
		cout<<obj++<<" "<<obj<<endl;
		cin>>n;
	}
	return 0;
}
