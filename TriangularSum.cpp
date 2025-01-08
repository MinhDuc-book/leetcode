class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size = nums.size(); // trả về số phần tử trong mảng
        if (size == 1) return nums[0]; // nếu có 1 phần tử thì in luôn

      //nếu size > 1 thì thực hiện tính tổng
        while (size > 1) {
            for (int i = 0; i < size-1; i = i+1) {
                nums[i] = (nums[i] + nums[i+1]) % 10; // thực hiện theo yêu cầu đề bài nhưng k cần thêm mảng mới
            }
            size--; // sau mỗi lần lặp giảm đi 1 size để loại bỏ phần tử cuối của mảng cũ do không xóa được
        }
        // sau khi lặp hết đủ số lần để size = 1 thì còn 1 giá trị là tổng tam giác
        return nums[0]; 
    }
};
