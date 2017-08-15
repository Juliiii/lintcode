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

int main () {
	ListNode* cur = new ListNode(1); 
	ListNode* cur1 = new ListNode(1);
	ListNode* cur2 = new ListNode(3);
	ListNode* cur3 = new ListNode(4);
	
	cur->next = cur1;
	cur1->next = cur2;
	cur2->next = cur3;
	
	Solution s;
	cur = s.reverseBetween(cur, 2, 3);
	
	while (cur) {
		cout<<cur->val<<endl;
		cur = cur->next; 
	}
	
	return 0;
}
