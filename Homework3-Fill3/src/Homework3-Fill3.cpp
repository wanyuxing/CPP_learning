//============================================================================
// Name        : Homework3-Fill3.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Filling 3 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

class Array2
{
public:
	int row, col;
	int *a;
public:
	Array2() { a = NULL; }
	Array2(int i, int j)
	{
		row = i; col = j;
		a = new int[i * j];
	}
	Array2(Array2 &b)
	{
		row = b.row; col = b.col;
		a = new int[row * col];
		memcpy(a, b.a, sizeof(int) * row * col);
	}
	int* operator[](int i)
	{
		return a + i * col;
	}
	int operator()(int i, int j)
	{
		return *(a + i * col + j);
	}
	Array2& operator=(Array2 &b)
	{
		row = b.row; col = b.col;
		a = new int[row * col];
		memcpy(a, b.a, sizeof(int) * row * col);
		return *this;
	}
};

int main() {
    Array2 a(3,4);
    int i,j;
    for(i = 0;i < 3; ++i)
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
