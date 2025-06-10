// XOR trong toán rời rạc sẽ đúng khi chỉ 1 trong 2 đúng và sai khi cả 2 đúng hoặc sai

// XOR trong C++ thì dùng để so sánh 2 giá trị binary ở 2 vế bằng kí tự "^" - nghĩa là nó tách từng phần tử trong binary rồi so sánh 2 giá trị đó


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1=0; // khởi tạo ban đầu của xor để lưu trữ kết quả
        for(int i=0;i<nums.size();i++){
            xor1=xor1^nums[i]; // so sánh xor1 với số hiện tại đang duyệt đến
        }
        return xor1;
    }
};


/*
*Ví dụ với 2 số 5 và 3
5(hệ 10) = 101 (hệ 2)
3(hệ 10) = 011(hệ nhị)
Khi so sánh ta thấy
    - Ở vị trí thứ 1 và 0 thì sẽ trả về 1 (true)
    - Ở vị trí thứ 2 thấy 0 và 1 thì sẽ trả về 1 (true)
    - Ở vị trí thứ 3 thấy 1 và 1 thì trả về 0 (false)
    - Tổng kết thu được 110 (hệ nhị) = 6 (hệ 10)
*/

// Nhờ tính chất này khi so sánh các phần tử trong mảng thì sẽ thu được kết quả cuối cùng trả về giá trị xuất hiện duy nhất 1 lần trong mảng
