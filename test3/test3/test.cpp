//大家都知道斐波那契数列，现在要求输入一个整数n，
//请你输出斐波那契数列的第n项（从0开始，第0项为0，第1项是1）。n <= 39
#include<iostream>
#include<Windows.h>
using namespace std;
//动态规划
class Solution {
public:
	int Fibonacci(int n) {

		int* f = new int[n + 1];
		f[0] = 0;
		//初始化
		f[1] = f[2] = 1;
		//转移方程
		for (int i = 3; i <= n; ++i)
		{
			f[i] = f[i - 1] + f[i - 2];
		}
		int ret = f[n];
		delete[]f;
		//返回值
		return ret;
	}
};
int main()
{
	Solution s;
	int n;
	while (cin >> n)
	{
		cout << s.Fibonacci(n) << endl;
	}
	system("pause");
	return 0;
}