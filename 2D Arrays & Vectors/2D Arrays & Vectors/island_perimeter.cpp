// Problem: Island Perimeter  
// Platform: LeetCode (463)  
// Approach: Check 4 directions per cell, count exposed edges (no neighbor or out-of-bounds)  
// Time Complexity: O(m*n) where m,n are grid dimensions  
// Space Complexity: O(1) extra space

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                int neighbours = 0;
                if(grid[i][j] == 1)
                {
                    if(i > 0 && grid[i - 1][j] == 1) neighbours++;
                    if(j > 0 && grid[i][j - 1] == 1) neighbours++;
                    perimeter += 4 - (neighbours * 2);
                }
            }
        }
        return perimeter;
    }
};
