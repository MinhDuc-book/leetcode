class Solution {
public:
    int lengthOfLastWord(string s) {
        int size1 = s.length();
        int count = 0; // đếm số lượng kí tự
        int space = 0; // đếm số dấu space ở cuối chuỗi nếu có

        //duyệt từ cuối chuỗi lên đầu --> đếm dấu space --> nếu xuất hiện kí tự khác thì dừng lại
        for (int i = size1-1; i >= 0; i = i-1) {
            if (s[i] == ' ') {
                space = space + 1;
            } else {
                break;
            }
        }

        //duyệt từ kí tự cuối cùng bằng cách xóa đi mọi dấu space ở cuối cùng --> đếm số kí tự xuất hiện đến khi xuất hiện dấu cách tiếp theo
        for (int i = size1-1-space; i >= 0; i = i-1) {
            if (s[i] != ' ') {
                count = count + 1;
            } else {
                break;
            }
        }
        return count;
    }
};
