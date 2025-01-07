class Solution {
public:
    int possibleStringCount(string word) {
        int size = word.length();
        int *arr = new int[size];
        int *check = new int [size];
        //đưa vào các gtri khởi tạo cho mảng tránh bị lỗi
        for (int i = 0; i < size; i = i+1) {
            arr[i] = 0;
            check[i] = 0;
        }
        // tính tổng số lần xuất hiện của các kí tự có trong chuỗi và lưu vào biến arr
        int total = 0;

        //đánh dấu các kí tự bị lặp lại để tránh bị tính lại lần sau
        for (int i = 0; i < size; i = i+1) {
            for (int j = i+1; j < size; j = j+1) {
                if (word[i] == word[j]) {
                    check[j] = -10;
                }
                
            }
        }
        //lưu số lần lặp lại vào biến arr
        for (int i = 0; i < size; i = i+1) {
            int count = 0;
            for (int j = i+1; j < size; j = j+1) {
                if (word[i] == word[j]) {
                    count++;
                }
                
            }
            arr[i] = count;
        }
        // nếu kí tự sau bằng kí tự trước thì cộng tổng (bởi vì các chuỗi lặp lại có thể bị cắt bởi 1 kí tự khác VD: eejee)
        for (int i = 0; i < size; i = i+1) {
            if (word[i] == word[i+1]) {
                if (check[i] != -10) {
                    total = total + arr[i];
                }
            }
        }
        
        
        return total+1;
    }
};
