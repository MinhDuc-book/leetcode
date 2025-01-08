class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal; // khai báo tam giác pascal
        //vòng lặp từng hàng của tam giác
        //bắt đầu từ i = 0 là dòng 1 của tam giác
        for (int i = 0; i < numRows; i = i+1) {
            vector <int> rows(i+1,1); // mỗi hàng có i+1 phần tử và khởi tạo giá trị = 1
            // cho j chạy từ 1 nghĩa là chạy từ phần tử thứ 2 của hàng i do phần tử thứ nhất và cuối cùng mặc định = 1
            for (int j = 1; j < i; j = j+1) {
                // đây là công thức tính của tam giác pascal
                rows[j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            pascal.push_back(rows); // đưa các phần tử vừa tính được vào mảng 2 chiều pascal
        }
        return pascal;
    }
};
