//HZ偶尔会拿些专业问题来忽悠那些非计算机专业的同学。今天测试组开完会后, 他又发话了:
//在古老的一维模式识别中, 常常需要计算连续子向量的最大和, 当向量全为正数的时候, 问题很好解决。
//但是, 如果向量中包含负数, 是否应该包含某个负数, 并期望旁边的正数会弥补它呢？例如 : {6, -3, -2, 7, -15, 1, 2, 2},
//连续子向量的最大和为8(从第0个开始, 到第3个为止)。
//给一个数组，返回它的最大连续子序列的和，你会不会被他忽悠住？(子向量的长度至少是1)
//动态规划问题；
//找到初始状态
//列出转移方程
//找到返回值就可以了
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		vector<int> maxSum(array.size(), 0);
		//初始化F(0)=A(0)
		maxSum[0] = array[0];
		int ret = maxSum[0];
		for (int i = 1; i < array.size(); ++i)
		{
			//F[i]=max(F[i-1]+a[i],a[i])
			maxSum[i] = max(maxSum[i - 1] + array[i], array[i]);
			ret = max(ret, maxSum[i]);
		}
		//返回值max(F[i])
		return ret;
	}
};