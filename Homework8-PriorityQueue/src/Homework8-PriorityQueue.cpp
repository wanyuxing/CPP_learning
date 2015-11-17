//============================================================================
// Name        : Homework8-PriorityQueue.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Priority Queue in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int primeN(int n){
	int count = 0;
	while (n > 1)
	{
		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0) { count++; n /= i; break; }
		}
	}
	if (count == 1) count--;
	return count;
}

class compare{
public:
	bool operator()(int &n, int &m){
		if (primeN(n) < primeN(m) || (primeN(n) == primeN(m) && n < m)) return true;
		return false;
	}
};

int main() {
	priority_queue<int, vector<int>, compare> a;
	int n;
	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 10; i++)
		{
			int num; cin >> num;
			a.push(num);
		}
		cout << a.top();
	}
	return 0;
}
