// LeetCode: https://leetcode.com/problems/delete-and-earn
// Problem: Maximize points by choosing a number and earning its value,
// while deleting all occurrences of that number - 1 and number + 1.

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int maxi = nums[0];
        unordered_map<int, int> mp;
        vector<int> freq(10001, 0);

        for (auto i : nums)
            freq[i]++;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxi)
                maxi = nums[i];
        }

        return maxPoints(nums, freq, maxi, 0, mp);
    }

    int maxPoints(vector<int>& nums, vector<int>& freq, int maxi, int currentIndex, unordered_map<int, int>& mp) {

        if (currentIndex > maxi)
            return 0;
        
        int currentKey = currentIndex;

        if (mp.find(currentKey) != mp.end())
            return mp[currentKey];

        int delNode = 0;

        if (freq[currentIndex] > 0)
            delNode = currentIndex * freq[currentIndex] + maxPoints(nums, freq, maxi, currentIndex + 2, mp);
            
        int notDel = maxPoints(nums, freq, maxi , currentIndex + 1, mp);

        mp[currentKey] = max(delNode, notDel);
        return mp[currentKey];
    }
};

