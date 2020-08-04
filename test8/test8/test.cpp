//输入一个整数，输出该数32位二进制表示中1的个数。其中负数用补码表示。
#include<iostream>
#include<Windows.h>
using namespace std;
class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int a = n;
		while (a != 0)
		{
			a &= a - 1;
			++count;
		}
		return count;
	}
};