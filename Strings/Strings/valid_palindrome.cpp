// Problem: Valid Palindrome
// Platform: LeetCode
// Approach: Optimal (Two Pointers)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isAlphaNumeric(char ch)
    {
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0, end = s.size() - 1;
        while(st < end)
        {
            while(st < end && !isAlphaNumeric(s[st])) st++;
            while(st < end && !isAlphaNumeric(s[end])) end--;
            if(tolower(s[st]) != tolower(s[end])) return false;
            st++;
            end--;
        }
        return true;
    }
};
