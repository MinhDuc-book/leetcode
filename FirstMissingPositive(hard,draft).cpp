#include <algorithm>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
        int index = 0;
        // xóa những phần tử < 0
        while (index < size) {
            // nếu < 0 thì xóa nhưng k được tăng index vì sau khi xóa vector tự động giảm
            if (nums[index] <= 0) {
                nums.erase(nums.begin() + index);
            } else {
                // chỉ khi nào >= 0 thì mới tăng thêm 
                index = index+1;
            }
        } 

        // sau khi xóa thì sắp xếp lại các phần tử từ bé đén lớn
        sort(nums.begin(), nums.end());
        
        vector <int> check;
        for (int i = nums[0]; i < nums[size-1]; i = i+1) {
            for (int j = 0; j < size; j = j+1) {
                if (i != nums[j]) {
                    check.push_back(i);
                }
            }
        }

        if (check.empty() == true) {
            return check[check.size()-1] + 1; 
        }
        return check[0];
    }
};
