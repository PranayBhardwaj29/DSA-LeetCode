// Problem: Matrix Diagonal Sum  
// Platform: LeetCode (1572)  
// Approach: Single pass over both diagonals, avoid double-counting center element  
// Time Complexity: O(n) where n is number of rows (or columns)  
// Space Complexity: O(1) extra space

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][i];
            if(i != n - i - 1) sum += mat[i][n - i -1];
        }
        return sum;
    }
};
