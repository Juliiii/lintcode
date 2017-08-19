class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int left = 0, right = array.size() - 1;
        int mid;
        while (left <= right) {
        	mid = (right - left) / 2 + left;
        	if (array[mid] == target) {
        		int temp = mid;
        		while (array[temp] == target) {
        			temp--;
				}
				return temp + 1;
			}
        	else if (array[mid] < target) left = mid + 1;
        	else right = mid - 1;
		} 
        return -1;
    }
};
