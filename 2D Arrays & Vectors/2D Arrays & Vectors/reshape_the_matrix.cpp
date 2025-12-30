// Problem: Reshape the Matrix  
// Platform: LeetCode (566)  
// Approach: Flatten to 1D then reshape if total elements match, else return original  
// Time Complexity: O(m*n) where m,n are original dimensions  
// Space Complexity: O(r*c) for new matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c) return mat;
        vector<vector<int>> ans(r, vector<int>(c, 0));
        int idx = 0;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                ans[i][j] = mat[idx / mat[0].size()][idx % mat[0].size()];
                idx++;   
            }
        }
        return ans;
    }
};
