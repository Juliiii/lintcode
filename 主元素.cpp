class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        map<int, int>ma;
		for (int i = 0; i < nums.size(); i++) ma[nums[i]]++;
		for (auto it = ma.begin(); it != ma.end(); it++) {
			if (it->second > nums.size() / 2) return it->first;
		}
    }
};
