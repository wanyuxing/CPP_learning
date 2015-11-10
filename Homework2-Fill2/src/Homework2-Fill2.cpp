//============================================================================
// Name        : Homework2-Fill2.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Fill2 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Sample{
public:
    int v;
    Sample(int n):v(n) { }
    Sample(Sample& b): v(2 * b.v) {}
};

int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;
    return 0;
}
