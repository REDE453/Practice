//求1 + 2 + 3 + ... + n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）。
//官方给出的答案里用了公式求和，循环，和递归上面不能用的全用了，感觉自己智商被侮辱了。
#include<iostream>
#include<Windows.h>
using namespace std;
class Sum
{
public:
	Sum()
	{
		_sum += _i;
		++_i;
	}
	//初始化
	static void Init()
	{
		_i = 1;
		_sum = 0;
	}
	static int Getsum()
	{
		return _sum;
	}
private:
	//也可以定义全局变量这里是为了体现c++的封装性
	static int _i;
	static int _sum;
};
int Sum::_i = 1;
int Sum::_sum = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		//Sum a[n];
		//动态开辟n个数组调用n次构造函数
		Sum::Init();
		Sum* p = new Sum[n];
		delete[] p;
		return Sum::Getsum();
	}
};
int main()
{
	Solution st;
	//忘了初始化oj在5这里一直不能通过
	cout << st.Sum_Solution(5) << endl;
	system("pause");
	return 0;
}