class Solution {
public:
    /**
     * @param s a string
     * @return it's index
     */
    int firstUniqChar(string& s) {
        // Write your code here
        if (s.length() == 0) return -1;
        int n = s.length();
		map<char, int> had;
		bool find;
		
		for (int i = 0; i < n; i++) {
			if (had[s[i]]) continue;
			had[s[i]] = 1;
			find = true;
			for (int j = i + 1; j < n; j++) {
				if (s[j] == s[i]) {
					find = false;
					break;
				}
			}
			if (find) return i;
		}
		
		return -1;
    }
};
