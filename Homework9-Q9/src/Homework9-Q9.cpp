//============================================================================
// Name        : Homework9-Q9.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Q9 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

class A{
public:
    int age;
    char type;
    A(int a): age(a), type('A') {};
};
class B:public A{
public:
    B(int a): A(a) { type = 'B'; }
};

class Comp{
public:
    bool operator()(const A* a, const A* b) {
        return a->age < b->age;
    }
};


void Print(const A* a){
    cout << a->type << ' ' << a->age << endl;
}
