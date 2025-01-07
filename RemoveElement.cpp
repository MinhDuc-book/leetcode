class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        //lặp đến cuối vector
        int i = 0;
        while (i < nums.size()) {
            // nếu nums[i] = val thì xóa giá trị tại nums[i] nhưng k được tăng i vì vector sau khi xóa sẽ tự động giảm 1 
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
            // nếu nums[i]!= val thì tăng i thêm 1
            } else {
                i = i+1;
            }
        } 
        //
        return nums.size(); // trả về số giá trị còn lại của vector
    }
};
