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
     * @param head: A ListNode.
     * @return: A boolean.
     */
    
    bool isPalindrome(ListNode * head) {
        // write your code here
        if (!head) return true;
        vector<int> temp;
        ListNode* cur = head;
        while (cur) {
        	temp.push_back(cur->val);
        	cur = cur->next;
		}
        ListNode* new_head = reverse(head);
        for (int i = 0; i < temp.size(); i++) {
        	if (temp[i] != new_head->val) return false;
        	new_head = new_head->next;
		}
		return true;
    }
    
    ListNode* reverse(ListNode* head) {
    	ListNode* next = head;
    	ListNode* cur, *temp, *pre = NULL;
    	while (next) {
    		temp = next->next;
    		cur = next;
    		cur->next = pre;
    		pre = cur;
    		next = temp;
		}
		return pre;
	} 
    
};
