#include <iostream>

using namespace std;

// hàm dùng để đếm số lượng chữ số 
int SoLuong(int n) {
    int count = 0;
    while (n != 0) {
        count = count + 1;
        n = n/10;
    }
    return count;
}

//hàm dùng để đếm số lượng số lẻ trong 1 số
int SoLuongSoLe(int n) {

    int so_luong = SoLuong(n);//gọi lại hàm trả về số lượng chữ số
    int count = 0;
    
    for (int i = 0; i < so_luong; i = i+1) {
        // nếu n khác 0 thì thực hiện
        while (n != 0) {
            int x = n%10; // biến x trả về số cuối của n
            if (x % 2 == 1) {
                count = count + 1;
            }
            n = n/10;// n càng ngày càng thu nhỏ lại
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i = i+1) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i = i+1) {
        int check = SoLuongSoLe(arr[i]);
        if (check == k) {
            count = count + 1;
        }
    }
    cout << count;
}
