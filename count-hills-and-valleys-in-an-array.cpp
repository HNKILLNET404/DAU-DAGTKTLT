class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int prev = nums[0];
        
        for (int i = 1; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                continue;
            }
            
            if (nums[i] > prev && nums[i] > nums[i + 1]) {
                count++;
            } else if (nums[i] < prev && nums[i] < nums[i + 1]) {
                count++;
            }
            
            prev = nums[i];
        }
        
        return count;
    }
};
