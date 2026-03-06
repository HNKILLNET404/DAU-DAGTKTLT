class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> counts;
        int max_count = 0;
        int result = 0;
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == key) {
                int target = nums[i + 1];
                counts[target]++;
                
                if (counts[target] > max_count) {
                    max_count = counts[target];
                    result = target;
                }
            }
        }
        
        return result;
    }
};
