// Problem: Permutations  
// Platform: LeetCode (46)  
// Approach: Swapping num at index and i and later backtracking from there to find next permutation
// Time Complexity: O(n) where n is matrix dimension  
// Space Complexity: O(1) extra space

class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans, int index) {
        if(index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            helper(nums, ans, index + 1);
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums, ans, 0);
        return ans;
    }
};
