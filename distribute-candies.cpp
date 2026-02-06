class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
         unordered_set<int> unique_types(candyType.begin(), candyType.end());
        int capacity = candyType.size() / 2;
         return min((int)unique_types.size(), capacity);
    }
};
