class Solution {
public:
    /*
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if (n == 0) return 0;
        if (n == 1) return 1;
        int first = 0, second = 1;
        int count = 2;
        int ans;
        while (count <= n) {
        	ans = first + second;
        	first = second;
        	second = ans;
        	count++;
		}
		
		return ans;
    }
};
