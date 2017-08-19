#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    /**
     * @param num an integer
     * @return true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // Write your code here
        if (num == 1) return true;
        do {
          if (canMod(num)) {
          	cout<<num<<endl;
          	num = mod(num);
		  } else return false;
		} while (num != 1);
		return true;
    }
    
    int mod (int num) {
    	if (num % 2 == 0) return num / 2;
    	if (num % 3 == 0) return num / 3;
    	if (num % 5 == 0) return num / 5;
		return num; 
	}
    
    
    bool canMod (int num) {
    	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0) return true;
		return false;
	}
};

int main () {
	Solution s;
	cout<<s.isUgly(8);
	return 0;
	
}

