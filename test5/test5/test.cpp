//输入一棵二叉树，判断该二叉树是否是平衡二叉树。
//在这里，我们只需要考虑其平衡性，不需要考虑其是不是排序二叉树
class Solution {
public:
	int Depth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int leftDepth = Depth(pRoot->left);
		int rightDepth = Depth(pRoot->right);
		return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == nullptr)
			return true;
		int leftDepth = Depth(pRoot->left);
		int rightDepth = Depth(pRoot->right);
		//判断当前树
		return abs(leftDepth - rightDepth) < 2
			//递归判断左子树和右子树
			&& IsBalanced_Solution(pRoot->left)
			&& IsBalanced_Solution(pRoot->right);
	}
};