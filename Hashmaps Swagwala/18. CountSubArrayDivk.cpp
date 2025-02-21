
https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/1550048018/


class Solution {
    public:
        int subarraysDivByK(vector<int>& nums, int k) {
            
            unordered_map<int,int> mp;
            int prefixSum = 0;
            mp[0] = 1;
            int count = 0;
    
            for(int i = 0;i<nums.size();i++)
            {
                prefixSum = prefixSum + nums[i];
                int target = prefixSum % k;
    
                if(target<0)
                {
                    target = target + k;
                }
                
                if(mp.find(target)!=mp.end())
                {
                    count = count+mp[target];
                }
    
                mp[target] ++;
            }
            return count;
        }
    };
    