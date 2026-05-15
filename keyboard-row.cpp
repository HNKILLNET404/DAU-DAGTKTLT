class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string rows[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char,int> rowMap;
        for (int i = 0; i < 3; i++)
            for (char c : rows[i])
                rowMap[c] = i;
        vector<string> result;
        for (string& word : words) {
            int row = rowMap[tolower(word[0])];
            bool valid = true;
            for (char c : word)
                if (rowMap[tolower(c)] != row) { valid = false; break; }
            if (valid) result.push_back(word);
        }
        return result;
    }
};
