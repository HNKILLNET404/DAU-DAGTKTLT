class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string clean = "";
        for (char c : s)
            if (c != '-') clean += toupper(c);
        int first = clean.size() % k;
        string result = "";
        if (first > 0) result = clean.substr(0, first);
        for (int i = first; i < clean.size(); i += k) {
            if (!result.empty()) result += '-';
            result += clean.substr(i, k);
        }
        return result;
    }
};
