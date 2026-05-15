class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
         vector<int> boxCounts(50, 0);
        int maxBalls = 0;
        for (int i = lowLimit; i <= highLimit; i++) {
            int num = i;
            int sum = 0;
              while (num > 0) {
                sum += num % 10;
                num /= 10;
            }        
            boxCounts[sum]++;
            if (boxCounts[sum] > maxBalls) {
                maxBalls = boxCounts[sum];
            }
        }    
        return maxBalls;
    }
};
