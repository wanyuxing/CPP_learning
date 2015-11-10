//============================================================================
// Name        : Homework2-Fill1.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : First in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A {
public:
    int val;
public:
    A(int n = 0) { val = n; }
    int& GetObj() { return this->val; }
};

int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
    return 0;
}
