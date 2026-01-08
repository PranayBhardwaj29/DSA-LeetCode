// Problem: Pow(x, n)  
// Platform: LeetCode (50)  
// Approach: Fast power / binary exponentiation (exponentiation by squaring), handle negative n with reciprocal  
// Time Complexity: O(log |n|)  
// Space Complexity: O(1) for iterative, O(log |n|) for recursive version

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1 || n == 0)
            return 1;
        if (x == 0)
            return 0;
        long long binForm = n;
        if (n < 0) {
            x = 1 / x;
            binForm = -binForm;
        }

        double ans = 1;
        while (binForm > 0) {
            if (binForm % 2 == 1)
                ans *= x;
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};
