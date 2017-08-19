class Solution {
public:
    /*
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        if (x < 0) return -1;
        if (x == 1 || !x) return x;
        int left = 0;
        int right = x;
        int mid, _mid;
        while (left <= right) {
        	mid = (right - left) / 2 + left;
        	_mid = x / mid;
        	if (_mid == mid) return mid;
        	else if (_mid < mid) right = mid - 1;
        	else left = mid + 1;
		}
		return left - 1;
    }
};
