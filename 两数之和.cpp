class Solution {
public:
    /*
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1 + 1, index2 + 1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> numbers, int target) {
        // write your code here
        vector<int> A;
        if (numbers.empty()) return A;
        map<int, int> B;
        for (int i = 0; i < numbers.size(); i++) {
        	int left = target - numbers[i];
        	if (B.find(left) != B.end()) {
        		A.push_back(B[left] + 1);
        		A.push_back(i + 1);
        		return A;
			}
			B[numbers[i]] = i;
		}
    }
};
