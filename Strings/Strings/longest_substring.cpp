// Problem: Longest Substring Without Repeating Characters
// Platform: LeetCode
// Approach: Optimal (Sliding Window)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int l = 0;
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(mp.find(ch) != mp.end() && mp[ch] >= l) l = mp[ch] + 1;
            mp[ch] = i;
            maxLen = max(maxLen, i - l + 1);
        }
        return maxLen;
    }
};
