class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            if (numMap.count(nums[i]) && i - numMap[nums[i]] <= k) {
                return true;
            }
            numMap[nums[i]] = i;
        }
        return false;
    }
};
