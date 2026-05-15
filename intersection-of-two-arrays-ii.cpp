class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> m;
        for (int num : nums1) {
            m[num]++;
        }
        vector<int> res;
        for (int num : nums2) {
            if (m.count(num) && m[num] > 0) {
                res.push_back(num);
                m[num]--;
            }
        }
        return res;
    }
};
