class Solution {
public:
    /*
     * @param : An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> a;
        if (!n) return a;
        for (int i = 1; i <= n; i++) {
        	a.push_back(func(i));
		}
		return a;
    }
    
    string func(int val) {
        string res;
    	if (val % 3 == 0 && val%5 == 0) res = "fizz buzz";
    	else if (val % 3 == 0) res = "fizz";
		else if (val % 5 == 0) res = "buzz";
		else res = to_string(val);
		return res;
	}
};
