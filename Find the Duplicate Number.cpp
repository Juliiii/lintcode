class Solution {
public:
    /**
     * @param nums an array containing n + 1 integers which is between 1 and n
     * @return the duplicate one
     */
    int findDuplicate(vector<int>& nums) {
        // Write your code here
        int i = 0, j = nums.size() - 1;
        
        while (i < j) {
        	if (nums[i] == nums[j]) return nums[i];
        	i++;
        	j--;
		}
    }
};
