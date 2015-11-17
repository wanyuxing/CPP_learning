//============================================================================
// Name        : Homework9-200.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : output 200 in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
class Number {
public:
    int num;
    Number(int n=0): num(n) {}
    Number operator*(Number& a) { Number ans; ans.num = num * a.num; return ans; }
    Number& operator=(const Number& a) { num = a.num; return *this;}
    operator int() { return num; }
};

int main() {
    Number n1(10), n2(20);
    Number n3;n3 = n1*n2;
    cout << int(n3) << endl;
    return 0;
}
