//============================================================================
// Name        : Testing.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Word in C++, Ansi-style
//============================================================================

#include <list>
#include <iostream>
#include <iterator>
using namespace std;
int main(){
	list <int> v; list <int>::const_iterator ii;
	for( ii = v.begin(); ii != v.end ();ii ++ )
		cout << * ii;
	return 0;
}
