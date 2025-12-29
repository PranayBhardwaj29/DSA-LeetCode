// Problem: Longest Common Prefix
// Platform: LeetCode
// Approach: Optimal (Horizontal Scanning)
// Time Complexity: O(S)
// Space Complexity: O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int minLength = INT_MAX;
        for(string s : strs)
        {
            minLength = min(minLength, (int)s.size());
        }
        for(int j = 0; j < minLength; j++)
        {
            char ch = strs[0][j];
            for(int i = 1; i < strs.size(); i++)
            {
                if(strs[i][j] != ch)
                {
                    return ans;
                }
            }
            ans += ch;
        }
        return ans;
    }
};
