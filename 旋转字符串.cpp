class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void rotateString(string &str,int offset){
        //wirte your code here
        if (offset == 0) return;
        int length = str.length();
        if (length == 0) return;
		if (offset > length) offset = offset % length; 
		string left = str.substr(length - offset, offset);
		string right = str.substr(0, length-offset);
		str = left + right;
		return;
    }
};

