class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Write your code here
    	vector<int> ans;
        if (nums1.empty() || nums2.empty()) return ans;
        map<int, int> ma;
        vector<int>::iterator i;
        for (i = nums1.begin(); i != nums1.end(); i++) {
        	ma[*i]++;
		}
		for (i = nums2.begin(); i != nums2.end(); i++) {
			if (ma[*i]) {
				ans.push_back(*i);
				ma[*i]--;
			}
		}
		return ans;
    }
};
