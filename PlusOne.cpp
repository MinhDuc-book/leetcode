class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int siz = digits.size(); // trả về độ dài vector 

        // duyệt từ cuối vector lên đầu --> nếu gtri thứ i của vector < 9 thì cộng 1 vào
        // nếu nó bằng 9 thì chuyển thành 0 vì 9 + 1 = 10 (giữ 0 nhớ 1)
        for (int i = siz-1; i >= 0;i = i-1) {
            if (digits[i] < 9) {
                digits[i] = digits[i] + 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }

        //nếu kết thúc vòng lặp for mà vẫn chưa được trả về kết quả --> toàn bộ các số trong vector là 9
        // --> chuyển hết về 0 và thêm 1 vào đầu mảng (VD: 99+1 = 100)
        digits.insert(digits.begin(),1);
        return digits;
    }
};
