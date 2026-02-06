class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> counts;
         for (char c : s) {
            counts[c]++;
        }
        int frequency = counts.begin()->second;
         for (auto const& [key, val] : counts) {
            if (val != frequency) {
                return false;
            }
        }      
        return true;
    }
};
