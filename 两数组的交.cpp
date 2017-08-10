// ½â1 
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
        set<int> num1;
		set<int> num2;
		vector<int>::iterator i;
		set<int>::iterator j;
		for (i = nums1.begin(); i != nums1.end(); i++) {
			num1.insert(*i);
		}
		for (i = nums2.begin(); i != nums2.end(); i++) {
			num2.insert(*i);
		}
		
		for (j = num1.begin(); j != num1.end(); j++) {
			if (num2.find(*j) != num2.end()) {
				ans.push_back(*j);
			}
		}
		return ans;
		
    }
};

// ½â2
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
        vector<int>::iterator i;
        if (nums1.empty() || nums2.empty()) return ans;
        map<int, int> hasxu; 
		for (i = nums1.begin(); i != nums1.end(); i++) {
			hasxu[*i] = 1;
		}
		for (i = nums2.begin(); i != nums2.end(); i++) {
			if (hasxu[*i] == 1) {
				hasxu[*i] = 0;
				ans.push_back(*i);
			}
		}	
		return ans;	
    }
};

// ½â3
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
        vector<int>::iterator i, j;
        if (nums1.empty() || nums2.empty()) return ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        i = nums1.begin();
        j = nums2.begin();
        while (i != nums1.end() && j != nums2.end()) {
        	if (*i == *j) {
        		while (i + 1 != nums1.end() && *(i + 1) == *i) i++;
        		while (j + 1 != nums2.end() && *(j + 1) == *j) j++;
        		ans.push_back(*i);
        		i++;
        		j++;
			} else if (*i < *j) i++;
			else j++;
		}
		return ans;	
    }
};

