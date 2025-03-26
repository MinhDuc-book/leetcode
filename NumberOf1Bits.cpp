class Solution {
public:
    // sử dụng vector vì nếu dùng mảng hoặc con trỏ thì sau khi kết thúc hàm, stack sẽ xóa mất --> sau không truy cập được
    vector<int> changeToBinary(int n) {
        vector <int> binary;
        int index = 0;
        while(n != 0) {
            binary.push_back(n%2);
            index++;
            n = n/2;
        }

        return binary;
    }

    int hammingWeight(int n) {
        vector <int> binaryy = changeToBinary(n);
        
        int count = 0;
        for (int i = 0; i < binaryy.size(); ++i) {
            if (binaryy[i] == 1) {
                count ++;
            }
        }
        return count;
    }
};
