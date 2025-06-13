class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxProfit = 0;
        int currProfit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else {
                currProfit = prices[i] - buy;
                maxProfit = max(currProfit, maxProfit);

            }
        }

        return maxProfit;
    }
};

// khởi tạo cho giá trị mua ban đầu là giá trị đầu tiên của mảng
// vòng lặp so sánh giá trị mua hiện tại với giá trị ở thời điểm (ô) đang tính
// nếu giá trị mua nhỏ hơn thì cập nhật buy còn nếu giá trị mua lớn hơn hoặc bằng thì tính hiệu của giá trị của thời điểm đang tính - giá trị mua hiện tại
// cập nhật lợi nhuận max
