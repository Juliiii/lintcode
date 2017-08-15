class Solution {
public:
    /**
     * @param headA: the first list
     * @param headB: the second list
     * @return: a ListNode
     */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // write your code here
        if (!headA || !headB) return NULL;
        int length1 = 0, length2 = 0;
		ListNode* tempA = headA;
		ListNode* tempB = headB;
		
		while (tempA) {
			length1++;
			tempA = tempA->next;
		}
		
		while (tempB) {
			length2++;
			tempB = tempB->next;
		}
		
		int k = length1 - length2;
		tempA = headA;
		tempB = headB;
		if (k < 0) {
			while (k) {
				k++;
				tempB = tempB->next;
			}
		} else if (k > 0) {
			while (k) {
				k--;
				tempA = tempA->next;
			}
		}
		
		while(tempA != tempB) {
			tempA = tempA->next;
			tempB = tempB->next;
		}
		return tempA;
    } 
};
