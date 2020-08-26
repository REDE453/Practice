//请实现有重复数字的有序数组的二分查找。
//输出在数组中第一个大于等于查找值的位置，如果数组中不存在这样的数，则输出数组长度加一。
class Solution {
public:
	/**
	 * 二分查找
	 * @param n int整型 数组长度
	 * @param v int整型 查找值
	 * @param a int整型vector 有序数组
	 * @return int整型
	 */
	int upper_bound_(int n, int v, vector<int>& a) {
		// write code here
		int left = 0, right = n - 1;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (a[mid] >= v)//大于等于v往左边检测
			{
				if (mid == 0 || a[mid - 1] < v)
					return mid + 1;
				else
					right = mid;
			}
			else
				left = mid + 1;
		}
		return n + 1;
	}
};