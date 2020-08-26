//写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
class Solution {
public:
	/**
	 * 反转字符串
	 * @param str string字符串
	 * @return string字符串
	 */
	string solve(string str) {
		// write code here
		int n = str.size();
		if (0 == n)
			return NULL;
		for (int i = 0; i < n / 2; i++)
		{
			swap(str[i], str[n - 1 - i]);
		}
		return str;
	}
};