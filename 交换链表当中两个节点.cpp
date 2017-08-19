#include <iostream>
#include <map>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) {
		val = x;
		next = NULL;
	}
};
class Solution {
public:
    /**
     * @param head a ListNode
     * @oaram v1 an integer
     * @param v2 an integer
     * @return a new head of singly-linked list
     */
    ListNode* swapNodes(ListNode* head, int v1, int v2) {
        // Write your code here
        if (!head || v1 == v2) return head;
        bool find1 = false, find2 = false;
        ListNode* no1 = NULL, *no2 = NULL, *pre1 = NULL, *pre2 = NULL, *pre = NULL;
        ListNode* cur = head;
        while (cur) {
        	if (!no1 && cur->val == v1) {
        		no1 = cur;
        		pre1 = pre;
			}
        	if (!no2 && cur->val == v2) {
        		no2 = cur;
        		pre2 = pre;
			}
        	if (no1 && no2) break;
        	pre = cur; 
        	cur = cur->next;
		}
		
		if (no1 && no2) {
			if (pre1 && pre2) {
				if (pre1 == no2) {
					pre = no1->next;
					no2->next = pre;
					no1->next = no2;
					pre2->next = no1;
				} else if (pre2 == no1) {
					pre = no2->next;
					no1->next = pre;
					no2->next = no1;
					pre1->next = no2;
				} else {
					pre = no2->next;
					pre1->next = no2;
					no2->next = no1->next;
					pre2->next = no1;
					no1->next = pre;
				}
			} else {
				if (!pre1) {
					if (pre2 == no1) {
						no1->next = no2->next;
						no2->next = no1;
						head = no2;
					} else {
						pre = no1->next;
						no1->next = no2->next;
						pre2->next = no1;
						no2->next =  pre;
						head = no2;
					}
				} else {
					if (pre1 == no2) {
						no2->next = no1->next;
						no1->next = no2;
						head = no1;
					} else {
						pre = no2->next;
						no2->next = no1->next;
						pre1->next = no2;
						no1->next =  pre;
						head = no1;
					}					
				}
			}
		}
		return head;
		
    }
};

int main () {
	ListNode* cur = new ListNode(1); 
	ListNode* cur1 = new ListNode(1);
	ListNode* cur2 = new ListNode(3);
	ListNode* cur3 = new ListNode(4);
	
	cur->next = cur1;
	cur1->next = cur2;
	cur2->next = cur3;
	
	Solution s;
	cur = s.swapNodes(cur, 3, 4);
	while (cur) {
		cout<<cur->val<<endl;
		cur = cur->next;
	}
	return 0;
}
