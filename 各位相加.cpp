class Solution {
public:
    /**
     * @param num a non-negative integer
     * @return one digit
     */
    int addDigits(int num) {
        // Write your code here
        int sum = 0;
        int digits;
        do {
            if (!num) {
                num = sum;
                sum = 0;
            }
            digits = num % 10;
            num /= 10;
            sum += digits;
        } while (sum % 10 != sum || num);
        return sum;
    }
};
