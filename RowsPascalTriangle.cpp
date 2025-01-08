class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // khai báo để lấy hàng cần in
        vector <int> row (rowIndex+1, 1);
        //điều kiện kết thúc vòng lặp
        //cũng là để thực hiện đệ quy
        if (rowIndex == 0) {
            return {1};
        }

        if (rowIndex == 1) {
            return {1,1};
        }

        vector <int> temp = getRow(rowIndex-1);// đệ quy hàng trước của hàng cần in
        //chạy từ 1 đến phần tử cuối cùng của hàng trước
        //để cộng tất cả theo những quy tắc của pascal
        for (int i = 1; i < rowIndex; i = i+1) {
            // công thức của pascal
            row[i] = temp[i-1] + temp[i];
        }
        return row;// in ra hàng thứ rowIndex
    }
};
