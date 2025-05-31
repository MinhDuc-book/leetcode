#include<vector>
#include <algorithm>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.size();
        }

        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        return nums.size();
    }
};
