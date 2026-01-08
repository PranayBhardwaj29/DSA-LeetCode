// Problem: Subsets II  
// Platform: LeetCode (90)  
// Approach: Sort array, then backtracking to generate subsets while skipping duplicates at the same recursion level  
// Time Complexity: O(n * 2^n) where n is the number of elements  
// Space Complexity: O(n) extra space for recursion stack (excluding output)

class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        if(i == nums.size())
        {
            allSubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        helper(nums, ans, i + 1, allSubsets);
        ans.pop_back();
        int j = i + 1;
        while(j < nums.size() && nums[j] == nums[i]) j++;
        helper(nums, ans, j, allSubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubsets;
        vector<int> ans;
        int i = 0;
        helper(nums, ans, i, allSubsets);
        return allSubsets;
    }
};
