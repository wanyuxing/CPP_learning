//============================================================================
// Name        : Homework9-Sum.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : binary sum in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class CMy_add{
public:
	int &sum;
	CMy_add(int& n): sum(n) {};
	void operator()(int num){
		num &= 0x0007;
		sum += num;
	}
};
int main(int argc, char* argv[]) {
        int v, my_sum=0;
        vector<int> vec;
        cin>>v;
        while ( v ) {
                vec.push_back(v);
                cin>>v;
        }
        for_each(vec.begin(), vec.end(), CMy_add(my_sum));
        cout<<my_sum<<endl;
        return 0;
}
