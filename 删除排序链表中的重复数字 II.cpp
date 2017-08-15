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
class Solution{
public:
    /**
     * @param head: The first node of linked list.
     * @return: head node
     */
    ListNode * deleteDuplicates(ListNode *head) {
        // write your code here
        if (head == NULL) return head;
        ListNode* temp = head, *new_head = NULL, *andv = NULL;
        map<int, int> ma;
        map<int, int>::iterator it;
        while (temp) {
        	ma[temp->val]++;
        	temp = temp->next;
		}
		
		for (it = ma.begin(); it != ma.end(); it++) {
			if (it->second == 1) {
				temp = new ListNode(it->first);
				if (new_head) {
					andv->next = temp;
					andv = temp;
				} else {
					new_head = andv = temp; 
				} 
			}
		}
		return new_head;
    }
};
