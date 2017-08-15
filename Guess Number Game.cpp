// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    /**
     * @param n an integer
     * @return the number you guess
     */
    int guessNumber(int n) {
        // Write your code here
        int low = 0;
        int high = n;
        int mid, res;
        do {
        	mid = (high - low) / 2 + low;
			res = guess(mid);
			if (res == 0) break;
			else if (res == -1) {
			    high = mid;
			    mid = (high - low) / 2 + low;
			}
			else if (res == 1) {
			    low = mid + 1;
			    mid = (high - low) / 2 + low;
			}
		} while (1);
		return mid;
    }
};
