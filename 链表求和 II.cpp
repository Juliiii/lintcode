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
     * @param l1: The first list.
     * @param l2: The second list.
     * @return: the sum list of l1 and l2.
     */
    
    ListNode * addLists2(ListNode * l1, ListNode * l2) {
        // write your code here
        l1 = reverse(l1);
        l2 = reverse(l2); 
        ListNode* ans = NULL,
        		* temp = NULL,
        		* re = NULL,
        		* i1  = l1,
				* i2  = l2;
		int carry = 0;
		int sum = 0;
		bool isHead = true;
        while (i1 && i2) {
        	sum = i1->val + i2->val + carry;
        	if (sum >= 10) {
        		carry = sum / 10;
        		sum = sum % 10;
			} else {
				carry = 0;
			}
			
			temp = new ListNode(sum);
			if (isHead) {
				re = ans = temp;
				isHead = false;
			} else {
				re->next = temp;
				re = re->next;
			}
			i1 = i1->next;
			i2 = i2->next;
		}
		
		while (i1) {
			sum = i1->val + carry;
			if (sum >= 10) {
				carry = sum / 10;
				sum = sum % 10;
			} else {
				carry = 0;
			}
			temp = new ListNode(sum);
			re->next = temp;
			re = re->next;
			i1 = i1->next;
		}
		while (i2) {
			sum = i2->val + carry;
			if (sum >= 10) {
				carry = sum / 10;
				sum = sum % 10;
			} else {
				carry = 0;
			}
			temp = new ListNode(sum);
			re->next = temp;
			re = re->next;
			i2 = i2->next;
		}
		if (carry) {
		    temp = new ListNode(carry);
		    re->next = temp;
		    re = re->next;
		}
		re->next = NULL;
		ans = reverse(ans);
		return ans;
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
