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
    /**
     * @param head: the list
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode *rotateRight(ListNode *head, int k) {
        // write your code here
        if (!head || !k) return head;
        ListNode* temp = head;
        ListNode* left, *right, *ans;
        int count = 0;
        while (temp) {
          count++;
          if (!temp->next) right = temp;
          temp = temp->next;
		}
		
		k = k % count;
		if (k == 0) return head;
		k = count - k;
		left = temp = head;
		while (k) {
			if (temp != head) {
				left = temp;
			}
			temp = temp->next;
			k--;
		}
		right->next = head;
		ans = left->next;
		left->next = NULL;
		
		return ans;
    }
};
