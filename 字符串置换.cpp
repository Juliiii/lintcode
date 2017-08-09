class Solution {
public:
    /*
     * @param A: a string
     * @param B: a string
     * @return: a boolean
     */
    bool Permutation(string A, string B) {
        // write your code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        return A == B;
    }
};
