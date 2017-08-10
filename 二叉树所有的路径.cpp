class Solution {
public:
    /**
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string> ans;
        DFS(ans, root, "");
        return ans;
    }
    
    void DFS(vector<string>& ans, TreeNode* node, string str) {
        if (!node) return;
    	if (!node->right && !node->left) {
    		str += to_string(node->val);
    		ans.push_back(str);
    		return;
		}
		
		str += to_string(node->val) + "->";
		DFS(ans, node->left, str);
		DFS(ans, node->right, str);
	} 
};
