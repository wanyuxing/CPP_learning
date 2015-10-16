//============================================================================
// Name        : Week4-BubbleSort.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Bubble Sort in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    // input n numbers
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // bubble sorting, compare two adjacent numbers, if reversed, then exchange
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // output in sequence
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

