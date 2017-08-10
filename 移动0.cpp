class Solution {
public:
    /**
     * @param nums an integer array
     * @return nothing, do this in-place
     */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        int length = nums.size();
    	vector<int>::iterator i;
    	vector<int> ans;
    	for (i = nums.begin(); i != nums.end(); i++) {
    		if (*i) {
    			ans.push_back(*i);
    		}
		}
		int _length = ans.size();
		for (int j = 0; j < length - _length; j++) {
			ans.push_back(0);
		}
		nums = ans;
    }
};
