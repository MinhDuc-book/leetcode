class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        long long n_ = n;
        bool isAm = false;
        if (n == 0 or x == 1) {
            return 1;
        }

        if (x == -1) {
            return (n % 2 == 0) ? 1 : -1;
        }

        //if (x == -1 and n == INT_MIN) {
        //    return 1;
        //}

        if (n < 0) {
            n_ = n_ * -1;
            isAm = true;
        }

        if (n_ > INT_MAX) {
            n_ = INT_MAX;
        }

        for (int i = 0; i < n_; ++i) {
            result = result * x;
        }

        if (isAm) {
            result = 1.0 / result;
        }

        if (n_ > INT_MAX) {
            for (int i = 0; i < INT_MAX - n; ++i) {
                result = result * x;
            }
        }

        return result;
    }
};
