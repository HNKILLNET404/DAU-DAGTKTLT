class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if (k == 0) return res;      
        int start = 1, end = k;
        if (k < 0) {
            start = n - abs(k);
            end = n - 1;
        }
        int sum = 0;
        for (int i = start; i <= end; ++i) {
            sum += code[i % n];
        }
        for (int i = 0; i < n; ++i) {
            res[i] = sum;
            sum -= code[(start + i) % n];
            sum += code[(end + i + 1) % n];
        }
        return res;
    }
};
