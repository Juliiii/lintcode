class Solution {
public:
    /*
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> A) {
        // write your code here
        int ans = 0;
        for (auto a : A) {
        	ans ^= a;
		}
		
		return ans;
    }
};
