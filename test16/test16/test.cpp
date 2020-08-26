//题目描述
//判断给定的链表中是否有环
//扩展：
//你能给出空间复杂度的解法么？
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (!head)
			return false;
		ListNode* slow = head;
		ListNode* fast = head;
		while (!fast && !fast->next)
		{
			//快指针走两边慢指针走一步
			fast = fast->next->next;
			slow = slow->next;
			if (slow == fast)
				return true;
		}
		return false;
	}
};