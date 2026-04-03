class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = 1e9;
        int maxProfit = 0;
        
        for (int price : prices) {
            minPrice = std::min(minPrice, price);
            maxProfit = std::max(maxProfit, price - minPrice);
        }     
        return maxProfit;
    }
};
