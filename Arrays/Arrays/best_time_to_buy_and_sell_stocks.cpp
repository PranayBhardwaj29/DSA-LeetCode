// Problem: Best Time to Buy and Sell Stocks
// Platform: LeetCode
// Approach: Optimal
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int bestBuy = prices[0], maxProfit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit,prices[i] - bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
