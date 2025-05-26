class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while (x != 0) {
            result = result*10 + x%10;
            x = x / 10;
        }
        if (result > pow(2,31)-1 or result < pow(-2,31)){
            return 0;
        }
        return result;
    }
};
