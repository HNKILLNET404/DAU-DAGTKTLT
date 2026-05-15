class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;     
        for (string s : strs) {
            string key = string(26, '0'); 
            for (char c : s) {
                key[c - 'a']++; 
            }
            mp[key].push_back(s);
        }    
        vector<vector<string>> result;
        for (auto it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};
