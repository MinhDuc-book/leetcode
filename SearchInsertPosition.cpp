class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size1 = nums.size(); // trả về độ dài mảng
        int index = 0;
        int count = 0;

        // duyệt từ đầu đến cuối mảng, nếu có gtri = target thì đưa ra vị trí của nó
        // sau đó tăng thêm 1 vào count để đếm số lần xuất hiện của target trong mảng --> nếu kh có thì thực hiện yêu cầu dưới
        for (int i = 0; i < size1; i = i+1) {
            if (nums[i] == target) {
                index = i;
                count = count + 1;
            } 
        }

        //nếu target kh xuất hiện trong mảng thì duyệt từ đầu đến cuối mảng
        //duyệt đến khi lần cuối cùng mà target >= gtri trong mảng
        //khi đó thì vị trí i+1 là vị trí có thể xuất hiện của target
        if (count == 0) {
            for (int i = 0; i < size1; i = i+1) {
                if (target >= nums[i]) {
                    index = i+1;
                }
            }
        }
        return index;
    }
};
