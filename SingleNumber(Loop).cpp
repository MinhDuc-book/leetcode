#include <unordered_map>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        if (nums.size() == 1) {
            return nums[0];
        }
        
        unordered_map <int, int> freq; // lưu trữ số lần lặp lại của từng phần tử
        for (int i : nums) {
            // duyệt đến phần tử nào thì phần tử đó sẽ được so sánh với phần tử cặp bên trong của freq và sau đó nếu đã tồn tại bên trong freq thì sẽ được tăng giá trị second
            freq[i]++;
        }

        for (const auto &pair : freq) {
            if (pair.second == 1) {
                result = pair.first;
            }
        }
        return result;
    }
};
