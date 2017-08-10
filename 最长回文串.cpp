class Solution {
public:
    /**
     * @param s a string which consists of lowercase or uppercase letters
     * @return the length of the longest palindromes that can be built
     */
    int longestPalindrome(string& s) {
        // Write your code here
        if (s.length() == 0) return 0;
        int a[255] = {0};
        bool hasOdd = false;
        int res = 0;
        for (auto i : s) {
        	a[i] += 1;
		}
	
		for (int i = 0; i < 255; i++) {
			if (a[i] % 2 == 0)
				res += a[i];
			else {
				res += a[i] - 1;
				hasOdd = true;
			}
		}
		return res + hasOdd;
    }
}; 
