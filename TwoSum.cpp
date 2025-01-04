class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //tạo mảng vector để lưu lại giá trị
        vector<int> save = {};
        //duyệt từng phần tử trong mảng so với 
        for (int i = 0; i < nums.size(); i = i+1 ) {

            for (int j = i+1; j < nums.size(); j = j+1) {
                //nếu đạt điều kiện thì đẩy phần tử đó vào save
                if (nums[i] + nums[j] == target) {
                    save.push_back(i);
                    save.push_back(j);
                }
            }
        }
        return save;
    }
};
