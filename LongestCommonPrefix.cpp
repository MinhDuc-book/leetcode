class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0]; // giả sử tiền tố dài nhất là string đầu tiên của MẢNG
        //chạy vòng lặp để so sánh giữa prefix và các phần tử còn lại trong mảng
        for (int i = 1; i < strs.size(); i = i+1) {
            // thực hiện while đến khi nào vị trí đầu tiên của prefix là 0
            // nếu k thì giảm bớt độ dài prefix
            while (strs[i].find(prefix) != 0) {
                //find() dùng để trả về vị trí đầu tiên của prefix trong str[i];
                 //giảm bớt độ dài nếu chưa tìm đc
                prefix = prefix.substr(0, prefix.length()-1); // câu lệnh trả về string từ 0 đến độ dài của prefix - 1
                if (prefix == "") return "";
            }
        }
        return prefix;
    }
};
