#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem chuỗi có sắp xếp giảm dần không
bool isDescending(const string& s) {
    for (int i = 0; i < (int)s.size() - 1; ++i) {
        if (s[i] < s[i + 1]) return false;
    }
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<char> letters(N);
    for (int i = 0; i < N; ++i) {
        cin >> letters[i];
    }

    // Loại bỏ trùng lặp, vì đề yêu cầu các bộ gồm K chữ cái *khác nhau*
    sort(letters.begin(), letters.end());
    letters.erase(unique(letters.begin(), letters.end()), letters.end());

    vector<string> result;

    // Sinh tất cả tổ hợp K chữ cái
    vector<bool> select(letters.size(), false);
    fill(select.end() - K, select.end(), true);

    do {
        string combination;
        for (int i = 0; i < letters.size(); ++i) {
            if (select[i]) combination += letters[i];
        }

        if (isDescending(combination)) {
            sort(combination.begin(), combination.end()); // để in ra theo thứ tự tăng dần
            result.push_back(combination);
        }

    } while (next_permutation(select.begin(), select.end()) && result.size() < 100);

    sort(result.begin(), result.end()); // sắp xếp toàn bộ kết quả theo từ điển

    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}
