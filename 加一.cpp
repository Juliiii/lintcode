class Solution {
public:
    /*
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> digits) {
        // write your code here
        reverse(digits.begin(), digits.end());
        int carry = 1, i;
		for (i = 0; i < digits.size(); i++) {
			int sum = carry + digits[i];
			digits[i] = sum % 10;
			carry = sum / 10;
		}
		if (carry) digits.push_back(carry);
		reverse(digits.begin(), digits.end());
		return digits;
    }
};
