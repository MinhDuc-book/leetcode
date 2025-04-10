class Solution {
public:
    int possibleStringCount(string word) {
        int size = word.length(); // đưa ra số lượng kí tự trong chuỗi
        int *arr = new int[size]; 
        int *check = new int [size];
        // khởi tạo giá trị cho mảng để đỡ bị lỗi
        for (int i = 0; i < size; i = i+1) {
            arr[i] = 0;
            check[i] = 0;
        }
        // đếm số lần xuất hiện của từng kí tự (không tính lần đầu)
        int total = 0;

        //đánh dấu các số lặp lại để không bị tính lại lần sau
        for (int i = 0; i < size; i = i+1) {
            if (word[i] == word[i+1]) {
                check[i+1] = -10;
            }
        }
        //tính tổng số lần lặp lại của các số có trong dãy và lưu vào biến arr
        for (int i = 0; i < size; i = i+1) {
            int count = 0;
            for (int j = 0; j < size; j = j+1) {
                if (word[i] == word[j]) {
                    count++;
                }
            }
            arr[i] = count-1;
        }
        
        // tổng của số lần xuất hiện lặp lại của các kí tự
        for (int i = 0; i < size; i = i+1) {
            if (check[i] != -10) {
                total = total + arr[i];
            }
        }
        // cộng 1 bởi vì tính cả chuỗi gốc 
        return total+1;
    }
};
