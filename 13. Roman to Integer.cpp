class Solution {
public:
    int romanToInt(string s) {
        int mapping[256];
        mapping['I'] = 1;
        mapping['V'] = 5;
        mapping['X'] = 10;
        mapping['L'] = 50;
        mapping['C'] = 100;
        mapping['D'] = 500;
        mapping['M'] = 1000;

        int result = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && mapping[s[i]] < mapping[s[i + 1]]) {
                result -= mapping[s[i]];
            } else {
                result += mapping[s[i]];
            }
        }

        return result;
    }
};
