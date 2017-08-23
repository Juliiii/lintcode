class Solution {
public:
    /*
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
    bool isValidParentheses(string s) {
        // write your code here
        stack<char> stk;
        for (auto c : s) {
        	if (stk.empty() || !isPair(stk.top(), c)){
        		stk.push(c);
			} else {
				stk.pop();
			}
		}
		
		return stk.empty();
    }
    
    bool isPair(char c, char _c) {
    	if (c == '(' && _c == ')') return true;
    	if (c == '[' && _c == ']') return true;
    	if (c == '{' && _c == '}') return true;
    	return false; 
	}
};
