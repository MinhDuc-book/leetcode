class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x; // lưu lại giá trị của biến x
        long reverse = 0; // lưu giá trị khời taok của số đảo ngược là 0

        //x < 0  thì không phải số nghịch đảo
        while (x > 0) {

            int last_digit = x % 10; // sau mỗi lần lặp thì lấy số cuối cùng của số trc đó
            reverse = reverse * 10 + last_digit; // sau mỗi lần lặp tăng 10 đơn vị rồi        cộng với số cuối cùng của số trc đó
            x = x/10; // sau mỗi lần lặp thì chia x cho 10 để lấy last_digit mới
        }
        return (reverse == temp);
        
    }
};
/*
    *lấy đảo ngược của số n bằng cách mỗi lần lặp sẽ lấy số cuối cùng của n
    *sau đó lấy số đảo ngược đc khởi tạo = 0 nhân 10 + số cuối cùng --> tạo được số mới ngược với số ban đầu
    *trả về gtri cần tìm
*/
