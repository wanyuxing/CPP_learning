//============================================================================
// Name        : Homework2-Fill3.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Fill3 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base {
public:
    int k;
    Base(int n):k(n) { }
};
class Big  {
public:
    int v; Base b;
    Big(int n): v(n), b(n) {};
    Big(Base c): v(c.k), b(c.k) {};
};

int main()  {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;
    cout << a2.v << "," << a2.b.k << endl;
    return 0;
}
