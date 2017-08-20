class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> nums) {
        // write your code here
        vector<long long> A;
        if (nums.size() == 0) return A;
		long long product;
		int pre, next;
		for (int i = 0; i < nums.size(); i++) {
			product = 1;
			pre = i - 1;
			next = i + 1;
			
			while (pre > -1) {
				product *= nums[pre];
				pre--;
			}
			
			while (next < nums.size()) {
				product *= nums[next];
				next++;
			}
			
			A.push_back(product); 
		}
		return A;
    }
};
