class Solution {
public:
    /**
     * @return: The same instance of this class every time
     */
     
    static Solution* getInstance() {
        // write your code here
        if (a) {
            return a;
        }
        a = new Solution();
        return a;
    }
private: 
    static Solution* a;
};

Solution* Solution::a = NULL;
