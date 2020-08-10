//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
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
	vector<int> reversePrint(ListNode* head) {
		vector<int> res;
		while (head)
		{
			res.push_back(head->val);
			head = head->next;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};