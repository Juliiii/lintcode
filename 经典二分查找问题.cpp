class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        int left = 0, right = A.size() - 1;
        int mid;
        while (left <= right) {
            mid = (right - left) / 2 + left;
            if (A[mid] == target) return mid;
            else if (A[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};
