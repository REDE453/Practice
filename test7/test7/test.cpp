//题目描述
//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int row = array.size();
		int col = array[0].size();
		//左下角下标
		int i = row - 1, j = col;
		while (i >= 0 && j < col)
		{
			//target小于左下角的数向上查找
			if (target < array[i][j])
				--i;
			//target大于左下角的数向右查找
			else if (target > array[i][j])
				++j;
			else
				return true;
		}
		return false;
	}
};