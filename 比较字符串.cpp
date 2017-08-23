class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        if (!A.length() && !B.length()) return true;
        if (!A.length()) return false;
        if (!B.length()) return true;
        map<char, int> MB;
        for (auto a : A) {
        	MB[a]++;
		}
		
		for (auto b : B) {
			if (!MB[b]) return false;
			else MB[b]--;
		}
		return true;
    }
};
