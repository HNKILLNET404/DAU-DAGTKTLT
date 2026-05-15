class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;
        string word;
        string res;
        int maxCount = 0;
        paragraph += '.'; 
        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else if (!word.empty()) {
                if (ban.find(word) == ban.end()) {
                    count[word]++;
                    if (count[word] > maxCount) {
                        maxCount = count[word];
                        res = word;
                    }
                }
                word = "";
            }
        }
        return res;
    }
};
