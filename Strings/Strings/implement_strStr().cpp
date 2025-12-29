// Problem: Find the Index of the First Occurrence in a String
// Platform: LeetCode
// Approach: Optimal (KMP Algorithm)
// Time Complexity: O(n + m)
// Space Complexity: O(m)

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if (needle.size() > haystack.size()) return -1;
        for(int i = 0; i <= haystack.length() - needle.size(); i++)
        {
            int j;
            for(j = 0; j < needle.size(); j++)
            {
                if(haystack[i + j] != needle[j])
                {
                    break;
                }
            }
            if(j == needle.length())
            {
                return i;
            }
        }
        return -1;
    }
};
