Best Time to Buy and Sell Stock: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int i = 0;
        int j = 1;
        while (j < prices.size()) {
            if (prices[j] > prices[i]) {
                maxi = max(maxi, prices[j] - prices[i]);
                j++;
            } else {
                i = j;
                j++;
            }
        }
        return maxi;
    }
};
