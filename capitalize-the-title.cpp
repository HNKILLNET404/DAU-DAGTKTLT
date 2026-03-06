class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        for (int i = 0, j = 0; i <= n; ++i) {
            if (i == n || title[i] == ' ') {
                int len = i - j;
                if (len > 2) {
                    title[j] = toupper(title[j]);
                    for (int k = j + 1; k < i; ++k) {
                        title[k] = tolower(title[k]);
                    }
                } else {
                    for (int k = j; k < i; ++k) {
                        title[k] = tolower(title[k]);
                    }
                }
                j = i + 1;
            }
        }
        return title;
    }
};
