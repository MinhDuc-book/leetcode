
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double res = 1;
        while (N > 0) {
            if (N & 1LL) res *= x;
            x *= x;
            N >>= 1;
        }
        return res;
    }
};

// >>= n là toán tử dịch bit nhị phân sang phải n lần
