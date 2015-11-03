//============================================================================
// Name        : Assignment2-Matching.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Match the brackets in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    char a[101];
    cin.getline(a, 100);
    a[100] = '\0';
    cout << a << endl;
    int pointer = 0, numL = 0, left[100] = {0};
    char ans[101];
    for (int i = 0; i < 100; i++)
    {
        ans[i] = ' ';
    }
    ans[100] = '\0';
    while (pointer < 101)
    {
    	if (a[pointer] == '\0') break;
        if (isalpha(a[pointer]))
        { pointer++; }
        else if (a[pointer] == '(')
        {
            left[numL] = pointer;
            pointer++;
            numL++;
        }
        else if (a[pointer] == ')')
        {
            if (numL > 0)
            {
                numL--;
                left[numL] = 0;
            }
            else
            { ans[pointer] = '?'; }
            pointer++;
        }
    }
    if (numL > 0)
    {
        for (int i = 0; i < numL; i++)
        { ans[left[i]] = '$'; }
    }
    cout << ans << endl;
    return 0;
}

