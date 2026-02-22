// LeetCode: https://leetcode.com/problems/target-sum/
// You are given an integer array nums and an integer target. You want to build an expression out of nums
// by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.
// Return the number of different expressions that you can build, which evaluates to target.

#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string, int> mp;
        return totalWays(nums, target, 0, mp);
    }

    int totalWays(vector<int>& nums, int targetSum, int index, unordered_map<string, int>& mp) {

        if (index == nums.size() && targetSum == 0) {
            return 1;
        }

        if (index == nums.size() && targetSum != 0) {
            return 0;
        }

        string currentKey = to_string(targetSum) + "_" + to_string(index);

        if (mp.find(currentKey) != mp.end())
            return mp[currentKey];

        int positiveSign = totalWays(nums, targetSum - nums[index], index + 1, mp);
        int negativeSign = totalWays(nums, targetSum + nums[index], index + 1, mp);

        mp[currentKey] = positiveSign + negativeSign;
        return mp[currentKey];
    }
};
