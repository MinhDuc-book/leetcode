class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        // trả về giá trị đầu tiên mà needle xuất hiện trong haystack bằng lệnh find()
        index = haystack.find(needle); 
        return index;
    }
};
