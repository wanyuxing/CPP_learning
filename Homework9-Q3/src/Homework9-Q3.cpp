//============================================================================
// Name        : Homework9-Q3.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Q3 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int a[], int n, int (*sqr)(int)){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += sqr(a[i]);
    }
    return sum;
}
int sqr(int n) { return n * n; }

int main()
{
    int a[6]{1, 2, 3, 4}, n = 4;
    cout << sum(a, n, sqr) << endl;
    return 0;
}
