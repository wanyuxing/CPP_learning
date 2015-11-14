//============================================================================
// Name        : Homework3-OperatorsOverload.cpp
// Author      : Henry Wan
// Version     :
// Copyright   : Your copyright notice
// Description : Overload operators in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <cstdlib>
using namespace std;


class BigInt {
public:
    string bigNum;
public:
    BigInt(string s): bigNum(s) {}
    BigInt operator=(BigInt s) { // overload = operation
    	bigNum = s.bigNum;
    	return *this;
    }
    BigInt operator+(BigInt s) {// overload + operation
        int len1 = bigNum.length();
        int len2 = s.bigNum.length();
        int lenMax = max(len1, len2);
        BigInt ans("");
        int addOne = 0;
        for (int i = 0; i < lenMax; i++)
        {
            int total = ((len1 - 1 - i >= 0) ? (bigNum[len1 - 1 - i] - '0') : 0) + ((len2 - 1 - i >= 0) ? (s.bigNum[len2 - 1 - i] - '0') : 0) + addOne;
            ans.bigNum.insert(0, to_string(total % 10));
            addOne = total / 10;
        }
        if (addOne == 1) ans.bigNum.insert(0,"1");
        return ans;
    }
    BigInt operator-(BigInt s) {// overload - operation
        int len1 = bigNum.length();
        int len2 = s.bigNum.length();
        int lenMax = max(len1, len2);
        BigInt ans("");
        int deduct = 0;
        if (len1 > len2 || (len1 == len2 && bigNum.compare(s.bigNum) >= 0))
        {
            for (int i = 0; i < lenMax; i++)
            {
                int result = bigNum[len1 - 1 - i] - '0' - ((len2 - 1 - i >= 0) ? (s.bigNum[len2 - 1 - i] - '0') : 0) + deduct;
                if (result >= 0) { deduct = 0; }
                else
                {
                    deduct = -1;
                    result += 10;
                }
                ans.bigNum.insert(0, to_string(result));
            }
            ans.bigNum.erase(0, ans.bigNum.find_first_not_of('0'));
            if (ans.bigNum == "") ans.bigNum = "0";
        }
        else
        {
        	for (int i = 0; i < lenMax; i++)
			{
				int result = s.bigNum[len2 - 1 - i] - '0' - ((len1 - 1 - i >= 0) ? (bigNum[len1 - 1 - i] - '0') : 0) + deduct;
				if (result >= 0) { deduct = 0; }
				else
				{
					deduct = -1;
					result += 10;
				}
				ans.bigNum.insert(0, to_string(result));
			}
        	ans.bigNum.erase(0, ans.bigNum.find_first_not_of('0'));
        	ans.bigNum.insert(0, "-");
        }
        return ans;
    }
    BigInt operator*(BigInt s) { //overload * operation
    	BigInt ans("0");
    	if (bigNum == "0" || s.bigNum == "0") return ans;
    	int len1 = bigNum.length(), len2 = s.bigNum.length(), lenMin = min(len1, len2);
    	if (len1 == lenMin)
    	{
    		for (int i = 0; i < lenMin; i++)
    		{
    			BigInt temp("");
    			int digit = bigNum[lenMin - 1 - i] - '0';
    			while (digit != 0)
    			{
    				temp = temp + s;
    				digit--;
    			}
    			for (int _ = 0; _ < i; _++) temp.bigNum.append("0");
    			ans = ans + temp;
    		}
    	}
    	else
    	{
    		for (int i = 0; i < lenMin; i++)
			{
				BigInt temp("");
				int digit = s.bigNum[lenMin - 1 - i] - '0';
				while (digit != 0)
				{
					temp = temp + *this;
					digit--;
				}
				for (int _ = 0; _ < i; _++) temp.bigNum.append("0");
				ans = ans + temp;
			}
    	}
    	return ans;
    }
    BigInt operator/(BigInt s) { // overload / operation
    	BigInt ans("0"), plus("1");
    	if ((*this - s).bigNum[0] == '-') return ans;
    	int len1 = bigNum.length(), len2 = s.bigNum.length(), dif = len1 - len2;
    	while (dif > 0)
    	{
    		int count = 0;
    		BigInt temp = s;
    		for (int _ = 0; _ < dif - 1; _++) temp.bigNum.append("0");
    		while (this->bigNum.length() - len2 == dif)
    		{
    			*this = *this - temp;
    			count++;
    		}
    		for (int _ = 0; _ < dif - 1; _++) count *= 10;
    		dif--;
    		BigInt add(to_string(count));
    		ans = ans + add;
    	}
    	while ((*this - s).bigNum[0] != '-')
    	{
    		ans = ans + plus;
    		*this = *this - s;
    	}
    	return ans;
    }
};

int main(){
    BigInt big("1000");
    BigInt big2("3");
    BigInt ans = big / big2;
    cout << ans.bigNum << endl;
    return 0;
}
