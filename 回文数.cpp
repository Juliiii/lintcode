class Solution {
public:
    /**
     * @param num a positive number
     * @return true if it's a palindrome or false
     */
    bool palindromeNumber(int num) {
        // Write your code here
        string s_num = to_string(num);
        string r_s_num = s_num;
        reverse(s_num.begin(), s_num.end());
        return s_num == r_s_num;
    }
};
