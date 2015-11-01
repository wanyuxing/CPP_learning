//============================================================================
// Name        : Assignment1-Receipt.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Receipt in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float amtPer[3] = {0.0}, amtCat[3] = {0.0};
	int person[3] = {1, 2, 3};
	char category[3] = {'A', 'B', 'C'};
	for (int i = 0; i < 3; i++)
	{
		int p;
		cin >> p;
		for (int j = 0; j < 3; j++)
		{
			if (person[j] == p)
			{
				int n;
				cin  >> n;
				for (int k = 0; k < n; k++)
				{
					char cat;
					float amount;
					cin >> cat;
					cin >> amount;
					for (int m = 0; m < 3; m++)
					{
						if (category[m] == cat)
						{
							amtCat[m] += amount;
							amtPer[j] += amount;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{ cout << person[i] << ' ' << fixed << setprecision(2) << amtPer[i] << endl; }
	for (int i = 0; i < 3; i++)
	{ cout << category[i] << ' ' << fixed << setprecision(2) << amtCat[i] << endl; }
	return 0;
}
