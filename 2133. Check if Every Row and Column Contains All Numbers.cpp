class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            vector<bool> rowSeen(n + 1, false);
            vector<bool> colSeen(n + 1, false);
            for (int j = 0; j < n; ++j) {
                if (rowSeen[matrix[i][j]]) {
                    return false;
                }
                rowSeen[matrix[i][j]] = true;
                
                if (colSeen[matrix[j][i]]) {
                    return false;
                }
                colSeen[matrix[j][i]] = true;
            }
        }
        return true;
    }
};
