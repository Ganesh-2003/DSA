// LeetCode: https://leetcode.com/problems/partition-equal-subset-sum/
// Given an integer array nums, return true if you can partition the array into two subsets
// such that the sum of the elements in both subsets is equal or false otherwise.

#include <vector>

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;

        for (int n : nums)
            totalSum += n;

        if (totalSum % 2 != 0)
            return false;

        int target = totalSum / 2;
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        return checkPartition(nums, target, 0, dp);
    }

    bool checkPartition(vector<int>& nums, int targetSum, int currentIndex,
                        vector<vector<int>>& dp) {

        if (targetSum == 0)
            return true;

        if (currentIndex >= nums.size())
            return false;

        if (dp[currentIndex][targetSum] != -1)
            return dp[currentIndex][targetSum];

        bool consider = false;

        if (nums[currentIndex] <= targetSum)
            consider = checkPartition(nums, targetSum - nums[currentIndex],
                                      currentIndex + 1, dp);

        bool notConsider =
            checkPartition(nums, targetSum, currentIndex + 1, dp);

        return dp[currentIndex][targetSum] = consider || notConsider;
    }
};
