#include <algorithm>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxE = *max_element(nums.begin(), nums.end());
        int minE = *min_element(nums.begin(), nums.end());
        if (minE > 1 or maxE < 0) {
            return 1;
        }

        if (!any_of(nums.begin(), nums.end(), [](int x) {return x==1;})) {
            return 1;
        }

        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i + 1] - nums[i] > 1 and nums[i] > 0) {
                return nums[i] + 1;
            }
        }
        return maxE + 1;
    }
};
