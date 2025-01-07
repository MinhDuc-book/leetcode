class Solution {
public:
    bool isValid(string s) {
        // dùng vector để duyệt từng phần tử
        vector <char> vec; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                // thỏa mãn điều kiện có dấu mở ngoặc thì đẩy các phần tử đó vào vector
                vec.push_back(c); 
            } else { 
                if (vec.empty() || // nếu vector rỗng nghĩa là không có phần tử ( [ { nào có trong chuỗi kí tự cần kiểm tra
                    (c == ')' && vec.back() != '(') || //nếu có đóng ngoặc thì trc đó phải có dấu mở ngoặc nếu k thì kh thỏa mãn ycau 
                    (c == '}' && vec.back() != '{') ||
                    (c == ']' && vec.back() != '[')) {
                    return false; 
                }
                vec.pop_back(); // nếu ngược lại với điều kiện của else -> xóa đi phần tử cuối cùng của vector -> nghĩa la mỗi lần ktra nếu điều kiện trên sai thì có tồn tại cặp ngoặc thỏa mãn -> xóa dấu mở ngoặc đi -> lặp tiếp
            }
        }
        return vec.empty(); // nếu vector rỗng nghĩa là đã đc xóa đi cặp ngoặc --> true
    }
};
//tạo 1 vector để duyệt từ đầu chuỗi đến cuối chuỗi
//nếu gặp dấu mở ngoặc thì đưa vào vector (hàm push_back) nếu k thì vector sẽ trống
// nếu vector trống hoặc chỉ có dấu đóng ngoặc mà k có dấu mở ngoặc thì trả về false --> tại vì k thỏa mãn có đủ đóng và mở ngoặc
// duyệt và nếu thấy có dấu đóng ngoặc mà ktra ở cuối vector k có đấu mở ngoặc thì chứng tỏ là k thỏa mãn -- > trả về false 
// sau mỗi lần kiểm tra cặp ngoặc như thế thì xóa đi cái mở ngoặc ban đầu đưa vào để kiểm tra cho lần sau
// lặp lại đến khi duyệt hết chuỗi
// nếu vector rỗng thì nghĩa là có tồn tại cặp ngoặc 
// nếu k rỗng nghĩa là có lưu lại dấu mở ngoặc nhưng k có dấu đóng ngoặc
