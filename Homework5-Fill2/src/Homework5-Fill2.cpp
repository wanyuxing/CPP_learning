//============================================================================
// Name        : Homework5-Fill2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Filling 2 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class A {
public:
	virtual ~A() { cout << "destructor A" << endl; }
};
class B:public A {
    public:
        ~B() { cout << "destructor B" << endl; }
};
int main() {
    A * pa;
    pa = new B;
    delete pa;
    return 0;
}
