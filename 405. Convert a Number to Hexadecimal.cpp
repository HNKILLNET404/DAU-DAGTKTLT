class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        string res = "";
        string hexChars = "0123456789abcdef";
        unsigned int n = num; 
        
        while (n > 0) {
            res = hexChars[n & 0xf] + res;
            n >>= 4;
        }
        
        return res;
    }
};
