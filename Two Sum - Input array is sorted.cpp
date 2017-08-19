class Solution {
public:
    /*
     * @param nums an array of Integer
     * @param target = nums[index1] + nums[index2]
     * @return [index1 + 1, index2 + 1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
		vector<int> a;
        for (int i = 0; i < nums.size(); i++) {
        	for (int j = i + 1; j < nums.size(); j++) {
        		if (nums[i] + nums[j] == target) {
        			a.push_back(i + 1);
        			a.push_back(j + 1);
        			return a;
				}
			}
		}
    }
};

