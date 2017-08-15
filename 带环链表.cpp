/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        ListNode* fast = head, *slow = head;
        while (fast && fast->next) {
        	fast = fast->next->next;
			slow = slow->next; 
        	if (slow == fast) return true;
		}
		return false;
    }
};

