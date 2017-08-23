#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        int count = 0;
        for (int it = 0; it < A.size(); it++) {
        	if (A[it] != elem) {
        		A[count++] = A[it];
        	}
		}
		return count;
    }
};

int main () {
	Solution s;
	vector<int> A;
	A.push_back(2);
	cout<<s.removeElement(A, 3);
	for (int i = 0; i < A.size(); i++) cout<<A[i]<<endl;
	return 0;
}
