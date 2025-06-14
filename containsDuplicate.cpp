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

// Có cách khác là sử dụng hàm sort (nums.begin(), nums.end()) để sắp xếp
// Sau khi sắp xếp thì các phần tử bị lặp lại sẽ ở gần nhau
// Dùng lặp để duyệt qua và trả về kết quả
