// LeetCode: https://leetcode.com/problems/climbing-stairs/
#include <vector>
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// DP Approach: dp[i] = number of distinct ways to reach step i
// Recurrence: dp[i] = dp[i-1] + dp[i-2] (climb 1 step from i-1 OR 2 steps from i-2)

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        vector<int> dp(n + 1);
        dp[0] = 1;  // base: 1 way to stay at ground
        dp[1] = 1;  // base: 1 way to reach step 1
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
};