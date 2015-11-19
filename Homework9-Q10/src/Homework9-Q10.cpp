//============================================================================
// Name        : Homework9-Q10.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Q10 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;
class A{
public:
    int num;
    static int count;
    A(): num(0) {count++;};
    A(int a): num(a) {count++;};
    A(A& a) { count++; }
    virtual ~A(){cout << "A::deconstructor" << endl; count--;}
};
class B: public A{
public:
    B(int a): A(a) {};
    ~B(){cout << "B::deconstructor" << endl;}
};
int A::count = 0;
void func(B b) { }
int main()
{
    A a1(5),a2;
    cout << A::count << endl;
    B b1(4);
    cout << A::count << endl;
    func(b1);
    cout << A::count << endl;
    A * pa = new B(4);
    cout << A::count << endl;
    delete pa;
    cout << A::count << endl;
    return 0;
}
