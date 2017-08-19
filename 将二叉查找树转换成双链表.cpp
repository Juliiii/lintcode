/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 * Definition of Doubly-ListNode
 * class DoublyListNode {
 * public:
 *     int val;
 *     DoublyListNode *next, *prev;
 *     DoublyListNode(int val) {
 *         this->val = val;
           this->prev = this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of tree
     * @return: the head of doubly list node
     */
    DoublyListNode* bstToDoublyList(TreeNode* root) {
        // Write your code here
        if (!root) return NULL;
        vector<int> a;
        helper(root, a);
        DoublyListNode* temp, *head, *cur;
        for (int i = 0; i < a.size(); i++) {
        	temp = new DoublyListNode(a[i]); 
        	if (i == 0) {
        		head = cur = temp;
			} else {
				temp->prev = cur;
				cur->next = temp;
				cur = temp;
			}
		}
        return head;
    }
    
    void helper(TreeNode* root, vector<int>& v) {
    	if (!root) return;
    	helper(root->left, v);
    	v.push_back(root->val);
    	helper(root->right, v);
	}
};

