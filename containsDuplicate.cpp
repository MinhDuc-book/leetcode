class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> pair;
        for (int i = 0; i < nums.size(); i++) {
            pair[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (pair[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};
