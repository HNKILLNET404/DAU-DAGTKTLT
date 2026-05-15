class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int totalTime = 0;
        int n = timeSeries.size();
        
        for (int i = 0; i < n - 1; ++i) {
            totalTime += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        
        return totalTime + duration;
    }
};
