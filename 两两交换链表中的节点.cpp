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
    /*
     * @param head: a ListNode
     * @return: a ListNode
     */
    ListNode * swapPairs(ListNode * head) {
        // write your code here
        if (!head) return NULL;
        ListNode* cur = head, *temp, *pre = head;
		while (cur && cur->next) {
			if (cur == head) {
				temp = cur->next->next;
				cur->next->next = cur;
				pre = head;
				head = cur->next;
				cur->next = temp;
			} else {
				temp = cur->next->next;
				cur->next->next = cur;
				pre->next = cur->next;
				pre = cur;
				cur->next = temp;
			}
			cur = cur->next; 
		}
		return head;
    }
};
