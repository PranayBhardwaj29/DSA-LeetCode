// Problem: Flipping an Image  
// Platform: LeetCode (832)  
// Approach: Reverse each row horizontally then invert 0s to 1s and 1s to 0s in-place  
// Time Complexity: O(n²) where n is matrix dimension  
// Space Complexity: O(1) extra space

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row : image) {
            int l = 0, r = row.size() - 1;
            while (l <= r) {
                int temp = row[l] ^ 1;
                row[l] = row[r] ^ 1;
                row[r] = temp;
                l++;
                r--;
            }
        }
        return image;
    }
};
