class Solution {
public:
    /**
     * @param num an integer
     * @return true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // Write your code here
        if (num == 1) return true;
        int left;
        do {
          left = mod[num];
          if (!left) return true;
          num = left;
		} while (left != -1);
		return false;
    }
    
    int mod (int num) {
    	int mods = [2, 3, 5];
    	for (int i = 0; i < 3; i++) {
    		if (!num % mods[i]) {
    			return num / mods[i];
			}
		}
		return -1;
	}
};
