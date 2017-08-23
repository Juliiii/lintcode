

class Solution {
public:
    /*
     * @param A: an integer array
     * @return: 
     */
    void sortIntegers(vector<int>& A) {
        // write your code here
        for (int i = 0; i < A.size(); i++) {
        	for (int j = i + 1; j < A.size(); j++) {
        		if (A[i] > A[j]) {
        			int temp = A[j];
        			A[j] = A[i];
					A[i] = temp;
				}
			}
		}
    }
};
