class Solution {
public:
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int check;
        for (int i = 0; i < nums.size(); ++i) {
            check = 0;
            while (nums[i] > 0) {
                nums[i] = nums[i] / 10;
                check = check + 1;
            }
            if (check % 2 == 0) {
                ++count;
            }
        }
        return count;
    }
};
