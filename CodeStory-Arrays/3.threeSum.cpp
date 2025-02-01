Three Sum Problem
https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        for(int i = 0;i<nums.size();i++)
        {

            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int target = -(nums[i]);

            int low = i+1;
            int high = nums.size()-1;

            while(low<high)
            {
                
                int total = nums[low] + nums[high];

                if(total == target)
                {
                    res.push_back({nums[i],nums[low],nums[high]});
                    while(low<high && nums[low] == nums[low+1]){
                        low++;
                    }
                    while(low<high && nums[high] == nums[high-1]){
                        high--;
                    }

                    low++;
                    high--;
                }
                else if(total>target){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return res;
    }
};