// Problem: Subsets  
// Platform: LeetCode (78)  
// Approach: Backtracking to include/exclude each element and generate all subsets  
// Time Complexity: O(n * 2^n) where n is the number of elements  
// Space Complexity: O(n) extra space for recursion stack (excluding output)

class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans,int i, vector<vector<int>>& allSubsets){
        if(i == nums.size()) 
        {
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        helper(nums, ans, i + 1, allSubsets);
        ans.pop_back();
        helper(nums, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        int i = 0;
        vector<int> ans;
        helper(nums, ans, i, allSubsets);
        return allSubsets;
    }
};
