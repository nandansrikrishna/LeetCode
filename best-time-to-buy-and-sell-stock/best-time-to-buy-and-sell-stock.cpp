class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;

        int left = 0;
        int right = 1;
        while (right < prices.size()) {
            int curr_profit = prices[right] - prices[left];
            if (curr_profit < 0) {
                left = right;
            }
            else if (curr_profit > max_profit) {
                max_profit = curr_profit;
            }
            ++right;
        }

        return max_profit;
    }
};