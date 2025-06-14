class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> d; // value - pos
        for (int i = 0; i < nums.size(); ++i) {
            // count nếu dùng cho map,set thì để kiểm tra xem phần tử có tồn tại chưa
            // count nếu dùng cho vector thì đếm số lần xuất hiện

            // kiểm tra nếu phần tử đã tồn tại trong d -> nghĩa là phần tử lại lặp lại -> tính hiệu của vị trí hiện tại và vị trí cũ xem có thỏa mãn không
            if (d.count(nums[i]) && i - d[nums[i]] <= k) {
                return true;
            }
            d[nums[i]] = i; // cập nhật vị trí mới nếu phần tử có lặp lại sau mỗi lần
        }
        return false;
    }
};
