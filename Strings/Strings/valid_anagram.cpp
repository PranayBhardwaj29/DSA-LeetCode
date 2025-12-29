// Problem: Valid Anagram
// Platform: LeetCode
// Approach: Optimal (Counting Sort)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < t.length(); i++)
        {
            freq[t[i] - 'a']--;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(freq[s[i] - 'a'] != 0) return false;
        }
        return true;
    }
};
