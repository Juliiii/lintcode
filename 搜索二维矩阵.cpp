class Solution {
public:
    /*
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > matrix, int target) {
        // write your code here
        if (matrix.size() == 0) return false;
        int l = 0, r = matrix.size() - 1, m;
        int n = matrix[0].size();
        while (l <= r) {
        	m = (r - l) / 2 + l;
        	int low = 0, high = n - 1;
        	int mid;
        	while (low <= high) {
        		mid = (high - low) / 2 + low;
        		if (matrix[m][mid] == target) return true;
        		else if (matrix[m][mid] < target) low = mid + 1;
        		else high = mid - 1;
			}
			if (high == n - 1) l = m + 1;
			else if (low == 0) r = m - 1;
			else return false;
		}
		return false;
    }
};


