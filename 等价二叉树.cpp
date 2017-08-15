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
 */


class Solution {
public:
    
    /*
     * @param a: the root of binary tree a.
     * @param b: the root of binary tree b.
     * @return: true if they are identical, or false.
     */
    bool isIdentical(TreeNode * a, TreeNode * b) {
        // write your code here
        bool flag = true;
        helper(a, b, flag);
        return flag;
    }
    
    void helper(TreeNode* a, TreeNode* b, bool& flag) {
    	if (!flag) return;
    	if (!a && !b) return;
    	if ((!a && b )|| (!b && a)) {
    		flag = false;
    		return;
		}
		if (a->val != b->val) {
    		flag = false;
    		return;			
		}
		
		helper(a->left, b->left, flag);
		helper(a->right, b->right, flag);
	}
};
