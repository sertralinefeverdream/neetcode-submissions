class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Two-pointer approach
        int l{0};
        int r{1};
        int max_profit{0};

        while (r < prices.size()) {
            if (prices[r] < prices[l]) {
                l = r;
                r++;
                continue;
            }

            const auto curr_profit = prices[r] - prices[l]; 
            if (curr_profit > max_profit) {
                max_profit = curr_profit;
            }
            r++;  
        }

        return max_profit;

    }
};
