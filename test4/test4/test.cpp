//输入一棵二叉树，求该树的深度。
//从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
//后序遍历的方式
//根节点的深度=max(左子树的深度，右子树的深度）+1
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
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int LeftDepth = TreeDepth(pRoot->left);
		int RightDepth = TreeDepth(pRoot->right);
		return LeftDepth > RightDepth ? LeftDepth + 1 : RightDepth + 1;
	}
};