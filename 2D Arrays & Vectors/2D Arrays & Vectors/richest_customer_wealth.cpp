// Problem: Richest Customer Wealth  
// Platform: LeetCode (1672)  
// Approach: Sum each customer's accounts row-wise, track maximum wealth  
// Time Complexity: O(m*n) where m is customers, n is banks  
// Space Complexity: O(1) extra space

class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxSum = INT_MIN;
        for(int i = 0; i < acc.size(); i++)
        {
            int currSum = 0;
            for(int j = 0; j < acc[0].size(); j++)
            {
                currSum += acc[i][j];
            }
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
