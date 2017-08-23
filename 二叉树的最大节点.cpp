class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return the max node
     */
    TreeNode* maxNode(TreeNode* root) {
        // Write your code here
        TreeNode* ans;
        helper(ans, -1);
        return ans;
    }
};
