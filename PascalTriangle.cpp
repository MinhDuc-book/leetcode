class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal = generate(numRows-1); // gọi đệ quy hàm lưu vào cho pascal
        vector<int> rows = (numRows,1); // khởi tạo 1 hảng với gtri bdau là 1, kích cỡ numRow 
        // những lệnh if numRows = 1 hoặc = 0 làm tiền đề để thực hiện đệ quy
        //nếu cần in ra hàng 0 thì k có gì cả
        if (numRows == 0) {
            return {};
        }
        //nếu cần in ra hàng 1 thì chỉ có 1
        if (numRows == 1) {
            return {{1}};
        }
        //vòng lặp để thực hiện theo công thức của tam giác pascal
        //ngoài ra vòng lặp còn dùng để chạy đệ quy
        for (int i = 1; i <  numRows-1; i = i+1) {
            /*Công thức của tam giác pascal là:
                vị trí thứ nhất hàng i và vị trí của cùng hàng i = 1
                vị trí thứ j hàng i = (vị trí thứ j hàng i-1) + (vị trí thứ j-1 hàng i-1) 
            */
            // pascal.back() trả về HÀNG CUỐI của pascal
            rows[i] = pascal.back()[i-1] + pascal.back()[i]; // pascal ở dòng này là tam giác pascal với i-1 dòng vì chưa được push_back thêm vào sau
        }
        
        // sau vòng lặp rows được giá trị nào thì đẩy vào pascal
        // pascal là mảng 2 chiều nên lưu đc nhiều hàng rows
        pascal.push_back(rows);
        return pascal;
    }
};
