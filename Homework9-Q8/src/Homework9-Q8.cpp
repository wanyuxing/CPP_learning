//============================================================================
// Name        : Homework9-Q8.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Q8 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n = 23, i = 3, j = 5;
    bitset<32> ans = 0, ref = n;
    (ref[j] == 1)? ans[j]=0:ans[j]=1;
    ans[i]= ref[i];
    for (int pt = i + 1; pt < j; pt++)
        ans[pt] = 1;
    cout << hex << ans.to_ulong();
    return 0;
}
