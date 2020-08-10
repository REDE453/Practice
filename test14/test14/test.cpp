//给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
//返回删除后的链表的头节点。
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
	ListNode* deleteNode(ListNode* head, int val) {
		if (head == NULL)
			return head;
		ListNode* cur = head;
		ListNode* pre = NULL;
		//判断第一个位置
		if (cur->val == val)
			return head->next;
		//循环判断中间位置和最后一个位置
		while (cur->val != val)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = pre->next->next;
		return head;
	}
};