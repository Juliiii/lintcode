/**
 * Definition of singly-linked-list:
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**class Solution {
public:
    /**
     * @param head: The head of linked list.
     * @param m: The start position need to reverse.
     * @param n: The end position need to reverse.
     * @return: The new head of partial reversed linked list.
     */
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // write your code here
        if (!head) return NULL;
        
        int count = 0;
        
        ListNode* temp = head, *leftNext, *left, *right, *pre = head, *preRight;
        
        while (temp) {
        	count++;
        	if (count == m) {
        		left = pre;
        		leftNext = temp;
			} else if (count == n) {
				preRight = temp;
				right = temp->next;
			}
			pre = temp;
        	temp = temp->next;
		}
		preRight->next = NULL;
		
		
		temp = reverse(left->next);
		left->next = temp; 
		leftNext->next = right;
			
		return m != 1 ? head : preRight;
    }
    
    ListNode* reverse(ListNode* head) {
    	ListNode* temp, *cur, *next, *pre = NULL;
    	temp = head;
    	while (temp) {
    		next = temp->next;
    		temp->next = pre;
    		pre = temp;
    		temp = next;
		}
		return pre;
	}
};

