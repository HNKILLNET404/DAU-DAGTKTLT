class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (const string& sentence : sentences) {
            int currentWords = count(sentence.begin(), sentence.end(), ' ') + 1;
            maxWords = max(maxWords, currentWords);
        }
        return maxWords;
    }
};
