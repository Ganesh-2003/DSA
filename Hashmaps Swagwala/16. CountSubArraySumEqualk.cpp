16. Count number of subarray sums equal to k
https://leetcode.com/problems/subarray-sum-equals-k/



class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
    
            unordered_map<int,int> mp;
            int count = 0;
            int prefixSum = 0;
            mp[0] = 1;
    
            for(int i = 0;i<nums.size();i++)
            {
                prefixSum = prefixSum + nums[i];
    
                int target = prefixSum - k;
                if(mp.find(target) != mp.end())
                {
                    count = count + mp[target];
                }
                mp[prefixSum]++;
            }
            return count;
        }
    };