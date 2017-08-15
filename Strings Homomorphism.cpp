class Solution {
public:
    /**
     * @param s a string
     * @param t a string
     * @return true if the characters in s
     * can be replaced to get t or false
     */
    bool isIsomorphic(string& s, string& t) {
        // Write your code here
		map<char, int> ma;
		map<char, int> mb;
		int n = s.length();
		int aa[n];
		int bb[n];
		
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (ma.find(s[i]) == ma.end()) { 
				ma[s[i]] = count++;
			}
		} 
		count = 0;
		for (int i = 0; i < n; i++) {
			if (mb.find(t[i]) == mb.end()) {
				mb[t[i]] = count++;
			}
		}
		
		for (int i = 0; i < n; i++) {
			aa[i] = ma[s[i]];
			bb[i] = mb[t[i]];
		}
		
		for (int i = 0; i < t.length(); i++) {
			if (aa[i] != bb[i]) return false;
		}
		
		return true;
    }
};
