//============================================================================
// Name        : Homework3-Fill2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Filling 2 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class MyInt  {
    int nVal;
    public:
        MyInt(int n) { nVal = n; }
        int ReturnVal() { return nVal; }
        MyInt& operator-(int m) {
        	nVal -= m;
        	return *this;
        }
};
int main ()  {
    MyInt objInt(10);
    objInt-2-1-3;
    cout << objInt.ReturnVal();
    cout <<",";
    objInt-2-1;
    cout << objInt.ReturnVal();
    return 0;
}
