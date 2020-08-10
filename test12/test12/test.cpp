//����һ��������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
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