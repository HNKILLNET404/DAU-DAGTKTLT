class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> p_map;
        unordered_map<string, int> w_map;
        stringstream ss(s);
        string word;
        int i = 0;
        int n = pattern.length();

        while (ss >> word) {
            if (i == n || p_map[pattern[i]] != w_map[word]) {
                return false;
            }
            p_map[pattern[i]] = w_map[word] = i + 1;
            i++;
        }

        return i == n;
    }
};
