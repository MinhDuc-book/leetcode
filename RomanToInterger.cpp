class Solution {
public:
    int romanToInt(string s) {
        //tạo mẫu cho số La Mã và số nguyên
        char romanNum[7] = {'I','V','X','L','C','D','M'};
        int normalNum[7] = {1,5,10,50,100,500,1000};
    
        //chuyển số La Mã thành số nguyên và đưa vào mảng arr_num
        int arr_num[100] = {0};
        for (int i = 0; i < s.length(); i = i+1) {
            for (int j = 0; j < 7; j = j+1) {
                if (s[i] == romanNum[j]) {
                    arr_num[i] = normalNum[j];
                }
            }
        }
        
        //kiếm tra nếu số đằng trc < số đằng sau thì số đằng trc lấy dấu âm
        int sum = 0;
        for (int i = 0; i < s.length(); i = i+1) {
            if (arr_num[i] < arr_num[i+1]) {
                arr_num[i] = arr_num[i] - 2*arr_num[i];
            }
        }

        //tính tổng để in ra số nguyên sau khi chuyển từ số la mã
        for (int i = 0; i < s.length(); i = i+1) {
            sum = sum + arr_num[i];
        }
        return sum;
    }
};
