//============================================================================
// Name        : Testing.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Word in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int partition(int a[],int l,int r)
{
    int i,j,x,temp;
    i = l;
    j = r+1;
    x = a[l];
    while (1)
    {
        while(a[++i] > x);
        while(a[--j] < x);
        if(i >= j) break;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    a[l] = a[j];
    a[j] = x;
    return j;
}

int random_partition(int a[],int l,int r)
{
    int i = l+rand()%(r-l+1);
    int temp = a[i];
    a[i] = a[l];
    a[l] = temp;
    return partition(a,l,r);
}

int main()
{
	int a[5] = {5, 4, 3, 2, 1};
	int j = partition(a, 0, 4);
	cout << j;
	//for (int i = 0; i < 5; i++)
	//{ cout << a[i] << endl; }
	return 0;
}
