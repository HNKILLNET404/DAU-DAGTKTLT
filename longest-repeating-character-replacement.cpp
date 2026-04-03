class Solution {
public:
    int characterReplacement(std::string s, int k) {
        std::vector<int> count(26, 0);
        int maxf = 0;
        int left = 0;
        int maxLength = 0; 
        for (int right = 0; right < s.length(); ++right) {
            count[s[right] - 'A']++;
            maxf = std::max(maxf, count[s[right] - 'A']);  
            if (right - left + 1 - maxf > k) {
                count[s[left] - 'A']--;
                left++;
            }  
            maxLength = std::max(maxLength, right - left + 1);
        }      
        return maxLength;
    }
};
