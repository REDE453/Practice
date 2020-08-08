//题目描述
//从上往下打印出二叉树的每个节点，同层节点从左至右打印。
//层序遍历
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		//定义一个一维数组，存放各个节点
		vector<int> ret;
		//如果树为空返回ret;
		if (!root)
			return ret;
		queue<TreeNode*> q;
		//插入根
		q.push(root);
		while (!q.empty())
		{
			TreeNode* node = q.front();
			q.pop();
			//尾插
			ret.push_back(node->val);
			if (node->left)
				q.push(node->left);
			if (node->right)
				q.push(node->right);
		}
		return ret;
	}
};