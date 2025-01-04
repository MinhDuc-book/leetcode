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
                if (vec.empty() || // nếu vector rỗng nghĩa là không có phần tử ( [ { nào  
                    (c == ')' && vec.back() != '(') || //nếu có đóng ngoặc thì trc đó phải có dấu mở ngoặc nếu k thì kh thỏa mãn ycau 
                    (c == '}' && vec.back() != '{') ||
                    (c == ']' && vec.back() != '[')) {
                    return false; 
                }
                vec.pop_back(); // nếu ngược lại với điều kiện trên -> xóa đi phần tử cuối cùng của vector -> nghĩa la mỗi lần ktra nếu điều kiện trên sai thì có tồn tại cặp ngoặc thỏa mãn -> xóa dấu mở ngoặc đi -> lặp tiếp
            }
        }
        return vec.empty(); 
    }
};
//tạo 1 vector để duyệt từ đầu chuỗi đến cuối chuỗi
//nếu gặp dấu mở ngoặc thì đưa vào cuỗi vector nếu k thì vector sẽ trống
// nếu vector trống hoặc chỉ có dấu đóng ngoặc mà k có dấu mở ngoặc thì trả về false
// nếu có dấu mở ngoặc trước đó thì xóa đi phần tử cuối (chính là dấu mở ngoặc đc đưa vào trc đó) 
// lặp lại đến khi duyệt hết chuỗi
// nếu vector rỗng thì nghĩa là có tồn tại cặp ngoặc 
// nếu k rỗng nghĩa là có lưu lại dấu mở ngoặc nhưng k có dấu đóng ngoặc
