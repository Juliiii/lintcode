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
    /**
     * @param root the root of binary tree
     * @param target an integer
     * @return all valid paths
     */
    vector<vector<int>> binaryTreePathSum(TreeNode *root, int target) {
        // Write your code here
        vector<vector<int>> answer;
        vector<int> an;
        helper(answer, an, root, 0, target);
        return answer;
    }
    
    void helper(vector<vector<int>>& answer, vector<int> an, TreeNode* cur, int sum, int tar) {
        if (cur == NULL) return;
    	if (cur->left == NULL && cur->right == NULL) {
    		sum += cur->val;
    		if (sum == tar) {
    			an.push_back(cur->val);
    			answer.push_back(an);
			}
			return;
		}
		an.push_back(cur->val);
		helper(answer, an, cur->left, sum + cur->val, tar);
		helper(answer, an, cur->right, sum + cur->val, tar);
	} 
};
