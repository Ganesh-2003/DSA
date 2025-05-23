Leetcode: https://leetcode.com/problems/subarrays-with-k-different-integers/

class Solution {
    public:
         int subArray(vector<int> &nums, int k)
        {
            int n = nums.size();
    
            int count = 0;
            int i = 0;
            int j = 0;
            int ans = 0;
            unordered_map<int,int> mp;
    
            while(j<n)
            {
                mp[nums[j]]++;
    
                while(mp.size() > k)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                    {
                        mp.erase(nums[i]);
                    }
                    i++;
                }
    
                count += j-i+1;
                j++;
            }
            return count;
        }
    
        int subarraysWithKDistinct(vector<int>& nums, int k) {
            return subArray(nums,k) - subArray(nums,k-1);
        }
    };