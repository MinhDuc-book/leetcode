class Solution {
public:
    bool isIncrease(vector<int> prices) {
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < prices[i - 1]) {
                return false;
            }
        }
        return true;
    }

    bool isDecrease(vector<int> prices) {
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                return false;
            }
        }
        return true;
    }

    int maxProfit(vector<int>& prices) {
        int sum = 0;
        if (isDecrease(prices)) {
            return 0;
        }

        if (isIncrease(prices)) {
            return (prices.back() - prices[0]);
        }
        
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                sum += prices[i] - prices[i - 1];
            }
        }
        return sum;
    }
}
;
