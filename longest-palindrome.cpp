class Solution {
public:
    int longestPalindrome(string s) {
        int count[128] = {0};
        for (char c : s) {
            count[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (int v : count) {
            length += (v / 2) * 2;
            if (v % 2 == 1) {
                hasOdd = true;
            }
        }

        return hasOdd ? length + 1 : length;
    }
};
