// Problem: First Bad Version
// Platform: LeetCode
// Approach: Optimal (Binary Search)
// Time Complexity: O(log n)
// Space Complexity: O(1)

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        long long i = 1, j = n;
        while(i <= j)
        {
            long long mid = i + (j - i) / 2;
            if(isBadVersion(mid)) j = mid - 1;
            else i = mid + 1;
        }
        return i;
    }
};
