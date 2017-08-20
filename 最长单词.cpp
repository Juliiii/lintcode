class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        int max = -1;
        vector<string> ans;
        for (int i = 0; i < dictionary.size(); i++) {
        	int curLen = dictionary[i].length();
        	if (curLen > max) {
        		max = curLen;
        		ans.clear();
        		ans.push_back(dictionary[i]);
			} else if (curLen == max) {
				ans.push_back(dictionary[i]);
			}
		}
		
		return ans;
    }
};
