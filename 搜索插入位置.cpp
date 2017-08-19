class Solution {
public:
    /*
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> A, int target) {
        // write your code here
        int left = 0, right = A.size() - 1;
        int mid;
        while (left <= right) {
        	mid = (right - left) / 2 + left;
        	if (A[mid] == target) return mid;
        	else if (A[mid] > target) right = mid - 1;
        	else left = mid + 1;
		}
		return left;
    }
};

