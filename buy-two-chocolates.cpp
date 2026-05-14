class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = 200, min2 = 200;
        
        for (int p : prices) {
            if (p < min1) {
                min2 = min1;
                min1 = p;
            } else if (p < min2) {
                min2 = p;
            }
        }
        int cost = min1 + min2;
        if (cost <= money) {
            return money - cost;
        }
        return money;
    }
};
