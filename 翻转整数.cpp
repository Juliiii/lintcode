class Solution {
public:
    /*
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
    int reverseInteger(int n) {
        // write your code here
        long long res = 0;
		while (n) {
			res = res * 10 + n % 10;
			n /= 10;
		}
		if (res >= INT_MIN && res <= INT_MAX) return res;
		return 0;
    }
};
